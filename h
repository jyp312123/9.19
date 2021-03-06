<!doctype html>
<html>

<head>
    <title>车辆查询</title>
    <meta http-equiv="X-UA-Compatible" content="IE=edge" charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <meta http-equiv="Access-Control-Allow-Origin" content="*" />
    <!-- <meta http-equiv="Access-Control-Allow-Origin" content="*"> -->
    <link rel="stylesheet" href="css/home.css">
    <!-- head 中 -->
    <link rel="stylesheet" type="text/css" href="css/font_nsd476wazq/iconfont.css" />
    <link rel="stylesheet" href="http://cdn.bootcss.com/weui/0.4.3/style/weui.min.css">
    <link rel="stylesheet" href="http://cdn.bootcss.com/jquery-weui/0.8.0/css/jquery-weui.min.css">
    <style>
        [hidden] {
            display: none;
        }

        .selected {
            text-decoration: underline;
            color: red;
        }

        .unselected {
            text-decoration: none;
            color: black
        }
        li{
    list-style: none;
}
/*  */
.carCode{
    width: 100%;
    height: 60%;
    background:#f5f5f5;
    position: fixed;
    top: 0;
    left: 0;
    overflow: hidden;
}
.wz-park{
    width:100%;
    height:126px;
    /* background:#ff0; */
    margin-top:12%;
    
}
.wz-park p {
    font-size: 18px;  
    color: #333;
    margin:0 auto;
    padding:0  10% 8% 25%;
    
}
.textBox {
    width:75%;
    height:56px;
    display: flex;
    text-align: center;
    border: 1px solid #898989;
    border-radius: 5px;
    background: #fff;
    margin:0 auto;
}
.textBox div {
    position: relative;
    cursor: pointer;
    font-size: 21px;
    flex: 1;
    height: 30px;
    outline: none;
    line-height: 30px;
    border-right: 1px solid #898989;
    margin-top:4%;
}
.textBox1 {
  width: 66%;
    height: 56px;
    display: flex;
    text-align: center;
    border: 1px solid #898989;
    border-radius: 5px;
    background: #fff;
    /* margin: 0 auto; */
    margin-left: 12%;
}
.textBox1 div {
    position: relative;
    cursor: pointer;
    font-size: 21px;
    flex: 1;
    height: 30px;
    outline: none;
    line-height: 30px;
    border-right: 1px solid #898989;
    margin-top:4%;
}
.textBox div.drill_cursor:nth-last-child(1) {
    border-right: none;
}
.textBox1 div.drill_cursor:nth-last-child(1) {
    border-right: none;
}
/*  */
#done{
    width:100%;
    height:10%;
    /* background:#ff0; */
    position: fixed;
    left:0;
    bottom:29%;
        font-size: 23px;
    color: #005fff;
    padding-left: 84%;
}
#btn{
    width:100%;
    height:30px;
    /* background:#dcdcdc; */
}
.btn img {
    width: 23px;
    height: 23px;
    padding-left:56%;
}
.btn span{
    font-size: 18px;  
    color: #333;
}
.de {
    color: #333;
    font-size: 18px;
    width: 100%;
    padding: -2% 50% 10% 40%;
    display: block;
    /* background: #ff0000; */
    height: 83px;
    text-align: center;
    line-height: 92px;
}

.history{
    width:75%;
    height:50px;
    /* background:#ff0; */
    margin:0 auto;
}
.history div{
    float: left;
    width: 30%;
    height: 42px;
    background: #fff;
    color: #898989;
    text-align: center;
    border: 1px solid #898989;
    line-height: 42px;
    border-radius: 5px;
}
.history div:nth-child(2){
    margin:0 2%;
}
/* .btnBox{
    width:100%;
} */
.btnBox button {
    width: 44%;
    border: none;
    color: #fff;
    border-radius: 5px;
    margin: 28px 10% 0 25%;
    background-color: #005fff;
    height: 55px;
    font-size: 23px;
}
/* 尾部样式 */
#keyboard_one {
    position: fixed;
    left: 0;
    bottom: 0;
    width: 100%;
    padding: 1rem 0;
    background-color: #F3F3F3;
    background: #dcdcdc;
    margin-left: 0px;
    height: 27%;
}
#keyboard_one div {
    display: flex;
    width: 95%;
}
ul li {
    flex: 1;
    float: left;
    list-style: none;
    text-align: center;
    background: #fff;
    cursor: pointer;
    box-sizing: border-box;
    border: 1px solid #f9f9f9;
    height: 40px;
    font-size: 16px;
    margin: -3px -5px 8px 12px;
    border-radius: 5px;
    line-height: 37px;
}
#pp {
    width: 32px;
    height: 40px;
    background: #fff;
    border-radius: 5px;
    margin-left: 11px;
    text-align: center;
    line-height: 36px;
}
#pp1 {
width: 69px;
    height: 40px;
    background: #aeb0bc;
    border-radius: 5px;
    margin-left: 72%;
    text-align: center;
    line-height: 41px;
}
#pp1 img {
    width: 41px;
    height: 30px;
    margin-top: 6px;
}
    </style>
