* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  background-image: url(../../images/abstracto/fondoNegroYTtela1.jpg);
  background-size: contain;
}

#fondo1 {
  background-size: cover;
}

.animate__animated.animate__fadeInLeft {
  --animate-delay: 0.7s;
}

header {
  font-size: 25px;
  width: 100%;
}
header div {
  padding: 20px;
  width: 100%;
}
header div .loiano {
  font-family: "Montserrat", sans-serif;
  color: red;
  font-size: 50px;
  padding-left: 30px;
  text-shadow: 5px 5px 10px black;
}
header div .subtitulo {
  color: white;
  font-size: 25px;
}

footer {
  margin-top: 50px;
  width: 100%;
  height: 100%;
  text-align: center;
  background-color: rgba(0, 0, 0, 0.7);
}
footer .horario {
  font-size: 30px;
  font-family: "Poppins", sans-serif;
  font-weight: bolder;
  color: white;
}
footer .links--link1 {
  font-size: 50px;
  padding: 15px;
  color: white;
}
footer .links--link1:hover {
  color: rgb(54, 222, 54);
}
footer .links--link2 {
  font-size: 50px;
  padding: 15px;
  color: white;
}
footer .links--link2:hover {
  color: rgb(255, 130, 84);
}
footer .links--link3 {
  font-size: 50px;
  padding: 15px;
  color: white;
}
footer .links--link3:hover {
  color: rgb(84, 175, 221);
}
footer .links--link4 {
  font-size: 50px;
  padding: 15px;
  color: white;
}
footer .links--link4:hover {
  color: rgb(179, 50, 50);
}

.jumbotron1 {
  padding: 75px;
  background-position: right;
  text-shadow: 4px 4px 10px wheat;
  color: white;
  width: 50%;
}

body .fit {
  display: none;
  margin: 20px 0 40px 0;
}
body section .inicio {
  display: flex;
  padding: 100px;
}
body section .colash {
  width: 50%;
  padding: 50px;
}
body section .colash:hover {
  transition: 0.5s;
}
body section .colash:hover .colash1 {
  transform: translate(75px, 300px);
}
body section .colash:hover .colash2 {
  transform: translate(-300px, 120px);
}
body section .colash:hover .colash3 {
  transform: translate(75px, -10px);
}

.foto {
  position: absolute;
  border: solid 3px red;
  width: 400px;
  height: 250px;
}

.colash1 {
  transition: 0.5s;
  top: 140px;
  right: 200px;
}

.colash2 {
  transition: 0.5s;
  top: 320px;
  right: 250px;
}

.colash3 {
  transition: 0.5s;
  top: 170px;
  right: 400px;
}

.clientes {
  background-color: black;
  box-shadow: 0 0 30px wheat;
  margin: 50px;
  color: wheat;
}

.titulo1 {
  text-align: center;
  font-family: "Montserrat", sans-serif;
  font-size: 50px;
  width: 100%;
  padding: 50px;
}

.marcas {
  display: flex;
  justify-content: space-around;
  flex-wrap: wrap;
  height: 100%;
}

.logo {
  height: 150px;
  width: 250px;
  margin: 25px;
  box-shadow: 0 0 10px black;
}

.tigre {
  width: 500px;
}

.empresa {
  padding-left: 100px;
  font-size: 50px;
  color: white;
  font-family: "Montserrat", sans-serif;
  text-decoration: underline;
  text-decoration-color: rgb(145, 6, 6);
  padding-top: 50px;
}

.nosotros {
  display: flex;
  flex-wrap: wrap;
  padding: 50px;
  background-color: rgba(0, 0, 0, 0.553);
  margin: 50px;
}

section .historia {
  color: white;
  font-size: 30px;
  font-family: Verdana, sans-serif;
  line-height: 80px;
  font-style: italic;
  padding: 20px;
  width: 1300px;
}
section .hist1, section .hist3, section .hist2 {
  width: 400px;
  height: 350px;
  border: 5px solid red;
  border-radius: 20%;
  filter: grayscale(75%) blur(1px);
}
section .hist2 {
  filter: grayscale(50%) blur(1px);
}
section .hist3 {
  filter: none;
}

body .servicio {
  display: grid;
  grid-template-columns: repeat(5, 1fr);
  grid-template-rows: 100px 200px 200px;
  padding: 15px;
  color: white;
  border: solid rgb(145, 6, 6) 10px;
  border-radius: 10px;
  margin: 50px;
  background-color: rgba(0, 0, 0, 0.5);
}
body .servicio h3 {
  grid-column: 1/3;
  grid-row: 1/2;
  text-align: center;
  align-self: center;
  font-size: 50px;
  font-family: "Montserrat", sans-serif;
}
body .servicio .descripcion {
  display: flex;
  font-family: "Poppins", sans-serif;
  padding: 15px;
  grid-column: 1/4;
  grid-row: 2/4;
  width: 100%;
  font-size: 30px;
  line-height: 65px;
}
body .servicio .imagen {
  display: flex;
  border: solid black 2px;
  height: 100%;
  width: 90%;
}
body .servicio .imagen1 {
  grid-column: 4/5;
  grid-row: 2/3;
}
body .servicio .imagen2 {
  grid-column: 4/5;
  grid-row: 3/4;
}
body .servicio .imagen3 {
  grid-column: 5/6;
  grid-row: 2/4;
}
body .servicio .video {
  display: flex;
  height: 100%;
  width: 100%;
  grid-row: 2/4;
  grid-column: 4/6;
  padding: 5px;
}

