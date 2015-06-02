#ifndef __CLASSES_H_INCLUDED__
#define __CLASSES_H_INCLUDED__
#include <iostream>
#include <typeinfo>
#include <list>
#include <string>
#include <vector>
using namespace std;
class team
{
private:
	string name;
	int points;
	int matchesPlayed;
	int goals;
public:
	team()
	{
		name = "";
		points = 0;
		matchesPlayed = 0;
		goals = 0;
	};
	team(string n)
	{
		name = n;
		points = 0;
		matchesPlayed = 0;
		goals = 0;
	};
	team(string n, int p, int mp, int g)
	{
		name = n;
		points = p;
		matchesPlayed = mp;
		goals = g;
	};
	void setName(string n){ name = n; };
	void setPoints(int p){ points = p; };
	void addPoints(int p){ points += p;	};
	void setMatchesPlayed(int mp) { matchesPlayed = mp; };
	void addmatch(){ matchesPlayed += 1; };
	void setGoal(int g){ goals = g; };
	void addGoals(int g){ goals += g; };
	int getPoints(){ return points; };
	int getGoals(){ return goals; };
	string getName(){ return name; };
	int getMatchesPlayed(){ return matchesPlayed; };
	friend ostream& operator<<(ostream& os, team& t);
};
ostream& operator<<(ostream& os, team& t)
{
	os << t.getName() << ": Points: " << t.getPoints() << " \ Goals: " << t.getGoals() << " \MatchesPlayed: " << t.getMatchesPlayed();
	return os;
}


class match
{
private:
	team* team1;
	team* team2;
	bool played;
	int team1Score;
	int team2Score;
	team* winner;
	bool Tie;
public:
	match()
	{
		team1 = new team();
		team2 = new team();
		team1Score = 0;
		team2Score = 0;
		winner = new team();
	};
	match(team t1, team t2)
	{
		team1 = new team();
		team2 = new team();
		*team1 = t1;
		*team2 = t2;
		team1Score = 0;
		team2Score = 0;
		winner = new team();
	};
	match(team t1, team t2, int score1, int score2)
	{
		*team1 = t1;
		*team2 = t2;
		team1Score = score1;
		team2Score = score2;
		if (score1 > score2)
		{
			winner = team1;
			team1->addPoints(3);
			Tie = false;
		}
		else if (score2 > score1)
		{
			winner = team2;
			team2->addPoints(3);
			Tie = false;
		}
		else
		{
			team1->addPoints(1);
			team2->addPoints(1);
			winner = new team();
			Tie = true;
		}
		team1->addGoals(score1);
		team1->addmatch();
		team2->addGoals(score2);
		team2->addmatch();
		played = true;
	};
	void setTeams(team t1, team t2)
	{
		*team1 = t1;
		*team2 = t2;
	};
	void setScore(int s1, int s2)
	{
		team1Score = s1;
		team2Score = s2;
		if (s1 > s2)
		{
			winner = team1;
			team1->addPoints(3);
			Tie = false;
		}
		else if (s2 > s1)
		{
			winner = team2;
			team2->addPoints(3);
			Tie = false;
		}
		else
		{
			team1->addPoints(1);
			team2->addPoints(1);
			winner = new team();
			Tie = true;
		}
		team1->addGoals(s1);
		team1->addmatch();
		team2->addGoals(s2);
		team2->addmatch();
		played = true;

	};
	void  setAsPlayed(){ played = true; };
	team getFirstTeam(){ return *team1; };
	team getSecondTeam(){ return *team2; };
	bool isplayed(){ return played; };
	team getWinner(){ return *winner; };
	bool isATie(){ return Tie; };
};



int stype = 0;

template <class T>
class node
{
	T data;
	node * next;

public:

	node() :data(team()), next(NULL){}
	node(T d) :data(d), next(NULL) {}

	T getdata()
	{
		return data;
	}
	void setdata(T d)
	{
		data = d;
	}
	node * getnext()
	{
		return next;
	}
	void setnext(node * n)
	{
		next = n;
	}
	template <class T> friend class lists;



};