</head>

<body id="homeWork">

    <div class="tit1">

        <!-- 内容 -->
        <article class="carCode clearfix">
            <section class="wz-park">
                <p>请输入车牌号码查询停车费</p>
                <div class="textBox" id="plate">
                    <!--                                         <?php echo $plateFirst?> -->
                    <div id="proviceCity" class="drill_province">京</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                    <div class="drill_cursor">&nbsp;</div>
                </div>

       
            </section>



            <!--  -->
            <div class="btn" id="btn">
                <p id="btn1">
                    <img src="img/ico02.png" />&nbsp;&nbsp;&nbsp;
                    <span>新能源车牌</span>
                </p>
                <!-- 隐藏的 -->
       
            </div>

            <section>
                <p class="de">已登记车牌</p>
                <div class="history" id="bindingCars">
                    <div id="bindingCar1" onclick="bindingCarClick('bindingCar1');"></div>
                    <div id="bindingCar2" onclick="bindingCarClick('bindingCar2');"></div>
                    <div id="bindingCar3" onclick="bindingCarClick('bindingCar3');"></div>
                </div>
            </section>

            <section class="btnBox wz-button">
                <button type="button" onclick="getCarInInfo();">立即查询</button>
            </section>
        </article>

<div class="footer">
        <article class="footer clearfix" id="done">
            <p class="specile key-close" id="dine1">完成</p>
        </article>

        <div id="province" class="oo">
            <ul id="keyboard_one">
                <div class="clearfix">
                    <li class="letter p">
                        <span class="off">京</span>
                    </li>
                    <li class="letter p">
                        <span class="off">沪</span>
                    </li>
                    <li class="letter p">
                        <span class="off">鄂</span>
                    </li>
                    <li class="letter p">
                        <span class="off">湘</span>
                    </li>
                    <li class="letter p">
                        <span class="off">川</span>
                    </li>
                    <li class="letter p">
                        <span class="off">渝</span>
                    </li>
                    <li class="letter p">
                        <span class="off">粤</span>
                    </li>
                    <li class="letter p">
                        <span class="off">闽</span>
                    </li>
                    <li class="letter p">
                        <span class="off">晋</span>
                    </li>
                    <li class="letter p">
                        <span class="off">苏</span>
                    </li>
                </div>

                <div class="clearfix">
                    <li class="letter p">津</li>
                    <li class="letter p">浙</li>
                    <li class="letter p">豫</li>
                    <li class="letter p">赣</li>
                    <li class="letter p">贵</li>
                    <li class="letter p">青</li>
                    <li class="letter p">琼</li>
                    <li class="letter p">宁</li>
                    <li class="letter p">吉</li>
                    <li class="letter p">蒙</li>
                </div>

                <div class="clearfix">
                    <li class="letter p">冀</li>
                    <li class="letter p">苏</li>
                    <li class="letter p">皖</li>
                    <li class="letter p">贵</li>
                    <li class="letter p">云</li>
                    <li class="letter p">陕</li>
                    <li class="letter p">甘</li>
                    <li class="letter p">藏</li>
                    <li class="letter p">新</li>
                    <li class="letter p">廖</li>
                </div>

                <div class="clearfix">
                    <p class="letter p" id="pp">鲁</p>
                    <span class="delete lastitem specile d key-datale" id="pp1">
                        <img src="img/2.gif" />
                    </span>
                </div>

            </ul>
        </div>

        <div id="number" style="display: none;">
            <ul id="keyboard_one">
                <div class="clearfix">
                    <li class="letter n">
                        <span class="off">1</span>
                    </li>
                    <li class="letter n">
                        <span class="off">2</span>
                    </li>
                    <li class="letter n">
                        <span class="off">3</span>
                    </li>
                    <li class="letter n">
                        <span class="off">4</span>
                    </li>
                    <li class="letter n">
                        <span class="off">5</span>
                    </li>
                    <li class="letter n">
                        <span class="off">6</span>
                    </li>
                    <li class="letter n">
                        <span class="off">7</span>
                    </li>
                    <li class="letter n">
                        <span class="off">8</span>
                    </li>
                    <li class="letter n">
                        <span class="off">9</span>
                    </li>
                    <li class="letter n">
                        <span class="off">0</span>
                    </li>
                </div>
                <div class="clearfix">
                    <li class="letter n">Q</li>
                    <li class="letter n">W</li>
                    <li class="letter n">E</li>
                    <li class="letter n">R</li>
                    <li class="letter n">T</li>
                    <li class="letter n">Y</li>
                    <li class="letter n">U</li>
                    <li class="letter ">I</li>
                    <li class="letter ">O</li>
                    <li class="letter n">P</li>
                </div>
                <div class="clearfix">
                    <li class="letter n">A</li>
                    <li class="letter n">S</li>
                    <li class="letter n">D</li>
                    <li class="letter n">F</li>
                    <li class="letter n">G</li>
                    <li class="letter n">H</li>
                    <li class="letter n">J</li>
                    <li class="letter n">K</li>
                    <li class="letter n">L</li>
                </div>
                <div class="clearfix">
                    <li class="specile key-close" id="wan">完成</li>
                    <li class="letter n">Z</li>
                    <li class="letter n">X</li>
                    <li class="letter n">C</li>
                    <li class="letter n">V</li>
                    <li class="letter n">B</li>
                    <li class="letter n">N</li>
                    <li class="letter n">M</li>
                    <li class="delete lastitem specile d key-datale" id="shan">删除</li>
                </div>
            </ul>
        </div>
