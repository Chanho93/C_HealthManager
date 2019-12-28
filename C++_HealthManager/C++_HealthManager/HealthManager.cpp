#include <string>
#include <iostream>
#include <fstream>
using namespace std;


class Biman {

private:
	string name;
	int age;

public:
	string sex;
	double height, weight;
	double height2;
	double bmi;
	double grade;
	string state;
	int cal;
	int i = 1;
	string food;
	string exercise;
	string answer;
	string answer1;
	string answer2;

	void introduction(void)
	{
		cout << "-----------------welcome----------------------" << endl;
		cout << "비만 관리 프로그램에 오신걸 환영합니다." << endl;
		cout << "--------------------------------------------" << endl;
		cout << "                                                      " << endl;
		cout << "저희 프로그램에서는 식단관리, 운동뿐만아니라 비만으로 인한 합병증도 같이 관리해드리고 있습니다." << endl;

		cout << "                                                      " << endl;
		cout << "--------------------------------------------" << endl;

		cout << "해당되는 질병을 선택하세요.(중복가능)" << endl;
		cout << "                                                      " << endl;


		cout << "당뇨 " << endl;
		cout << "고혈압" << endl;
		cout << "관절염" << endl;
		cout << "고지혈증" << endl;
		cout << "없음" << endl;

		cout << "                                                      " << endl;

		cin >> answer1;
		cin >> answer2;

		try {
			if (answer1 == "없음" && answer2 == "없음") {
				throw answer1;
			}
			else {

				cout << "                                                      " << endl;

				cout << "--------------------------------------------" << endl;


				cout << "저희가 " << answer1 << "과  " << answer2 << "같이 관리해드리겠습니다." << endl;
			}
		}
		catch (string e)
		{
			cout << "                                       " << endl;
			cout << "선택한 답:  " << answer1 << endl;
			cout << "합병증이 없지만 앞으로도 생기지 않도록 관리 도와드리겠습니다." << endl;
		}


		cout << "--------------------------------------------" << endl;



	}


	void enter(void)
	{
		cout << "당신의 이름을 입력하세요: " << endl;
		cin >> name;

		cout << "당신의 성별을 입력하세요(남성,여성): " << endl;
		cin >> sex;

		cout << "나이를 입력하세요: " << endl;
		cin >> age;

		cout << "키를 입력하세요: " << endl;
		cin >> height;

		cout << "몸무게를 입력하세요: " << endl;
		cin >> weight;

		cout << "--------------------------------------------" << endl;

		cout << "                                                      " << endl;


	}

	void figure(void)
	{
		height2 = height / 100;
		bmi = weight / (height2 * height2);

		cout << "당신의 BMI지수는 " << bmi << " 입니다. " << endl;
		cout << "                                                      " << endl;


		if (weight <= (height - 100) * 0.9 + 5 && weight >= (height - 100) * 0.9 - 5) {
			grade = 90;
			cout << "당신의 상태는 " << grade << " 점입니다.  100점을 위해 달려갈까요??" << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 2500;
			else if (sex == "여성")
				cal = 2000;
		}
		else if (weight > (height - 100) * 0.9 + 5 && weight <= (height - 100) * 0.9 + 10) {
			grade = 70;
			state = "과체중";
			cout << "당신의 상태는 " << state << " 이고 점수는 " << grade << "점입니다. 100점을 목표로!" << endl;
			cout << "--------------------------------------------" << endl;

			if (sex == "남성")
				cal = 2200;
			else if (sex == "여성")
				cal = 1800;

		}
		else if (weight < (height - 100) * 0.9 - 5 && weight >= (height - 100) * 0.9 - 10) {
			grade = 70;
			state = "저체중";
			cout << "당신의 상태는 " << state << " 이고 점수는" << grade << "점입니다. 100점을 목표로!" << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 2700;
			else if (sex == "여성")
				cal = 2200;

		}

		else if (weight > (height - 100) * 0.9 + 10 && weight <= (height - 100) * 0.9 + 15) {
			grade = 50;
			state = "비만";
			cout << "당신의 상태는 " << state << " 이고 점수는 " << grade << "점입니다. 조금씩 점수를 올려보도록 하겠습니다.." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 2000;
			else if (sex == "여성")
				cal = 1500;
		}
		else if (weight < (height - 100) * 0.9 - 10 && weight >= (height - 100) * 0.9 - 15) {
			grade = 50;
			state = "심각한 저체중";
			cout << "당신의 상태는 " << state << " 이고 점수는 " << grade << " 점입니다. 조금씩 점수를 올려보도록 하겠습니다." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 3000;
			else if (sex == "여성")
				cal = 2500;
		}
		else if (weight > (height - 100) * 0.9 + 15) {
			grade = 30;
			state = "완전 비만";
			cout << "당신의 상태는 " << state << " 이고 점수는 " << grade << " 점입니다. 꼭 참여하세요." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 1800;
			else if (sex == "여성")
				cal = 1300;
		}
		else if (weight < (height - 100) * 0.9 - 15) {
			grade = 30;
			state = "기아";
			cout << "당신의 상태는 " << state << " 이고 점수는 " << grade << "점입니다. 꼭 참여하세요." << endl;
			cout << "--------------------------------------------" << endl;
			if (sex == "남성")
				cal = 3200;
			else if (sex == "여성")
				cal = 2800;

		}
	}

