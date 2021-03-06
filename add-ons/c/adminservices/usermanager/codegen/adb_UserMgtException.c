/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
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


        /**
         * adb_UserMgtException.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_UserMgtException.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = UserMgtException
                 * Namespace URI = http://service.mgt.user.carbon.wso2.org/xsd
                 * Namespace Prefix = ns1
                 */
           


        struct adb_UserMgtException
        {
            axis2_char_t *property_Type;

            axiom_node_t* property_Exception;

                
                axis2_bool_t is_valid_Exception;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_UserMgtException_t* AXIS2_CALL
        adb_UserMgtException_create(
            const axutil_env_t *env)
        {
            adb_UserMgtException_t *_UserMgtException = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _UserMgtException = (adb_UserMgtException_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_UserMgtException_t));

            if(NULL == _UserMgtException)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_UserMgtException, 0, sizeof(adb_UserMgtException_t));

            _UserMgtException->property_Type = axutil_strdup(env, "adb_UserMgtException");
            _UserMgtException->is_valid_Exception  = AXIS2_FALSE;
            

            return _UserMgtException;
        }

        adb_UserMgtException_t* AXIS2_CALL
        adb_UserMgtException_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _Exception)
        {
            adb_UserMgtException_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_UserMgtException_create(env);

            
              status = adb_UserMgtException_set_Exception(
                                     adb_obj,
                                     env,
                                     _Exception);
              if(status == AXIS2_FAILURE) {
                  adb_UserMgtException_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_UserMgtException_free_popping_value(
                        adb_UserMgtException_t* _UserMgtException,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _UserMgtException->property_Exception;

                    adb_UserMgtException_free(_UserMgtException, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_UserMgtException_free(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _UserMgtException,
                env,
                "adb_UserMgtException");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UserMgtException_free_obj(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _UserMgtException, AXIS2_FAILURE);

            if (_UserMgtException->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _UserMgtException->property_Type);
            }

            adb_UserMgtException_reset_Exception(_UserMgtException, env);
            

            if(_UserMgtException)
            {
                AXIS2_FREE(env->allocator, _UserMgtException);
                _UserMgtException = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_UserMgtException_deserialize(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _UserMgtException,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_UserMgtException");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UserMgtException_deserialize_obj(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _UserMgtException, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for UserMgtException : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building Exception element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "Exception", "http://service.mgt.user.carbon.wso2.org", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_UserMgtException_set_Exception(_UserMgtException, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_UserMgtException_set_Exception(_UserMgtException, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Exception ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_UserMgtException_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_UserMgtException_declare_parent_namespaces(
                    adb_UserMgtException_t* _UserMgtException,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_UserMgtException_serialize(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_UserMgtException == NULL)
            {
                return adb_UserMgtException_serialize_obj(
                    _UserMgtException, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _UserMgtException, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_UserMgtException");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_UserMgtException_serialize_obj(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _UserMgtException, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"UserMgtException\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://service.mgt.user.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "UserMgtException", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://service.mgt.user.carbon.wso2.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://service.mgt.user.carbon.wso2.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://service.mgt.user.carbon.wso2.org",
                                            p_prefix));
                       }
                      

                   if (!_UserMgtException->is_valid_Exception)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Exception"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Exception")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing Exception element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sException>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sException>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = axiom_node_to_string(_UserMgtException->property_Exception, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for Exception by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_UserMgtException_get_property1(
                adb_UserMgtException_t* _UserMgtException,
                const axutil_env_t *env)
            {
                return adb_UserMgtException_get_Exception(_UserMgtException,
                                             env);
            }

            /**
             * getter for Exception.
             */
            axiom_node_t* AXIS2_CALL
            adb_UserMgtException_get_Exception(
                    adb_UserMgtException_t* _UserMgtException,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserMgtException, NULL);
                  

                return _UserMgtException->property_Exception;
             }

            /**
             * setter for Exception
             */
            axis2_status_t AXIS2_CALL
            adb_UserMgtException_set_Exception(
                    adb_UserMgtException_t* _UserMgtException,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_Exception)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserMgtException, AXIS2_FAILURE);
                
                if(_UserMgtException->is_valid_Exception &&
                        arg_Exception == _UserMgtException->property_Exception)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_UserMgtException_reset_Exception(_UserMgtException, env);

                
                if(NULL == arg_Exception)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UserMgtException->property_Exception = arg_Exception;
                        _UserMgtException->is_valid_Exception = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Exception
            */
           axis2_status_t AXIS2_CALL
           adb_UserMgtException_reset_Exception(
                   adb_UserMgtException_t* _UserMgtException,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UserMgtException, AXIS2_FAILURE);
               

               _UserMgtException->is_valid_Exception = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Exception is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UserMgtException_is_Exception_nil(
                   adb_UserMgtException_t* _UserMgtException,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserMgtException, AXIS2_TRUE);
               
               return !_UserMgtException->is_valid_Exception;
           }

           /**
            * Set Exception to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UserMgtException_set_Exception_nil(
                   adb_UserMgtException_t* _UserMgtException,
                   const axutil_env_t *env)
           {
               return adb_UserMgtException_reset_Exception(_UserMgtException, env);
           }

           

