#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int love = 50;
    cout << "�������A�h�x���`���[�Q�[����\n\n";
    cout << "�I������I��Ńq���C���̍D���x���グ�ė��l�G���h��ڎw�����I\n�����Ӂ�\n�E�I�����͔��p�����œ��͂��ĉ������B\n�E�I�����ȊO�̐�����ł����܂Ȃ��ł��������B\n\n";

    int start;
    int end;
    //bool play = false;
    bool play = true;
    cout << "�Q�[�����J�n���܂����H\n�P�C�͂��@�Q�C������\n\n";
    cin >> start;

    while (start != 1 || start != 2) //�Q�[���̑��s
    {
        if (start == 1) //�Q�[���J�n
        {
            cout << "�Q�[�����J�n���܂�\n\n";
            play = true;
            break;
        }

        else if (start == 2) //�Q�[���I��
        {
            cout << "�Q�[�����I�����܂�\n";
            break;
        }

        else //�Q�[���J�n���̑I�����ȊO�̉�
        {
            cout << "\n�P�������͂Q��I�����Ă�������\n\n";
            cout << "�Q�[�����J�n���܂����H\n�P�C�͂��@�Q�C������\n";
            cin >> start;
        }
    }

    if (play = true)
    {
        cout << "-------\n\n";
        cout << "���������͎�l�@��(���ザ��@����)�B\n���X�}�X�̍��Z��N���B\n�����̐S�̏������ł������Ƃ����A���낻��o�Z���Ȃ���ȁB\n���͂����v���Č��ւ̔����J�����B\n\n";
        cout << "�H�H�H�u������ƒx�����A���I�x�������Ⴄ����Ȃ��I�v\n\n���̑O�ő҂��Ă����̂̓c�C���e�[���������I�ȁA�c����݂͍̉��@�b(���킢�@�߂���)���B\n\n";

        //�C�x���g�P
        {
            int qone;
            cout << "�� �Ȃ�ĕԂ��΂������낤���H ��\n �P�C����Ȃ��ƌ����Ȃ��ɍs���΂����̂ɁB\n �Q�C�҂����Ă��߂�B\n �R�C�J���b�A������ҁA���ɂ��Ă���B\n";
            cin >> qone;

            if (qone == 1) {
                cout << "\n�b�u�͂��H���񂽂��x�����Ȃ��悤�ɗ��Ă�����񂶂�Ȃ��I�v\n";
                int loveup1 = rand() % 10 + 11;
                love = love + loveup1;
                cout << "�D���x " << loveup1 << " UP! ���݂̍D���x�� " << love << " �ł�" << endl;
            }
            else if (qone == 2) {
                cout << "\n�b�u�c������΂����̂�B�����s���܂���I�v\n";
                int loveup2 = rand() % 10 + 21;
                love = love + loveup2;
                cout << "�D���x " << loveup2 << " UP! ���݂̍D���x�� " << love << " �ł�" << endl;
            }
            else if (qone == 3) {
                int choice = rand() % 3;
                int loveup3;
                if (choice == 0 || choice == 1) {
                    loveup3 = -25;
                    love = love + loveup3;
                    cout << "\n�b�u�c�c�́H�������Ă�́H�v\n" << "�D���x " << loveup3 * (-1) << " DOWN! ���݂̍D���x�� " << love << " �ł�" << endl;
                }
                if (choice == 2) {
                    loveup3 = 25;
                    love = love + loveup3;
                    cout << "\n�b�u�c�c�����A���肪�Ɓc///�v\n" << "�D���x " << loveup3 << " UP! ���݂̍D���x�� " << love << " �ł�" << endl;
                }
            }
            cout << "\n\n�b�u�ق���A�����s���܂���v\n����Ȗⓚ�����킵�Ȃ���A�������͊w�Z�ւƌ��������B\n\n-------\n\n";
        }

        cout << "���Ԃ�i�߂܂����H\n�P�C�͂��@�Q�CYes\n\n";
        cin >> end;

        if (end == 1 || end == 2)
        {
            //�G���h�C�x���g
            /*cout << "-------\n\n";
            cout << "�A�h�o�C�X�F�O�Ԗڂ̑I�����͊m���ő啝�ɍD���x���オ������A���������肷�邼�I\n\n";*/
            cout << "-------\n\n";
            cout << "���Ԃ��߂���̂͑������̂ŁA�������ی�ɂȂ��Ă��܂����B\n\n���������͍����A�b�ɍ���������肾�B�����ƕ����Ă������S���A�����A������B\n";
            cout << "\n�b�u����ɌĂяo���āc���̗p�H�v\n\n�ӂ������āA�v����`����B�ޏ�����A�A���Ă��錾�t�̈́�����\n\n";
            if (love < 30)
            {
                cout << "�b�u�́H���Ƃ��񂽂��H��k�������c�v\n\n���̒����Ўv���́A�������Ȃ�������Ă��܂����B\n\n �� END1�@�t����G���h �� ";
            }
            if (love >= 30 && love < 70)
            {
                cout << "�b�u�c���߂�B���Ƃ́A�F�B�ł������́B�������Ă���Ă��肪�Ƃ��ˁA�{���Ɂc���߂�ˁB�v\n\n�\����Ȃ������Ȋ炪�A��艴�̐S���ӂ��Ă����B\n�ł��A���S�ɉ��������ے肳�����́A�悩�����̂�������Ȃ�������\n\n �� END2�@�F�l�G���h �� ";
            }
            if (love >= 70)
            {
                cout << "�b�u�c�c�����A�����ƑO���焟�����v\n\n���ƌb�̊Ԃɋ������������B\n���̉��ɕ���Ă��܂������Ȃقǂ����₩�ɍ�����ꂽ����́A�����ƁA���炭�A�����΂ɁA�����]��ł������t�������B\n\n �� END3�@�n�b�s�[�G���h �� ";
            }
        }
    }
} 