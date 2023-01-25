<?php 
    for($i = 1 ; $i <=100 ; $i++)
        if($i%15 == 0)
            echo "<br>FizzBuzz<br>";
        elseif ($i%3) 
            echo "<br>Fizz<br>";
        elseif  ($i%5)
            echo "<br>Buzz<br>";
        else    
            echo $i;    
?>

            