</div>
        <form id="getFeeForm" action="order.php" method="post">
            <input type="hidden" name="openApiId" value="<?php echo $openApiId; ?>" />
            <input type="hidden" name="openid" value="<?php echo $openid; ?>" />
            <input type="hidden" name="getFeeRet" id="getFeeRet" />
        </form>

   </div>

        <script src="http://cdn.bootcss.com/jquery/1.11.0/jquery.min.js"></script>
        <script src="http://cdn.bootcss.com/jquery-weui/0.8.0/js/jquery-weui.min.js"></script>
</body>
<!--  -->
<script type="text/javascript">
    //  控制显示与隐藏
    $(function () {
        $(".textBox1").hide();
        $("#btn").click(function () {
            $(".textBox1").toggle();
            $(".textBox").toggle();
        })
    })
    $(function () {
        $("#btn2").hide();
        $("#btn").click(function () {
            $("#btn2").toggle();
            $("#btn1").toggle();
        })
    })

    var JSONObjectS = {
        'openid': 'oeWE20npJ2Q9Z75cf38uPx7L_HPE',
    }

    $.ajax({
        type: 'post',
        url: 'http://open.cheyifu2016.com:8890/wechat/user/query',
        contentType: "application/json; charset=utf-8",
        dataType: "json", //返回值
        data: JSON.stringify(JSONObjectS),
        success: function (data) {
            console.log(data)
            console.log(data.plate1);
            $('#bindingCar1').html(data.plate1);
            $('#bindingCar2').html(data.plate2);
            $('#bindingCar3').html(data.plate3);
        },
        error: function (data) {
            console.log(data)
        },
        complete: function (data) {
        }
    })


    // 已登记车牌  
    function bindingCarClick(idName) {
        var plate = $("#" + idName).text();  // 读取车牌信息
        if (plate) {
            var obj = plate.split("");
            $("#plate").children().each(function (i) {   //车牌号码  																							
                if (i < 8) {
                    $(this).html(obj[i]);
                }
            });
        }
    }

    // 点击 立即查询 的时候判断车牌号是否正确
    function getCarInInfo() {
        var plate = "";
        $("#plate").children().each(function (i) {
            var val = $(this).html();
            if (i < 8) {
                if (val == "&nbsp;") {
                    return false;
                }
            } else {
                val = "";
            }
            plate += val;
        });
        if (plate.length < 7) {
            $.toptip("车牌号不正确");
            return;
        }
        console.log(plate)

        var JSONObject = {
            "token": 'cheyifu1qaz2wsx',
            "plate": plate,  //车牌号 
            "carOutTime": 0
        };

        $.ajax({
            type: "post",
            url: 'http://open.cheyifu2016.com:8892/openapi/getCarInInfo', //获取车辆入场
            contentType: "application/json; charset=utf-8",
            dataType: "json",
            data: JSON.stringify(JSONObject),
            success: function (data) {
                console.log(data)
                var result = data.result;

                if (result === 1) {
                    //   console.log(data)  
                    getFee(plate, data.parkingId); //如果车辆入场  收费

                }
                if (result == '<?php echo Config::OPENAPI_SUCCESS?>') {


                } else {
                    // $.alert("车辆未入场"); 
                }
            },
            error: function () {
                $.alert("服务器异常！");
            }
        });
    }

    function getFee(plate, parkingId) {
        var JSONObject = {
            "token": 'cheyifu1qaz2wsx',
            "plate": plate,
            "carOutTime": 0,
            "couponId": 0,
            "parkingId": parkingId
        };
        $.ajax({
            type: "post",
            url: 'http://open.cheyifu2016.com:8892/openapi/getFee', //收费
            contentType: "application/json; charset=utf-8",
            dataType: "json", //返回值
            data: JSON.stringify(JSONObject),
            success: function (data) {
                // console.log(data)

                var result = data.result;
                if (result === 1) {
                    // console.log(data)  
                    window.localStorage.setItem('carInfo', JSON.stringify(data));//存储到本地
                    window.location.href = './order1.html'; //页面跳转
                }

                if (result == '<?php echo Config::OPENAPI_SUCCESS?>') {
                    $("#getFeeRet").val(JSON.stringify(data));
                    document.getElementById("getFeeForm").submit();
                } else {
                    $.alert(data.strError);
                }
            },
            error: function () {
                $.alert("服务器异常！");
            }
        });
    }

