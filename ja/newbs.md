# QMK 初心者ガイド

<!---
  grep --no-filename "^[ ]*git diff" docs/ja/*.md | sh
  original document: 0.9.0:docs/newbs.md
  git diff 0.9.0 HEAD -- docs/newbs.md | cat
-->

キーボードには、コンピュータ入っているものと似たようなプロセッサが入っています。
このプロセッサでは、キーボードのボタンの押し下げの検出を担当し、キーが押されたときにコンピュータに通知するソフトウェアが動作しています。
QMK Firmware は、そのソフトウェアの役割を果たし、ボタンの押下を検出しその情報をホストコンピュータに渡します。
カスタムキーマップを作るということは、キーボード上で動くプログラムを作るということなのです。

QMK は、簡単なことは簡単に、そして、難しいことを可能なことにすることで、あなたの手にたくさんのパワーをもたらします。
パワフルなキーマップを作るためにプログラムを作成する方法を知る必要はありません。いくつかのシンプルな文法に従うだけで OK です。

お使いのキーボードで QMK を実行できるかどうか不明ですか？
もし作成したキーボードがメカニカルキーボードの場合、実行できる可能性が高いです。
QMK は[多くの趣味のキーボード](http://qmk.fm/keyboards/)をサポートしています。
現在使用しているキーボードが QMK を実行できない場合、QMK を実行できるキーボードの選択肢はたくさんあります。

## このガイドは私のためにあるのでしょうか？

このガイドは、ソースコードを使ってキーボードのファームウェアを構築したいと考えている人に適しています。
もしあなたがすでにプログラマーであれば、このプロセスはとても身近で簡単に理解できるでしょう。
もし、プログラミングの考え方に抵抗があるのであれば、代わりに[私たちのオンラインGUI](ja/newbs_building_firmware_configurator.md)を見てみてください。

## 概要

このガイドには4つの主要なセクションがあります。

1. [環境設定](ja/newbs_getting_started.md)
2. [コマンドラインを使用して初めてのファームウェアを構築する](ja/newbs_building_firmware.md)
3. [ファームウェアを書きこむ](ja/newbs_flashing.md)
4. [テストとデバッグ](ja/newbs_testing_debugging.md)

このガイドは、これまでソフトウェアをコンパイルしたことがない人を支援することに特化しています。
その観点から選択と推奨を行います。
これらの手順の多くには代替方法があり、これらの代替方法のほとんどをサポートしています。
タスクを達成する方法について疑問がある場合は、[案内を求めることができます](ja/getting_started_getting_help.md)。

## 追加のリソース

このガイドの他にも、QMK の学習に役立つリソースがいくつかあります。[学習リソース](ja/newbs_learn_more_resources.md)のページにまとめました。

## オープンソース

QMKは GNU General Public License でリリースされているオープンソース・ソフトウェアです。