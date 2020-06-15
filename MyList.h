#ifndef MYLIST_H
#define MYLIST_H
#include <QDebug>
class MyList
{
public:
    MyList() {};

    void append(int value)
    {
        int* ar = new int [m_size+1];
        for (int i=0;i<m_size;i++)
        {
            ar[i]=array[i];
        }
        ar[m_size]=value;
        delete [] array;
        array = ar;
        m_size++;

    }
    void remove(int value)
    {
        int* ar = new int [m_size-1];
        for (int i=0;i<m_size;i++)
        {
            ar[i]=array[i];
            if (array[i]==value)
            {
                ar[i]=array[i+1];
            }
        }
        delete [] array;
        array = ar;
        m_size--;

    }
    int at(int index)
    {
        return array[index];
    }
    void print()
    {
        for(int i=0;i<m_size;i++)
        {
            qDebug()<<array[i];
        }
    }

private:
    int* array = nullptr;
    int m_size=0;

};

#endif // MYLIST_H