</script>
<script type="text/javascript" charset="utf-8">


    //JS引用勿删
    (function (doc, win) {
        var docEl = doc.documentElement,
            resizeEvt = 'orientationchange' in window ? 'orientationchange' : 'resize',
            recalc = function () {
                var clientWidth = docEl.clientWidth;
                if (!clientWidth) return;
                docEl.style.fontSize = 10 * (clientWidth / 320) + 'px';   //33.75px
            };

        if (!doc.addEventListener) return;
        win.addEventListener(resizeEvt, recalc, false);
        doc.addEventListener('DOMContentLoaded', recalc, false);
    })(document, window);

    var pn;
    // <!--省份点击事件-->
    $(".drill_province").click(function () {
        var oldHeight = $(window).height();
        var webHeight = $(window).height() + 210 + 'px';
        $("#homeWork").css("height", webHeight);  //id是body
        window.scrollTo(0, 210);
        $(this).addClass('selected');
        $(".drill_cursor").removeClass('selected');
        var $el = $(this);
        $(".auto").show();
        $("#province").show();
        $("#number").hide();
    });
    // <!--字母点击事件-->
    $(".drill_cursor").click(function () {
        var webHeight = $(window).height() + 210 + 'px';
        $("#homeWork").css("height", webHeight);
        window.scrollTo(0, 210);
        $(".drill_cursor").removeClass('selected');
        $(".drill_province").removeClass('selected');
        $(this).addClass('selected');
        pn = $(this);
        $(".auto").show();
        $("#province").hide();
        $("#number").show();
    });
    //  完成的点击事件
    $(".key-close").click(function () {
        $("#homeWork").css("height", "auto").scrollTop(0);
        $(".drill_cursor").removeClass('selected');
        $(".drill_province").removeClass('selected');
        $(".auto").hide();
        $("#province").hide();
        $("#number").hide();
    });

    // <!--省份键盘点击事件-->
    $(".p").click(function () {
        $(".drill_province").text($(this).text());
        $(".drill_province").removeClass('selected');
        $(".drill_cursor").removeClass('selected');
        pn = $(".drill_cursor:first");
        pn.addClass('selected');
        $("#province").hide();
        $("#number").show();
    });

    // <!-- 字母键盘点击事件-->
    $(".n").click(function () {
        pn.removeClass('selected');
        // $('.drill_cursor').text($(this).text());//替换
        pn.text($(this).text());//替换
        pn = pn.next();
        if (pn.hasClass("drill_cursor")) {
            pn.addClass('selected');
        } else {
            $(".auto").hide();
            $("#province").hide();
            $("#number").hide();
            $("#homeWork").css("height", "auto").scrollTop(0);
        }
    });

    // <!--删除事件-->
    $(".d").click(function () {
        pn.html('&nbsp');
        pn.removeClass('selected');
        pn = pn.prev();
        if (pn.hasClass("drill_cursor")) {
            pn.addClass('selected');
        } else {
            $(".auto").hide();
            $("#province").hide();  //省份  隐藏
            $("#number").hide();
            $("#homeWork").css("height", "auto").scrollTop(0);
        }
    });
</script>
</body>
