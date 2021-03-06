/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

package org.apache.axis2.schema.enumeration;

import junit.framework.TestCase;
import org.apache.axiom.om.OMAbstractFactory;
import org.apache.axiom.om.OMElement;
import org.apache.axiom.om.util.StAXUtils;
import org.tempuri.CountPlacesInRect;
import org.tempuri.PlaceType;

import javax.xml.stream.XMLStreamReader;
import java.io.ByteArrayInputStream;


public class EnumerationTest extends TestCase {

    public void testEnumeration(){

        CountPlacesInRect countPlacesInRect = new CountPlacesInRect();
        countPlacesInRect.setLowerright("lowerright");
        countPlacesInRect.setUpperleft("upperleft");
        countPlacesInRect.setPtype(PlaceType.River);

       try {
            OMElement omElement = countPlacesInRect.getOMElement(CountPlacesInRect.MY_QNAME,OMAbstractFactory.getOMFactory());
            String omElementString = omElement.toStringWithConsume();
            System.out.println("OM String ==> " + omElementString);
            XMLStreamReader xmlReader = StAXUtils.createXMLStreamReader(new ByteArrayInputStream(omElementString.getBytes()));
            CountPlacesInRect newObject = CountPlacesInRect.Factory.parse(xmlReader);
            assertEquals(countPlacesInRect.getPtype(),PlaceType.River);
        } catch (Exception e) {
            assertFalse(true);
        }
    }
}
