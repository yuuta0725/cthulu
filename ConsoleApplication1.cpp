// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void Def_mon(int);
void CM_base();
void CM_Gods();

int main()
{
    std::system("cls");

    int num;

    cout << "クトゥルフ神話について\n";
    cout << "知りたい内容\n\n";
    cout << "クトゥルフ神話の基礎：１\n";
    cout << "神話内の神々について：２\n";
    cout << "終了：３\n";

    cout << "知りたい内容の数字を入力：";

    cin >> num;

    Def_mon(num);
}

void Def_mon(int jn)
{

    if (jn == 1) {
        CM_base();
    }

    else if (jn == 2) {
        CM_Gods();
    }

    else {
        exit(0);
    }

    //system("pause>0");

    //main();
}

void CM_base()
{
    std::system("cls");

    fstream myFile;
    myFile.open("./text/cthulu.txt", ios::in);//read
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    system("pause>0");

    main();
}

void CM_Gods()
{
    std::system("cls");

    string gj;

    fstream myFile;

    cout << "神の種類\n";
    cout << "旧支配者（グレート・オールド・ワン）：goo\n";
    cout << "旧神：eg\n";
    cout << "地球本来の神々：go\n";

    cin >> gj;

    if (gj == "goo") {
        myFile.open("./text/goo.txt", ios::in);//read
    }
    else if (gj == "eg") {
        myFile.open("./text/eg.txt", ios::in);//read
    }
    else {
        myFile.open("./text/go.txt", ios::in);//read

    std::system("cls");

    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }

    system("pause>0");
    CM_Gods();
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
