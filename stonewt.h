#ifndef STONEWT_H
#define STONEWT_H
 
class Stonewt
{
private:
    enum{Labs_per_stn = 14};
    int stone; 
    double pds_left;
    double pounds;
 
public:
    Stonewt(double lbs);
    Stonewt(int stn,double lbs);
    Stonewt(const Stonewt & st);
    void operator= (const Stonewt & st);


    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};
 
#endif