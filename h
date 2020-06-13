<!DOCTYPE html>
<!DOCTYPE html>
<html lang="en">
<head>
<link rel="shortcut icon" 

href="https://icons.iconarchive.com/icons/webalys/kamele

on.pics/512/Coding-Html-icon.png">
<title>Explore programing</title>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, 

initial-scale=1">
<style>
* {
  box-sizing: border-box;
}


body {
  font-family: Arial, Helvetica, sans-serif;
  margin: 0;
}

/* Style the header */
.header {
  padding: 80px;
  text-align: center;
  background: #1abc9c;
  color: white;
}

/* Increase the font size of the h1 element */
.header h1 {
  font-size: 40px;
}

/* Style the top navigation bar */
.navbar {
  overflow: hidden;
  background-color: #333;
}

/* Style the navigation bar links */
.navbar a {
  float: left;
  display: block;
  color: white;
  text-align: center;
  padding: 14px 20px;
  text-decoration: none;
}

/* Right-aligned link */
.navbar a.right {
  float: right;
}

/* Change color on hover */
.navbar a:hover {
  background-color: #ddd;
  color: black;
}

/* Column container */
.row {  
  display: flex;
  flex-wrap: wrap;
}

/* Create two unequal columns that sits next to each 

other */
/* Sidebar/left column */
.side {
  flex: 30%;
  background-color: #f1f1f1;
  padding: 20px;
}

/* Main column */
.main {   
  flex: 70%;
  background-color: white;
  padding: 20px;
}

/* Fake image, just for this example */
.fakeimg {
  background-color: #aaa;
  width: 100%;
  padding: 20px;
}
/* Footer */
.footer {
  padding: 20px;
  text-align: center;
  background: #ddd;
  width: 100%;
}


/* Responsive layout - when the screen is less than 

700px wide, make the two columns stack on top of each 

other instead of next to each other */
@media screen and (max-width: 700px) {
  .row {   
    flex-direction: column;
  }
}

/* Responsive layout - when the screen is less than 

400px wide, make the navigation links stack on top of 

each other instead of next to each other */
@media screen and (max-width: 400px) {
  .navbar a {
    float: none;
    width:100%;
  }
}
</style>
</head>
<body>

<div class="header">
  <h1>Explore coding</h1>
  <p>A website created for explore coding courses.</p>
</div>
<div class="navbar">
  <a href="MyWebsite.html">Main page</a>
  <a href="OurCourses.html">Our courses</a>
<a href="#about us">About us</a>
  <a href="Follow us.html" class="right">Follow us</a>
</div>

<div class="row">
  <div class="side">
    <h2>Courses</h2>
    <h5>Make your app ( beginer )</h5>
<center>
   <a href="https://ibb.co/dfjKkRh"><img 

src="https://i.ibb.co/WHGKBLT/Logo-2.gif" alt="Logo-2" 

border="0"></a>
</center>
    <p>A free online course that intoduces app inventor 

program <a href="OurCourses.html">learn more</a></p>
<a name="about us"></a>
    <h3>About us</h3> 
    <p>Explore programing is a group of courses wich is 

the trainer of it is mohamed tamer..That's our facebook 

group..<a 

href="www.facebook.com/groups/explorecoding/">Click 

here</a> ..</p>
  <h4>About the tainer</h4>
<center>
<iframe width="450" height="300" 

src="https://www.youtube.com/embed/PycYUPwI8qY" 

frameborder="0" allow="accelerometer; autoplay; 

encrypted-media; gyroscope; picture-in-picture" 

allowfullscreen></iframe>
  </center>
    <br>
   

<div class="footer">
  <p><font size="3">Our facebook group :<a 

href="https://www.facebook.com/groups/explorecoding">Cli

ck here</a> </font> </p>
</div>

</body>
</html>

