#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int love = 50;
    cout << "☆恋愛アドベンチャーゲーム☆\n\n";
    cout << "選択肢を選んでヒロインの好感度を上げて恋人エンドを目指そう！\n※注意※\n・選択肢は半角数字で入力して下さい。\n・選択肢以外の数字を打ち込まないでください。\n\n";

    int start;
    int end;
    //bool play = false;
    bool play = true;
    cout << "ゲームを開始しますか？\n１，はい　２，いいえ\n\n";
    cin >> start;

    while (start != 1 || start != 2) //ゲームの続行
    {
        if (start == 1) //ゲーム開始
        {
            cout << "ゲームを開始します\n\n";
            play = true;
            break;
        }

        else if (start == 2) //ゲーム終了
        {
            cout << "ゲームを終了します\n";
            break;
        }

        else //ゲーム開始時の選択肢以外の回答
        {
            cout << "\n１もしくは２を選択してください\n\n";
            cout << "ゲームを開始しますか？\n１，はい　２，いいえ\n";
            cin >> start;
        }
    }

    if (play = true)
    {
        cout << "-------\n\n";
        cout << "───俺は主人　公(しゅじん　こう)。\n平々凡々の高校一年生。\n今日の心の準備もできたことだし、そろそろ登校しなきゃな。\n俺はそう思って玄関の扉を開けた。\n\n";
        cout << "？？？「ちょっと遅いわよ、公！遅刻しちゃうじゃない！」\n\n扉の前で待っていたのはツインテールが特徴的な、幼馴染みの河合　恵(かわい　めぐみ)だ。\n\n";

        //イベント１
        {
            int qone;
            cout << "▽ なんて返せばいいだろうか？ ▽\n １，そんなこと言うなら先に行けばいいのに。\n ２，待たせてごめん。\n ３，カリッ、芋けんぴ、髪についてたよ。\n";
            cin >> qone;

            if (qone == 1) {
                cout << "\n恵「はあ？あんたが遅刻しないように来てやったんじゃない！」\n";
                int loveup1 = rand() % 10 + 11;
                love = love + loveup1;
                cout << "好感度 " << loveup1 << " UP! 現在の好感度は " << love << " です" << endl;
            }
            else if (qone == 2) {
                cout << "\n恵「…分かればいいのよ。早く行きましょ！」\n";
                int loveup2 = rand() % 10 + 21;
                love = love + loveup2;
                cout << "好感度 " << loveup2 << " UP! 現在の好感度は " << love << " です" << endl;
            }
            else if (qone == 3) {
                int choice = rand() % 3;
                int loveup3;
                if (choice == 0 || choice == 1) {
                    loveup3 = -25;
                    love = love + loveup3;
                    cout << "\n恵「……は？何言ってんの？」\n" << "好感度 " << loveup3 * (-1) << " DOWN! 現在の好感度は " << love << " です" << endl;
                }
                if (choice == 2) {
                    loveup3 = 25;
                    love = love + loveup3;
                    cout << "\n恵「……あっ、ありがと…///」\n" << "好感度 " << loveup3 << " UP! 現在の好感度は " << love << " です" << endl;
                }
            }
            cout << "\n\n恵「ほらっ、早く行きましょ」\nそんな問答を交わしながら、俺たちは学校へと向かった。\n\n-------\n\n";
        }

        cout << "時間を進めますか？\n１，はい　２，Yes\n\n";
        cin >> end;

        if (end == 1 || end == 2)
        {
            //エンドイベント
            /*cout << "-------\n\n";
            cout << "アドバイス：三番目の選択肢は確率で大幅に好感度が上がったり、下がったりするぞ！\n\n";*/
            cout << "-------\n\n";
            cout << "時間が過ぎるのは早いもので、もう放課後になってしまった。\n\n───俺は今日、恵に告白するつもりだ。ずっと抱えていた恋心を、今日、告げる。\n";
            cout << "\n恵「屋上に呼び出して…何の用？」\n\n意を決して、思いを伝える。彼女から、帰ってくる言葉は───\n\n";
            if (love < 30)
            {
                cout << "恵「は？私とあんたが？冗談きついわよ…」\n\n俺の長い片思いは、あっけなく幕を閉じてしまった。\n\n ─ END1　フラれエンド ─ ";
            }
            if (love >= 30 && love < 70)
            {
                cout << "恵「…ごめん。公とは、友達でいたいの。告白してくれてありがとうね、本当に…ごめんね。」\n\n申し訳なさそうな顔が、より俺の心を砕いていく。\nでも、完全に何もかも否定されるよりは、よかったのかもしれない───\n\n ─ END2　友人エンド ─ ";
            }
            if (love >= 70)
            {
                cout << "恵「……私も、ずっと前から───」\n\n俺と恵の間に強い風が吹く。\nその音に紛れてしまいそうなほどささやかに告げられたそれは、きっと、恐らく、いや絶対に、俺が望んでいた言葉だった。\n\n ─ END3　ハッピーエンド ─ ";
            }
        }
    }
} 