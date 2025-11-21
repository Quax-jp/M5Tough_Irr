/*
*******************************************************************************
* Copyright (c) 2021 by M5Stack
*                  Equipped with M5Tough sample source code
*                          M5Toughサンプルソースコード
* Visit the website for more information：https://docs.m5stack.com/en/core/tough
* 詳細はこちらをご覧ください。：https://docs.m5stack.com/zh_CN/core/tough
*
* describe：Display Example.  表示例
* date：2021/7/21
*******************************************************************************
*/
#include <M5Tough.h>

/* After M5Tough is started or reset
the program in the setUp () function will be run, and this part will only be run once.
M5Toughが起動またはリセットされると、setup()関数のプログラムの実行が開始されます。 */
void setup() {
  M5.begin(); //Init M5Tough.  初期化 M5Tough

  #if 0
  M5.Lcd.fillScreen(WHITE); // Set the screen background.  画面の背景色を白に設定する
  delay(500); //Delay 500ms.  遅延500ms
  M5.Lcd.fillScreen(RED);
  delay(500);
  M5.Lcd.fillScreen(GREEN);
  delay(500);
  M5.Lcd.fillScreen(BLUE);
  delay(500);
  M5.Lcd.fillScreen(BLACK);
  delay(500);

  M5.Lcd.setCursor(10, 10); //Move the cursor position to (x,y).  カーソル位置を(x,y)に移動する。
  M5.Lcd.setTextColor(WHITE); //Set the font color to white.  フォントの色を白に設定する
  M5.Lcd.setTextSize(1);  //Set the font size.   フォントサイズの設定
  M5.Lcd.printf("Display Test!");  //Serial output format string.  フォーマットされた文字列の出力

  // draw graphic
  delay(1000);
  M5.Lcd.drawRect(100, 100, 50, 50, BLUE);  //Draw a 50x50 blue rectangle wireframe at (x,y).
  delay(1000);                            //(x,y)に縦横50x50の青い長方形のワイヤーフレームを描く。
  M5.Lcd.fillRect(100, 100, 50, 50, BLUE);//Draw a blue rectangle 50x50 at (x,y)
  delay(1000);                          //縦横50x50の青い長方形を(x,y)に描く。
  M5.Lcd.drawCircle(100, 100, 50, RED); //Draw a red circle of radius 50 at (x,y)
  delay(1000);                          //(x,y)に半径50の赤い円を描く。
  M5.Lcd.fillCircle(100, 100, 50, RED); //Draw a red circle of radius 50 at (x,y)
  delay(1000);                          //(x,y)に半径50の赤い円を描く。
  M5.Lcd.drawTriangle(30, 30, 180, 100, 80, 150, YELLOW); //Make a triangle wireframe with (x1,y1) (x2,y2) (x3,y3) as the vertices
  delay(1000);                                           //(x1,y1) (x2,y2) (x3,y3) を頂点とする三角形のワイヤーフレームを作る。
  M5.Lcd.fillTriangle(30, 30, 180, 100, 80, 150, YELLOW);   //(x1,y1) (x2,y2) (x3,y3) を頂点とする三角形を作る。
  #endif

  M5.Lcd.clear(BLACK);

  M5.Lcd.fillRect(0, 0, M5.Lcd.width(), 30, WHITE);//Draw a blue rectangle 50x50 at (x,y)

  M5.Lcd.setTextSize(4);
  M5.Lcd.setCursor(M5.Lcd.width() / 2, M5.Lcd.height() / 2);
  M5.Lcd.printf("Center");

  M5.Lcd.drawString("font_def", M5.Lcd.width() / 3,M5.Lcd.height() / 3);
  M5.Lcd.drawCentreString("font_4", M5.Lcd.width() / 3 * 2,M5.Lcd.height() / 3 * 2, 4);      // drawCentreStringはフォント番号を省略するとエラーになる（例: 4 = 標準?, 7:7seg)
}

/* After the program in setup() runs, it runs the program in loop()
The loop() function is an infinite loop in which the program runs repeatedly
setup()関数のプログラムが実行された後、loop()関数のプログラムが実行される。
loop()関数は、プログラムを何度も繰り返すデッド・ループである。 */
void loop(){
  


  M5.update();  //Read the press state of the key.  キーA、B、Cの状態を読む。
}