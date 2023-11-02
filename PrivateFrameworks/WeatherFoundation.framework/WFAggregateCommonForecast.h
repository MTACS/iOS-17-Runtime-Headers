
@interface WFAggregateCommonForecast : NSObject {
    WFAirQualityConditions * _airQualityObservations;
    NSArray * _changeForecasts;
    WFWeatherConditions * _currentObservations;
    NSArray * _dailyForecastedConditions;
    NSArray * _dailyPollenForecastedConditions;
    NSArray * _hourlyForecastedConditions;
    NSArray * _lastTwentyFourHoursOfObservations;
    WFNextHourPrecipitation * _nextHourPrecipitation;
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
@property (nonatomic, retain) NSArray *severeWeatherEvents;

- (void).cxx_destruct;
- (id)airQualityObservations;
- (id)changeForecasts;
- (id)currentObservations;
- (id)dailyForecastedConditions;
- (id)dailyPollenForecastedConditions;
- (id)hourlyForecastedConditions;
- (id)lastTwentyFourHoursOfObservations;
- (id)nextHourPrecipitation;
- (void)setAirQualityObservations:(id)arg1;
- (void)setChangeForecasts:(id)arg1;
- (void)setCurrentObservations:(id)arg1;
- (void)setDailyForecastedConditions:(id)arg1;
- (void)setDailyPollenForecastedConditions:(id)arg1;
- (void)setHourlyForecastedConditions:(id)arg1;
- (void)setLastTwentyFourHoursOfObservations:(id)arg1;
- (void)setNextHourPrecipitation:(id)arg1;
- (void)setSevereWeatherEvents:(id)arg1;
- (id)severeWeatherEvents;

@end
