/*
 * Copyright 2005,2006 WSO2, Inc. http://wso2.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OMATTRIBUTE_H
#define OMATTRIBUTE_H

#include <WSFDefines.h>
#include <OMNamespace.h>
#include <OMObject.h>
#include <axiom_attribute.h>
#include <OMException.h>

/**
 * @file OMAttribute.h
 */

/**
 * @brief namespace wso2wsf Namespace of WSO2 Web Services Framework.
 */
namespace wso2wsf
{
    /**
     * @defgroup om_attribute OM Attribute
     * @ingroup wso2wsf
     * @{
     */

    /**
     * @brief class OMAttribute Defines the base class used to represent attributes in
     * the Axis Object Model. Attributes are typically composed of a name and value pair.
     * This class provides an abstraction to occurances of attributes associated
     * with the XML model.
     */
    class OMAttribute : public OMObject
    {
        /**
         * Overloaded insertion operator, is used for printing the attribute onto a console.
         * @param str existing stream.
         * @param attribute OMAttribute object.
         * @return a modified output stream is returned.
         */
        friend WSF_EXTERN std::ostream & WSF_CALL operator <<(std::ostream & str, OMAttribute const & attribute);

        /**
         * Overloaded insertion operator, is used for printing the attribute onto a console.
         * @param str existing stream.
         * @param attribute OMAttribute object.
         * @return a modified output stream is returned.
         */
        friend WSF_EXTERN std::ostream & WSF_CALL operator <<(std::ostream & str, OMAttribute const * attribute);

    private:
        /**
         * @var _wsf_axiom_attribute protected variable holds reference for
         * axiom_attribute struct.
         */
        axiom_attribute_t * _wsf_axiom_attribute;

        /**
         * @var _namespace private variable holds the reference to the
         * namespace added in constructor.
         */
        OMNamespace * _namespace;

    public:
        /**
         * Method to get the reference to the axiom_attribute struct.
         * @return reference to the axiom_attribute struct.
         */
        axiom_attribute_t * WSF_CALL getAxiomAttribute();

        /**
         * Method to set the reference to the axiom_attribute struct.
         * @param attribute reference to the axiom_attribute struct.
         */
        void WSF_CALL setAxiomAttribute(axiom_attribute_t * attribute);

        /**
         * Creates a attribute struct.
         * @param name attribute Name.
         * @param value attribute Value.
         * @param ns namespace.
         * @exception OMException an exception is thrown if something goes wrong
         * while creating the object.
         */
        WSF_EXTERN WSF_CALL OMAttribute(std::string name, std::string value, OMNamespace * ns) throw(OMException);

        /**
         * Creates a attribute struct.
         * @param name attribute Name.
         * @param value attribute Value.
         * @exception OMException an exception is thrown if something goes wrong
         * while creating the object.
         */
        WSF_EXTERN WSF_CALL OMAttribute(std::string name, std::string value) throw(OMException);

        /**
         * Copy Constructor.
         * @param attribute attribute to be cloned.
         * @exception OMException an exception is thrown if something goes wrong
         * while creating the object.
         */
        WSF_EXTERN WSF_CALL OMAttribute(OMAttribute & attribute) throw(OMException);

        /**
         * desctructor that frees resources.
         */
        virtual WSF_CALL ~OMAttribute();

        /**
         * Compares two attributes.
         * @param attribute attribute to be compared.
         * @return true if the two attributes are equal, false otherwise.
         */
        WSF_EXTERN bool WSF_CALL equals(OMAttribute * attribute);

        /**
         * Method to obtain value.
         * @return value, NULL on error.
         */
        WSF_EXTERN std::string WSF_CALL getValue();

        /**
         * Method to obtain name.
         * @return attribute name, NULL on error.
         */
        WSF_EXTERN std::string WSF_CALL getName();

        /**
         * Method to obtain namespace.
         * @return attribute namespace, NULL on error.
         */
        WSF_EXTERN OMNamespace * WSF_CALL getNamespace();

        /**
         * Method to set value.
         * @param value attribute Value.
         */
        WSF_EXTERN void WSF_CALL setValue(std::string value);

//        /**
//         * Method to set name.
//         * @param name attribute Name.
//         */
//        void setName(std::string name);

        /**
         * Converts this attribute to a string.
         * @return converted attribute as string.
         */
        WSF_EXTERN virtual std::string WSF_CALL toString();
    };
    /** @} */

    inline std::ostream & WSF_CALL operator <<(std::ostream & str, OMAttribute const & attribute)
    {
        return str << const_cast<OMAttribute &>(attribute).toString();
    }

    inline std::ostream & WSF_CALL operator <<(std::ostream & str, OMAttribute const * attribute)
    {
        return str << const_cast<OMAttribute *>(attribute)->toString();
    }
}
#endif // OMATTRIBUTE_H
