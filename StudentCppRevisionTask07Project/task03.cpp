#include "tasks.h"

/*	Task 03. Chess & Knight [��������� ����]
*
*	��������� ���� (chess knight) ����� ������ �Ô � �� ��� ������ �� ��������� � ����� �����������
*	� �� ���� ������ �� �����������, ��� ��������.
*	���� ��� ��������� ������ ��������� �����, ����������, ����� �� ���� �������
*	� ������ ������ �� ������ ����� �����.
*
*	����������
*	1) ����� ������� ������� � ����������� ��������, ��������� ���� ��������� �����
*	� ��������� � ������� ��������������� ���������� x � y.
*	2) �� �������� "������ �� ������". ���� ������������ ����� �������� ���������� ������,
*	�� ������� ������ ���������� ��������� �������� false.
*	3) ��� ������� ���������� ������������ �������������� ��������, �������� ���������,
*	���������� �������� � �������� �������� (?:).
*
*	������ ������� ������ [input]
*	������� ��������� �� ���� ������ ����� �� 1 �� 8 ������, �������� ����� �������
*	� ����� ������ ������� ��� ������ ������ (x1, y1), � ����� ��� ������ ������ (x2, y2).
*
*	������ �������� ������ [output]
*	������� ������ ���������� ��������� �������� - ��������� �������.
*
*	[ input 1]: 4 4 4 5
*	[output 1]: false
*
*	[ input 2]: 3 6 2 4
*	[output 2]: true
*/

bool task03(int x1, int y1, int x2, int y2) {
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ||
		x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8 ||
		x1 == x2 || y1 == y2) {
		return false;
	}

	return (abs(x1 - x2) == 1 && abs(y1 - y2) == 2
		|| abs(x1 - x2) == 2 && abs(y1 - y2) == 1);
}