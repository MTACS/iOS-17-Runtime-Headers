
@interface WADayForecast : NSObject <NSCopying> {
    unsigned long long  _dayNumber;
    unsigned long long  _dayOfWeek;
    WFTemperature * _high;
    unsigned long long  _icon;
    bool  _isYesterday;
    WFTemperature * _low;
    double  _percentPrecipitation;
}

@property (nonatomic) unsigned long long dayNumber;
@property (nonatomic) unsigned long long dayOfWeek;
@property (nonatomic, copy) WFTemperature *high;
@property (nonatomic) unsigned long long icon;
@property (nonatomic) bool isYesterday;
@property (nonatomic, copy) WFTemperature *low;
@property (nonatomic) double percentPrecipitation;

+ (id)dayForecastForLocation:(id)arg1 conditions:(id)arg2;

- (void).cxx_destruct;
- (long long)compareDayNumberToDayForecast:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dayNumber;
- (unsigned long long)dayOfWeek;
- (id)description;
- (unsigned long long)hash;
- (id)high;
- (unsigned long long)icon;
- (bool)isEqual:(id)arg1;
- (bool)isYesterday;
- (id)low;
- (double)percentPrecipitation;
- (void)setDayNumber:(unsigned long long)arg1;
- (void)setDayOfWeek:(unsigned long long)arg1;
- (void)setHigh:(id)arg1;
- (void)setIcon:(unsigned long long)arg1;
- (void)setIsYesterday:(bool)arg1;
- (void)setLow:(id)arg1;
- (void)setPercentPrecipitation:(double)arg1;

@end
