# 概要
M5Toughと土壌水分センサ＋ポンプを使って自動で潅水をする装置。

また、それをモニタリングするPC/スマホアプリ。


# 基本設計
センサで土壌水分をはかり、設定値より下回れば潅水する。

土壌水分値はSDカードに保存する

土壌水分値はクラウドに送信し、スマホ、PCアプリから見れるようにする

# 応用設計
スマホ、PCアプリで土壌水分のグラフを見られるようにする


# 材料
センサとポンプは一体になったキットを使う

https://www.marutsu.co.jp/pc/i/2225598/?campaignid=19508307583&adgroupid=&keyword=&device=c&gad_source=1&gad_campaignid=19508411731&gbraid=0AAAAADt3qv8mo8v-yU4ehKGD4cXMFisOn&gclid=CjwKCAiAlMHIBhAcEiwAZhZBUoOIu3uh7j-uhwnChUcZSF8mqFOgduZo7W5WqANZnyuRQREsUV8rlBoC7J0QAvD_BwE

https://www.switch-science.com/products/6913?srsltid=AfmBOoq-XSwFpLc99txLZXWO-CY8pW5K_wNSiX4pOOiJFqhWF0pvY7hB

https://eleshop.jp/shop/g/gL5S315/?srsltid=AfmBOooIImbRUBVHgzUdGgpCLpR3JeNpHI2mn4HlhS6LFPoQheB5fdDm

モニタリングアプリは C# .NET MAUIを使う

筐体は3Dプリンタで作成する。プランターに引っかける形で。




