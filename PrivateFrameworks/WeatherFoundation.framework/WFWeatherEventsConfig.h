
@interface WFWeatherEventsConfig : NSObject <NSCopying> {
    WFWeatherEventConfig * _changeInConditions;
    WFWeatherEventConfig * _nextHourPrecipitation;
    WFWeatherEventConfig * _severeWeather;
}

@property (nonatomic, retain) WFWeatherEventConfig *changeInConditions;
@property (nonatomic, retain) WFWeatherEventConfig *nextHourPrecipitation;
@property (nonatomic, retain) WFWeatherEventConfig *severeWeather;

- (void).cxx_destruct;
- (id)changeInConditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)nextHourPrecipitation;
- (void)setChangeInConditions:(id)arg1;
- (void)setNextHourPrecipitation:(id)arg1;
- (void)setSevereWeather:(id)arg1;
- (id)severeWeather;

@end