	void supervise(void)
	{
		cout << "                                                      " << endl;
		cout << "--------------------------------------------" << endl;
		cout << "90 일동안 식단관리와 운동요법 그리고 질병관리를 실시 하겠습니다." << endl;
		cout << "                                                      " << endl;
		cout << "                                                      " << endl;

		cout << "----당뇨에 좋은 음식-----(선택시, 설명보기)" << endl;
		cout << "                                                      " << endl;

		while (true) {

			cout << "1.당근 , 2.검은콩 ,3.해바라기씨 , 4.양파 ,5.마늘 , 6.그만보기" << endl;

			cin >> answer;
			if (answer == "1") {
				cout << "당근은 혈액 조절 기능과 시력 저하 예방에 효과가 있으며" <<
					"당근에 포함된 카로티노이드 성분은 당뇨병을 예방하는 효과가 있습니다." <<
					"미네소타대학교에서 4500여 명을 대상으로 15년간 진행한 연구에 따르면 " <<
					"혈중 카로티노이드 수치가 높은 사람들은 당뇨병 위험이 절반 이하로 줄어드는 것으로 나타났다고 전했습니다." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}

			if (answer == "2") {
				cout << "검은콩에는 '트립신'과 '키모트리신'이라는 효소가 풍부하게 함유되어 있는데" <<
					"이는 인슐린을 분비하는 췌장의 기능을 활성화시켜줘 당뇨병 개선에 도움을 받을 수 있습니다." <<
					"또한 식이섬유가 풍부해 혈당이 급격히 올라가는 것을 막아주고 억제해주는 효과가 있습니다." <<
					"하루 한 컵 이상 섭취해주는 것이 좋습니다." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}

			if (answer == "3") {
				cout << "한 연구에 의하면 '건강에 좋은 지방'은 당뇨병 예방 및 치료에 큰 효과가 있는 것으로 나타났습니다." <<
					"해바라기씨에는 당뇨병 예방에 좋은 지방이 함유되어 있으며, " <<
					"인슐린 저항을 줄여줘 혈당을 안정적으로 유지해주는데 도움을 줄 수 있습니다." << endl;

				cout << "                                                      " << endl;
				cout << "                                                      " << endl;

			}

			if (answer == "4")
			{
				cout << "양파에 풍부하게 들어있는 알리신 성분은 인슐린 분비를 촉진시켜줘 " <<
					"혈중 당도를 낮추는데 큰 도움이 됩니다. " <<
					"	생으로 섭취하기보다는 볶아 먹거나 다른 요리에 넣어먹는 것이 좋습니다. " <<
					"특히 고기와 함께 조리할 경우 콜레스테롤을 제거해주고 " <<
					"혈압을 낮추는 효과가 있어 고혈압, 동맥경화 예방에도 좋습니다." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;


			}

			if (answer == "5")
			{
				cout << "영국 노팅엄대 연구진은 마늘이 제2형 당뇨병과 심장질환 위험을 줄이는데 도움을 준다는 연구 결과를 발표했습니다." <<
					"양파와 마찬가지로 마늘에도 들어있는 '알리신' 성분이 몸속 비타민B6과 결합함으로써" <<
					"췌장 기능을 활성화시켜 인슐린 분비가 원활해지는 효과를 볼 수 있습니다. " <<
					"이뿐만 아니라 혈액순환 개선과 면역력 개선 등을 도와주는 성분이 들어있어" <<
					"꾸준히 섭취한다면 건강관리에 큰 도움을 받을 수 있습니다." << endl;
				cout << "                                                      " << endl;
				cout << "                                                      " << endl;
			}
			if (answer == "6")
				break;
		}


		cout << "---------고혈압에 좋은 음식-------------(선택시 설명보기)" << endl;
		cout << "                                               " << endl;
		cout << "                                                   " << endl;

		while (true)
		{
			cout << "1.현미,보리밥, 2.두부,꽁치,가지,미역,다시마, 3.사과,토마토, 4.그만보기" << endl;
			cin >> answer;

			cout << "                                               " << endl;
			cout << "                                                   " << endl;

			if (answer == "1") {
				cout << "	현미에는 몸에 좋은 HDL 콜레스테롤을 높여주며 동맥경화를 예방해주는 피토스테롤이 함유돼 있습니다." <<
					"또 식이섬유소가 풍부해 변비에 좋고 쌀겨층과 배아에 풍부한 리놀레산은 동맥경화와 노화방지에 좋습니다." <<

					"보리는 단백질함량이 높고 필수아미노산이 많아 혈관 노화 방지, 성인병 예방효과가 있습니다." <<
					"또 동맥경화를 비롯한 심장질환, 고혈압, 당뇨병의 주범인 콜레스테롤을 낮추는 " <<
					"베타글루칸이라는 수용성 식이섬유를 다량 함유하고 있기도 합니다." << endl;


				cout << "                                               " << endl;
				cout << "                                                   " << endl;
			}

			else if (answer == "2")
			{
				cout << "두부에는 콜레스테롤을 낮추는 리놀산이 풍부해 동맥경화예방에 좋고 올리고당이 많아 장의 운동과 소화흡수를 돕습니다." <<

					"꽁치나 고등어 같은 등푸른생선에 풍부한 불포화지방산은 응고된 콜레스테롤을 녹이고" <<
					"	혈중 콜레스테롤을 낮추는데 탁월해 심장과 혈관건강에 도움이 됩니다." <<
					"	조리 시 구우면 불포화지방산이 많이 소실되기 때문에 조림으로 먹는 것이 더 좋습니다." <<

					"미역, 다시마 등에 많이 함유돼 있는 미끈거리는 성분인 알긴산은 " <<
					" 콜레스테롤과 지방흡수를 억제하고 담즙산을 배설시켜 혈중 콜레스테롤 수치를 낮춰줍니다." <<
					"또 알긴산은 위에서 소장으로 가는 음식의 이동을 지연시켜 혈당의 급격한 상승을 막아줍니다." << endl;


				cout << "                                               " << endl;
				cout << "                                                   " << endl;

			}
			if (answer == "3") {
				cout << "후식으로는 사과, 토마토를 섭취해보십시오. 사과에 풍부한 식이섬유는" <<
					"혈관에 쌓이는 유해콜레스테롤을 내보내고 유익한 콜레스테롤을 증가시켜 동맥경화를 예방해주는 효과가 있습니다." <<

					"또 칼륨은 몸속 염분을 배출시켜 고혈압예방에 도움을 줍니다." <<
					"수용성식이섬유인 펙틴 또한 위액의 점도를 높이고 유해콜레스테롤을 내보내 급격한 혈압상승을 억제해줍니다." <<

					"토마토가 건강식품으로 주목받는 가장 큰 이유는 ‘라이코펜’ 때문입니다." <<
					"토마토의 붉은색을 만드는 라이코펜은 강력한 항산화제로 혈전형성을 막아 " <<
					"뇌졸중, 심근경색 등을 예방하는데 효과적입니다.또 노화의 주범인 활성산소를 배출시켜 젊음을 유지하는데도 도움이 됩니다." <<
					"토마토에 풍부한 루틴은 혈관을 튼튼하게 하고 혈압을 내리는 역할을 해 고혈압환자에게 좋은 식품입니다." << endl;

				cout << "                                               " << endl;
				cout << "                                                   " << endl;
			}
			if (answer == "4")
				break;

		}


		while (grade < 100)
		{

			cout << "---------------------" << i << "일차----------------" << endl;

			cout << "                                               " << endl;
			cout << "                                                   " << endl;

			b_disease();


			cout << "                                                      " << endl;

			cout << "                                                      " << endl;

			cout << "오늘 먹을 점심을 선택하세요: " << endl;
			cout << "1.당근과 검은콩이 들어간 집밥(cal=600)   +2점" << endl;
			cout << "2.양파와 마늘이 어우러진 아빠표 도시락(cal=600)  +2점" << endl;
			cout << "3.햄버거(cal=1000)   -2점" << endl;
			cout << "4.떡볶이(cal=400)    -1점" << endl;
			cout << "5.피자(cal=600)    -2점" << endl;
			cout << "6.파스타(cal=700)    -2점" << endl;
			cout << "7.돈까스(cal=450)   -1점" << endl;
			cout << "8.라면(cal=400)    -2점" << endl;

			cin >> food;

			if (food == "1")
			{
				cal = cal - 600;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "--------------------------------------------" << endl;
				cout << "                                                      " << endl;
			}
			if (food == "2")
			{
				cal = cal - 600;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade += 1;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "3")
			{
				cal = cal - 1000;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "4")
			{
				cal = cal - 400;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "5")
			{
				cal = cal - 600;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "6")
			{
				cal = cal - 700;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "7")
			{
				cal = cal - 450;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "8")
			{
				cal = cal - 400;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}

			cout << "                                                      " << endl;

			a_disease();

			cout << "                                                      " << endl;
			cout << "오후 운동을 선택해 주세요:" << endl;
			cout << "                                                      " << endl;
			cout << "                                                      " << endl;
			cout << "1.걷기(30분)   +2" << endl;
			cout << "2.달리기(20분)  +2" << endl;
			cout << "3.자전거(40분)   +2" << endl;
			cout << "4.헬스(50분)   +3" << endl;
			cout << "5.줄넘기(30분)  +2" << endl;
			cout << "6.쉬기   -2" << endl;

			cout << "                                                      " << endl;
			cin >> exercise;

			if (exercise == "1")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;

			}

			else if (exercise == "2")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;

			}

