#pragma once
class Rectangle

{
public:
	class Pair
	{
	private:
		double a;
		double b;
		

	public:
		double GetA() const { return a; }
		double GetB() const { return b; }
		

		void SetA(double value);
		void SetB(double value);
		

		bool Init(double a, double b);
		void Display() const;
		void Read();

		double Dobutok();
	};

	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }
	

	void SetA(double value);
	void SetB(double value);
	

	bool Init(double a, double b);
	void Display() const;
	void Read();

	double Square() const;
	double Perimeter() const;
	

private:
	Pair pair;
};