template <class T>
class lists
{
	node <T>  * head;
public:
	lists() : head(nullptr) {};

	node<T> * get_head()
	{
		return head;
	}
	void set_head(node<T> * p)
	{
		head = p;
	}
	int size()
	{
		node<T> * p = head;
		int count = 0;
		while (p != NULL)
		{
			count++;
			p = p->getnext();
		}
		return count;
	}

	void additem(T item) // add at front
	{

		node <T> * temp = new node <T>(item);
		temp->data = item;
		temp->next = head;
		head = temp;
	}


	void printall()
	{

		node <T> * p = head;
		while (p != NULL)
		{
			cout << p->data;
			p = p->next;
			cout << endl;
		}

	}


	void remove(string n)
	{
		node <T> *p = head;
		node <T> *temp = NULL;
		if (head->data.getname() = n)
		{
			head = head->next;
			delete p;
			p = head;
		}

		while (head != nullptr)
		{

			if (p->data.getname() = n)
			{
				temp = p;
				p = p->next;
				delete temp;
				break;
			}
		}

		cout << p->data.get_name() << " is removed\n" << endl;
		cout << "The new list:\n" << endl;

	}



};



class league
{
	lists <team> teams;
	string name;
public:
	league(string n){name = n;}
	void showleague(){teams.printall();}
	void setleague(lists <team> t){teams = t;}
	void AddTeam(team x){teams.additem(x);}
	node<team>* getHead(){return teams.get_head();}
};

string sorting_string(int& stype, node<team> *p)
{
	if (stype == 0)
	{
		string name = p->getdata().getName();
		return name;
	}
}
int sorting_integers(int& stype, node<team> *p)
{

	if (stype == 1)
	{
		int points = p->getdata().getPoints();
		return points;
	}
	if (stype == 2)
	{
		int goals = p->getdata().getGoals();
		return goals;
	}
	if (stype == 3)
	{
		int mp = p->getdata().getMatchesPlayed();
		return mp;
	}
}

template <class T>
node<T>*   merge_sort(node<T> * left, int size)
{

	if (size < 2)
	{
		left->setnext(nullptr);
		return left;
	}

	node<T>* right = left;
	int mid = size / 2;
	while (mid)
	{
		right = right->getnext();
		--mid;
	}


	mid = size / 2;
	left = merge_sort(left, mid);

	right = merge_sort(right, size - mid);

	return merge(left, mid, right, size - mid);
}

template <class T>
node<T>*   merge(node<T>* left, int leftcount, node<T>* right, int rightcount)
{
	node<team> * p = new node<team>();
	p->setnext(nullptr);
	node<T> * tmp = p;
	string leftData = "";
	string rightData = "";

	while (leftcount > 0 && rightcount > 0)
	{
		if (stype == 0)
		{
			leftData = sorting_string(stype, left);
			rightData = sorting_string(stype, right);
			if (leftData < rightData)
			{
				tmp->setnext(left);
				tmp = tmp->getnext();
				left = left->getnext();
				--leftcount;
			}
			else if (rightData < leftData)
			{
				tmp->setnext(right);
				tmp = tmp->getnext();
				right = right->getnext();
				--rightcount;
			}

		}
		if (stype > 0)
		{
			if (/*left->getdata*/sorting_integers(stype, left) > /*right->getdata()*/sorting_integers(stype, right))
			{
				tmp->setnext(left);
				tmp = tmp->getnext();
				left = left->getnext();
				--leftcount;
			}
			else if (/*right->getdata*/sorting_integers(stype, right) > /*left->getdata()*/sorting_integers(stype, left))
			{
				tmp->setnext(right);
				tmp = tmp->getnext();
				right = right->getnext();
				--rightcount;
			}
			else
			{
				tmp->setnext(left);
				tmp = tmp->getnext();
				left = left->getnext();
				--leftcount;
				tmp->setnext(right);
				tmp = tmp->getnext();
				right = right->getnext();
				--rightcount;
			}
		}
	}

	while (leftcount > 0)
	{
		tmp->setnext(left);
		tmp = tmp->getnext();
		left = left->getnext();
		--leftcount;
	}

	while (rightcount > 0)
	{
		tmp->setnext(right);
		tmp = tmp->getnext();
		right = right->getnext();
		--rightcount;
	}

	tmp = p;
	p = p->getnext();
	delete(tmp);

	return p;
}

