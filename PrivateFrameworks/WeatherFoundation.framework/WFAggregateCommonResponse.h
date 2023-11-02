
@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding> {
    WFAirQualityConditions * _airQualityObservations;
    NSArray * _changeForecasts;
    WFWeatherConditions * _currentObservations;
    NSArray * _dailyForecastedConditions;
    NSArray * _dailyPollenForecastedConditions;
    NSArray * _hourlyForecastedConditions;
    NSArray * _lastTwentyFourHoursOfObservations;
    WFNextHourPrecipitation * _nextHourPrecipitation;
    NSData * _rawAPIData;
    bool  _responseWasFromCache;
    NSArray * _severeWeatherEvents;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityObservations;
@property (nonatomic, retain) NSArray *changeForecasts;
@property (nonatomic, retain) WFWeatherConditions *currentObservations;
@property (nonatomic, retain) NSArray *dailyForecastedConditions;
@property (nonatomic, retain) NSArray *dailyPollenForecastedConditions;
@property (nonatomic, retain) NSArray *hourlyForecastedConditions;
@property (nonatomic, retain) NSArray *lastTwentyFourHoursOfObservations;
@property (nonatomic, retain) WFNextHourPrecipitation *nextHourPrecipitation;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) bool responseWasFromCache;
@property (nonatomic, retain) NSArray *severeWeatherEvents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airQualityObservations;
- (id)changeForecasts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentObservations;
- (id)dailyForecastedConditions;
- (id)dailyPollenForecastedConditions;
- (void)encodeWithCoder:(id)arg1;
- (id)hourlyForecastedConditions;
- (id)initWithCoder:(id)arg1;
- (id)lastTwentyFourHoursOfObservations;
- (id)nextHourPrecipitation;
- (id)rawAPIData;
- (bool)responseWasFromCache;
- (void)setAirQualityObservations:(id)arg1;
- (void)setChangeForecasts:(id)arg1;
- (void)setCurrentObservations:(id)arg1;
- (void)setDailyForecastedConditions:(id)arg1;
- (void)setDailyPollenForecastedConditions:(id)arg1;
- (void)setHourlyForecastedConditions:(id)arg1;
- (void)setLastTwentyFourHoursOfObservations:(id)arg1;
- (void)setNextHourPrecipitation:(id)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setResponseWasFromCache:(bool)arg1;
- (void)setSevereWeatherEvents:(id)arg1;
- (id)severeWeatherEvents;

@end
