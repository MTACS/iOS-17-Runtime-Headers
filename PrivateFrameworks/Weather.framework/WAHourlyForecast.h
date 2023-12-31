
@interface WAHourlyForecast : NSObject <NSCopying> {
    long long  _conditionCode;
    unsigned long long  _eventType;
    NSString * _forecastDetail;
    long long  _hourIndex;
    double  _percentPrecipitation;
    WFTemperature * _temperature;
    NSString * _time;
}

@property (nonatomic) long long conditionCode;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, copy) NSString *forecastDetail;
@property (nonatomic) long long hourIndex;
@property (nonatomic) double percentPrecipitation;
@property (nonatomic, retain) WFTemperature *temperature;
@property (nonatomic, copy) NSString *time;

+ (long long)TimeValueFromString:(id)arg1;
+ (id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4;

- (void).cxx_destruct;
- (long long)conditionCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)eventType;
- (id)forecastDetail;
- (unsigned long long)hash;
- (long long)hourIndex;
- (bool)isEqual:(id)arg1;
- (double)percentPrecipitation;
- (void)setConditionCode:(long long)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setForecastDetail:(id)arg1;
- (void)setHourIndex:(long long)arg1;
- (void)setPercentPrecipitation:(double)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTime:(id)arg1;
- (id)temperature;
- (id)time;

@end
