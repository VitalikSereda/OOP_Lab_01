#pragma once
using namespace std;
class Rectangel
{
private:
	int H, W;
public:
	Rectangel(int height, int widht) {
		H = height;
		W = widht;
	}

	int GetHeight() {
		return H;
	}
	int GetWidght() {
		return W;
	}

	void ChangeHeight(int newH) {
		H = newH;
	}
	void ChangeWidht(int newW) {
		W = newW;
	}

	int GetSquare() {
		return H * W;
	}
	int GetPerumetr() {
		return 2 * (H + W);
	}

	~Rectangel() {
	}

};