.trabajos {
  width: 50%;
  font-family: "Montserrat", sans-serif;
  font-size: 40px;
  text-align: center;
  margin-bottom: 0;
  color: white;
  padding: 20px;
}

.cards {
  display: flex;
  justify-content: space-around;
  padding: 10px;
}

.modal_all .modal__body {
  width: 800px;
  height: 650px;
  position: absolute;
  top: 100px;
  left: -125px;
}
.modal_all .modal__body .modal__interior {
  display: grid;
  grid-template-columns: 1fr 1fr;
  grid-template-rows: 50px 400px 100px;
}
.modal_all .modal__body .modal__interior .modal__carousel {
  grid-row: 1/3;
  grid-column: 1/2;
}
.modal_all .modal__body .modal__interior .modal__title {
  grid-row: 1/2;
  grid-column: 2/3;
  text-align: center;
  font-size: 25px;
}
.modal_all .modal__body .modal__interior .modal__paragraph {
  grid-row: 2/3;
  grid-column: 2/3;
  padding: 10px;
  font-size: 20px;
}
.modal_all .modal__body .modal__interior .modal__alert {
  grid-row: 3/4;
  grid-column: 1/3;
  height: 110px;
  padding: 10px;
}

.formulario {
  padding: 30px;
  border: 10px red inset;
  font-size: 30px;
  background: linear-gradient(180deg, rgb(122, 122, 122), rgba(132, 127, 127, 0.361));
  color: white;
}
.formulario .alertas .alert {
  font-size: 20px;
  background: linear-gradient(180deg, rgb(122, 122, 122), rgba(132, 127, 127, 0.361));
  color: white;
}
.formulario .alertas .alert1:hover {
  background-color: yellow;
  transition: all 1s;
}
.formulario .alertas .alert2:hover {
  background-color: red;
  transition: all 1s;
}

.marco {
  border: rgb(79, 79, 79) solid 3px;
}

.area {
  width: 1200px;
}

.campo {
  font-family: "Montserrat", sans-serif;
}

@media only screen and (min-width: 320px) and (max-width: 479px) {
  body {
    background-repeat: no-repeat;
    background-size: cover;
  }
  body .fit {
    display: flex;
  }
  body .empresa {
    padding-left: 10px;
    font-size: 25px;
    padding-top: 20px;
  }
  body .nosotros {
    margin: 0;
    padding: 5px;
  }
  body .trabajos {
    font-size: 25px;
    padding: 10px;
  }
  body .cards {
    flex-wrap: wrap;
  }
  body .modal_all .modal__body {
    width: 300px;
    height: 700px;
    top: 50px;
    left: 25px;
  }
  body .modal_all .modal__body .modal__interior {
    display: grid;
    grid-template-columns: 1fr;
    grid-template-rows: 30px 200px 1fr;
  }
  body .modal_all .modal__body .modal__interior .modal__carousel {
    grid-row: 2/3;
  }
  body .modal_all .modal__body .modal__interior .modal__title {
    grid-row: 1/2;
    text-align: center;
    font-size: 20px;
  }
  body .modal_all .modal__body .modal__interior .modal__paragraph {
    grid-row: 3/4;
    padding: 10px;
    font-size: 18px;
  }
  body .modal_all .modal__body .modal__interior .modal__alert {
    display: none;
  }
  body .servicio {
    grid-template-rows: 25px 1fr 1fr;
    padding: 5px;
    border: solid rgb(145, 6, 6) 3px;
    margin: 15px;
    height: 300px;
  }
  body .servicio h3 {
    font-size: 25px;
    padding: 10px;
  }
  body .servicio .descripcion {
    padding: 5px;
    font-size: 16px;
    overflow: scroll;
    line-height: 25px;
  }
  body .formulario {
    border: 5px red inset;
    font-size: 18px;
    padding: 5px;
  }
  body form div .area {
    width: 350px;
  }
  body header div {
    padding: 5px;
  }
  body header div .loiano {
    font-size: 30px;
    padding-left: 15px;
  }
  body header div .subtitulo {
    font-size: 20px;
  }
  body header div ul {
    background-color: rgb(44, 44, 44);
  }
  body section .inicio {
    padding: 15px;
  }
  body section .jumbotron1 {
    padding: 25px;
    width: 100%;
    font-size: 20px;
  }
  body section .historia {
    font-size: 16px;
    line-height: 40px;
    padding: 10px;
    width: 100%;
  }
  body section .hist1, body section .hist2, body section .hist3 {
    width: 150px;
    height: 100px;
  }
  body section .card {
    height: 100%;
    width: 100%;
    flex-direction: row;
    flex-wrap: wrap;
    margin: 10px;
  }
  body section .card-img-top {
    height: 100%;
    width: 100%;
  }
  body section .titulo1 {
    font-size: 30px;
    padding: 15px;
  }
  body section .links {
    font-size: 2px;
    padding: 8px;
  }
  body section div .logo {
    height: 100px;
    width: 75px;
    margin: 15px;
  }
  body section div .tigre {
    width: 200px;
  }
  body section div .colash {
    display: none;
  }
  body section footer .horario {
    font-size: 20px;
    padding: 20px;
  }
}

/*# sourceMappingURL=estilos.cc.map */