class week
{
private:
	int order;
	vector <match> matches;
public:
	week(){}
	week(int i){ order = i; }
	week(int i, vector<match> m) { order = i; matches = m; }
	void setOrder(int i){ order = i; }
	void addMatches(vector <match> m){ matches = m; }
	vector<match> getMatches(){ return matches; }

};

vector <week> getWeeklyScedule(vector <team> t)
{
	vector<week> weeks;
	vector <match> m;
	for (int i = 1; i < 8; i++)
	{
		//decreae i in code by 1
		if (i < 5 && i > 0)
		{
			for (int x = 0; x < 4; x++)
			{
				team t1 = t[x];
				team t2 = t[(((3 + x + i) % 4) + 4)];
				match* newMAtch = new match(t1, t2);
				m.push_back(*newMAtch);
			}
			week* newWeek = new week(i, m);
			weeks.push_back(*newWeek);
			m.clear();
			//cout << 1 + x << " - " << (((4 + x + i) % 4) + 4) << "\n";
		}
		else if (i == 5)
		{
			for (int x = 0; x < 4; x++)
			{
				match* newMAtch = new match(t[2 * x], t[(1 + 2 * x)]);
				m.push_back(*newMAtch);
				//cout << 1 + 2 * x << " - " << (1 + 2 * x) + 1 << "\n";
			}
			week* newWeek = new week(i, m);
			weeks.push_back(*newWeek);
			m.clear();
		}
		else if (i == 6)
		{
			for (int x = 0; x < 4; x++)
			{
				match* newMAtch = new match(t[((1 + 4 * x) % 7) - 1], t[(1 + 4 * x) % 7 + 1]);
				m.push_back(*newMAtch);
				//cout << (1 + 4 * x) % 7 << " - " << (1 + 4 * x) % 7 + 2 << "\n";
			}
			week* newWeek = new week(i, m);
			weeks.push_back(*newWeek);
			m.clear();
		}
		else if (i == 7)
		{
			for (int x = 0; x < 2; x++)
			{
				match* newMAtch = new match(t[((1 + 4 * x) % 7) - 1], t[(1 + 4 * x) % 7 + 2]);
				m.push_back(*newMAtch);
				//	cout << (1 + 4 * x) % 7 << " - " << (1 + 4 * x) % 7 + 3 << "\n";
			}
			for (int x = 2; x < 4; x++)
			{
				m.push_back(*new match(t[((1 + 4 * x) % 7) - 1], t[(1 + 4 * x) % 7]));
				//cout << (1 + 4 * x) % 7 << " - " << (1 + 4 * x) % 7 + 1 << "\n";
			}
			week* newWeek = new week(i, m);
			weeks.push_back(*newWeek);
			m.clear();
		}
	}

	for (int i = 0; i < 7; i++)
	{
		vector<match> mat(4);
		vector<match> newMAt(4);
		mat = weeks[i].getMatches();
		for (int j = 0; j < 4; j++)
		{
			newMAt[j] = *new match(mat[j].getSecondTeam(), mat[j].getFirstTeam());
		}
		week* newWeek = new week(i + 8, newMAt);
		weeks.push_back(*newWeek);
		mat.clear();
		newMAt.clear();
	}
	return weeks;
}


//void main()
//{
//	team t1("man", 8, 3, 4), t2("real", 6, 3, 5), t3("barcelona", 3, 3, 10), t4("chelsea", 4, 3, 6);
//	lists <team> l;
//	l.additem(t1);
//	l.additem(t2);
//	l.additem(t3);
//	l.additem(t4);
//	l.printall();
//	node<team> * p = l.get_head();
//	cout << "---------------------------" << endl;
//	stype = 3;
//	p = merge_sort(l.get_head(), l.size());
//	l.set_head(p);
//	l.printall();
//	system("pause");
//}
#endif