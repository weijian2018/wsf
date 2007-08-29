--TEST--
Test for echo_client sample
--FILE--

<?php


try {

    $client = new WSClient(
        array("wsdl"=>"tests/samples/misc_files/RpcLit_Service.wsdl",
              "useSOAP" => "1.1",
              "to" => $argv[1]));
    $proxy = $client->getProxy();	
    
    $string1 = NULL;
    $val =  $proxy->RetArrayString1D($string1);    
    echo "\n";
    /* if(array_keys($val, "string")) */
/*         echo "ok"; */
    var_dump($val);
    echo "\n";

  /*   $string2 = "One Element"; */
/*     $val =  $proxy->RetArrayString1D(array($string2));     */
/*     echo "\n One Element \n ============\n"; */
/*     echo $val->string."\n"; */
/*     echo "\n"; */

/*     $string3 = array(); */
/*     for($i = 0; $i<10; $i++){ */
/*         $string3[$i] = "string Array Data".$i; */
/*     } */
/*     $val =  $proxy->RetArrayString1D($string3); */
/*     echo "\n Ten Elements \n ============\n"; */
/*     foreach($val->string as $i=> $value){ */
/*         if($value) */
/*             echo $value."\n"; */
        
/*     } */
/*     echo "\n"; */

/*     $string3 = array(); */
/*     for($i = 0; $i<10; $i++){ */
/*         $string3[$i] =  NULL; */
/*     } */
/*     $val =  $proxy->RetArrayString1D($string3); */
/*     echo "\n All ten NULL Elements \n =============\n"; */
/*     foreach($val->string as $i=> $value){ */
/*         if(!$value) */
/*             echo $value."NULL value\n"; */
        
/*     } */
/*     echo "\n"; */

/*     $string4 = array(); */
/*     for($i = 0; $i<10; $i++){ */
/*         if($odd = $i%2) */
/*             $string4[$i] = "string Array Data".$i; */
/*         else */
/*             $string4[$i] = NULL; */

/*     } */
/*     $val =  $proxy->RetArrayString1D($string4); */
/*     echo "\n Ten with NULL Elements \n =============\n"; */
/*     foreach($val->string as $i=> $value){ */
/*         if(!$value) */
/*             echo $value."NULL value\n"; */
/*         else */
/*             echo $value."\n"; */
/*     } */
/*     echo "\n"; */

/*     $string5 = array(); */
/*     for($i = 0; $i<1000; $i++){ */
/*         $string5[$i] =  "string Array Data".$i;; */
/*     } */
/*     $val =  $proxy->RetArrayString1D($string5); */
/*     echo "\n All ten NULL Elements \n =============\n"; */
/*     foreach($val->string as $i=> $value){ */
/*         if($value) */
/*             echo $value."\n"; */
        
/*     } */
/*     echo "\n"; */
        

} catch (Exception $e) {

		printf("Message = %s\n",$e->getMessage());
}
?>


--EXPECT--
object(stdClass)#3 (0) {
}