			else if (exercise == "3")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;

			}
			else if (exercise == "4")
			{
				grade += 3;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (exercise == "5")
			{
				grade += 2;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;

			}
			else if (exercise == "6")
			{
				grade -= 2;
				cout << "                                                      " << endl;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;

			}

			b_disease();

			cout << "                                     " << endl;

			cout << "오늘 먹은 저녁을 선택하세요: " << endl;

			cout << "                                     " << endl;

			cout << "당신의 현재 섭취열량: " << cal << endl;

			cout << "                                     " << endl;

			cout << "1.해바라기씨가 들어간 현미,보리밥(cal=600)   +2점" << endl;
			cout << "2.두부,꽁치,가지,미역,다시마가 들어간 도시락(cal=600)   +2점" << endl;
			cout << "3.햄버거(cal=1000)   -2점" << endl;
			cout << "4.떡볶이(cal=400)    -1점" << endl;
			cout << "5.피자(cal=600)    -2점" << endl;
			cout << "6.치킨(cal=700)    -2점" << endl;
			cout << "7.돈까스(cal=450)   -1점" << endl;
			cout << "8.라면(cal=400)    -2점" << endl;

			cin >> food;

			if (food == "1")
			{
				cal = cal - 600;
				cout << "                                                      " << endl;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "2")
			{
				cal = cal - 600;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade += 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "3")
			{
				cal = cal - 1000;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "4")
			{
				cal = cal - 400;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "5")
			{
				cal = cal - 600;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "6")
			{
				cal = cal - 700;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "7")
			{
				cal = cal - 450;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 1;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}
			else if (food == "8")
			{
				cal = cal - 400;
				cout << "남은 열량은" << cal << "입니다." << endl;
				cout << "                                                      " << endl;
				grade -= 2;
				cout << "당신의 점수가" << grade << "되었습니다." << endl;
				cout << "                                                      " << endl;
			}

			if (sex == "남성")
				cal -= 1300;
			else if (sex == "여성")
				cal -= 1100;

			cout << "                                                      " << endl;
			a_disease();
			cout << "                                                      " << endl;
			cout << "                                     " << endl;

			if (cal < 0)
				cal = 0;

			cout << "기초대사량 제외 남은 칼로리: " << cal << endl;

			cout << "                                     " << endl;


			/*
			if (state == "과체중" || state == "비만" || state == "완전비만")
			{
				if (cal > 0) {
					cout << "칼로리가 남으면 +1점" << endl;
					grade += 1;
				}
				else {
					cout << "칼로리가 부족하면 -1점" << endl;
					grade -= 1;
				}
				cout << "그만 드시겠습니까?(예,아니오) " << endl;
				cin >> answer;
				if (answer == "예") {
					grade += 0;
					cout << "당신의 점수가" << grade << "되었습니다." << endl;
				}
				else if (answer == "아니오") {
					grade -= 1;
					cout << "당신의 점수가" << grade << "되었습니다." << endl;
				}
			}

			if (state == "저체중" || state == "심각한 저체중" || state == "기아")
			{
				if (cal < 0) {
					cout << "칼로리가 부족하면 +1점" << endl;
					grade += 1;
				}
				else
				{
					cout << "칼로리가 남으면 -1점" << endl;
					grade -= 1;
				}

				cout << "과일을 드시겠습니까?(예,아니오) " << endl;
				cin >> answer;
				if (answer == "예") {
					grade += 1;
					cout << "당신의 점수가" << grade << "되었습니다." << endl;
				}
				else if (answer == "아니오") {
					grade -= 1;
					cout << "당신의 점수가" << grade << "되었습니다." << endl;
				}
			}
			*/

			cout << "                                     " << endl;
			cout << "당신의 오늘 점수는 " << grade << "입니다." << endl;

			cout << "                                     " << endl;

			cout << "당신의 몸무게를 기록해주세요 " << endl;
			cout << "                                     " << endl;

			cin >> weight;
			cout << "                                     " << endl;

			fileprint();

			i++;
			if (sex == "남성")
				cal = 2500;
			else if (sex == "여성")
				cal = 2000;


		}



		fileread();








	}


	void a_disease(void)
	{
		cout << "        ☆                 ☆" << endl;
		cout << "식후 30분입니다. 인슐린을 복용하시겠습니까?!" << endl;
		cout << "        ☆                 ☆" << endl;
		cin >> answer;
		if (answer == "예" || answer == "네") {
			grade += 0.25;
			cout << "당신의 점수가 " << grade << "가 되었습니다." << endl;
		}
		else {

			grade -= 2;
			cout << "당신의 점수가 " << grade << "가 되었습니다." << endl;
		}
	}

	void b_disease(void)
	{
		cout << "        ☆                 ☆" << endl;
		cout << "식전 30분입니다. 혈압약을 복용하시겠습니까?!" << endl;
		cout << "        ☆                 ☆" << endl;
		cin >> answer;
		if (answer == "예" || answer == "네") {
			grade += 0.25;
			cout << "당신의 점수가 " << grade << "가 되었습니다." << endl;
		}
		else {

			grade -= 2;
			cout << "당신의 점수가 " << grade << "가 되었습니다." << endl;
		}
	}


	void fileprint(void)
	{
		cout << "                                                " << endl;
		cout << "당신의 몸무게와 점수를 매일매일 기록합니다." << endl;
		cout << "                                                " << endl;

		ofstream os{ "results.txt",ios::app };
		if (!os) {
			cerr << "파일 오픈에 실패하였습니다" << endl;
			exit(1);
		}

		os << i << "일차:";
		os << "몸무게: " << weight << "kg,  점수:  " << grade << endl;
		os << "                                     " << endl;


	}

	void fileread(void)
	{

		cout << "                                                " << endl;
		cout << "당신의 그동안의 몸무게와 점수입니다. 확인해 주세요." << endl;
		cout << "                                                " << endl;

		ifstream is{ "results.txt" };
		if (!is) {
			cerr << "파일 오픈에 실패하였습니다" << endl;
			exit(1);
		}
		string info;
		while (is) {
			is >> info;
			cout << info << " ";
		}
		cout << endl;


	}



};


class thanks : public Biman {


public:
	void happy(void)
	{
		cout << "                                                " << endl;
		cout << "그동안 프로그램에 참여하신 고객님께 감사드립니다. 앞으로도 건강한 생활 유지 기원합니다. " << endl;
		cout << "                                                " << endl;
	}


};

int main()
{
	Biman B;
	thanks c;
	B.introduction();
	B.enter();
	B.figure();
	B.supervise();

	c.happy();

}
