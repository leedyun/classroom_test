# classroom_test

학생들은 기본적인 산술 연산(덧셈, 뺄셈, 곱셈, 나눗셈)을 수행할 수 있는 간단한 계산기 프로그램을 구현해야 합니다. 
이 프로그램은 사용자가 입력한 두 숫자와 연산자를 받아서 결과를 출력합니다. 또한, Google Test를 사용하여 작성한 코드를 테스트하는 과정도 포함되어 있습니다.


## 학생들의 과제 수행 과정

1. 템플릿 리포지토리 복제
학생들은 GitHub Classroom에서 제공한 템플릿 리포지토리를 자신의 리포지토리로 복제합니다.

2. 코드 작성
학생들은 src/calculator.cpp 파일에서 함수를 구현합니다. 함수의 구현 부분을 작성하여 클래스의 기능을 완성해야 합니다.

3. 코드 커밋 및 푸시
학생들은 코드를 작성한 후, GitHub에 커밋하고 푸시합니다.

4. Pull Request 생성
학생들은 GitHub에서 Pull Request를 생성하여 과제를 제출합니다.

5. 자동화된 테스트
Pull Request가 생성되면, GitHub Actions가 자동으로 빌드 및 테스트를 실행합니다. 테스트 결과는 Pull Request 페이지에서 확인할 수 있습니다.

6. 피드백 확인 및 수정
학생들은 테스트 결과를 확인하고 필요시 코드를 수정하여 다시 제출할 수 있습니다.


## 파일 구성 및 자세한 설명

<프로젝트 구조>
calculator/
├── .github/
│   └── workflows/
│       └── ci.yml
├── Makefile
├── src/
│   ├── main.cpp
│   └── calculator.cpp
├── include/
│   └── calculator.h
└── tests/
    └── test_calculator.cpp

1. include/calculator.h
   - 이 파일은 학생들에게 제공되는 헤더 파일로, 계산기 클래스의 인터페이스를 정의
   - 이 파일을 통해 계산기 클래스가 제공할 함수들을 선언
   - 학생들은 이 헤더 파일을 기반으로 calculator.cpp 파일에서 함수를 구현해야 함
2. src/main.cpp
   - 프로그램의 진입점으로, 사용자 입력을 받아 계산기 기능을 수행하는 역할을 함
   - 학생들이 작성한 calculator.cpp 파일의 함수를 호출하여 실제 계산을 수행하고, 결과 출력
3. src/calculator.cpp
   - 학생들이 직접 작성해야 하는 파일로, calculator.h 파일에 선언된 함수들을 구현
4. tests/test_calculator.cpp
   - Google Test를 사용하여 작성된 테스트 파일로, 학생들이 작성한 계싼기 클래스의 함수들을 테스트
5. Makefile
   - 프로젝트 빌드 및 테스트를 자동화하는 명령어를 포함
   - make 명령을 사용하여 쉽게 빌드 및 테스트를 실행 가능
6. ci.yaml (GitHub Actions 워크플로우 파일)
   - GitHub Actions를 사용하여 자동화된 빌드 및 테스트를 설정하는 파일
   - 학생들이 Pull Request를 생성할 때마다 이 워크플로우가 실행
