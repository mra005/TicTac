

function checkWin(user, id)
    {//document.getElementById('msg').innerHTML = user;
      if(user == "x")
      {//alert(id);
        xNumbers.sort(sortNumber); 
        for	(index = 0; index < xNumbers.length; index++) {
         // document.getElementById('msg').innerHTML += xNumbers[index] + " ";
          var test = xNumbers[index];
          var checker = 0;
          truth = test + 20;
          document.getElementById('msg').innerHTML += test + " ";
          alert(truth);
          var a = xNumbers.indexOf(test);
          alert(a);
          /**
          while(a != -1)
          {
            checker ++;
            if(checker==1){
            winner("x");}
            test + 10;
            a = xNumbers.indexOf(test);
          }
          **/
        }
      }