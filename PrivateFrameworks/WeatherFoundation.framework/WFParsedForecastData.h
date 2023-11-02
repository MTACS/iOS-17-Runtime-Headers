
@interface WFParsedForecastData : NSObject {
    WFAirQualityConditions * _airQualityObservations;
    NSArray * _changeForecasts;
    WFWeatherConditions * _currentConditions;
    NSArray * _dailyForecasts;
    NSArray * _hourlyForecasts;
    NSArray * _lastTwentyFourHoursOfObservations;
    WFNextHourPrecipitation * _nextHourPrecipitation;
    NSArray * _pollenForecasts;
    NSData * _rawData;
    NSArray * _severeWeatherEvents;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityObservations;
@property (nonatomic, retain) NSArray *changeForecasts;
@property (nonatomic, retain) WFWeatherConditions *currentConditions;
@property (nonatomic, retain) NSArray *dailyForecasts;
@property (nonatomic, retain) NSArray *hourlyForecasts;
@property (nonatomic, retain) NSArray *lastTwentyFourHoursOfObservations;
@property (nonatomic, retain) WFNextHourPrecipitation *nextHourPrecipitation;
@property (nonatomic, retain) NSArray *pollenForecasts;
@property (nonatomic, retain) NSData *rawData;
@property (nonatomic, retain) NSArray *severeWeatherEvents;

- (void).cxx_destruct;
- (id)airQualityObservations;
- (id)changeForecasts;
- (id)currentConditions;
- (id)dailyForecasts;
- (id)hourlyForecasts;
- (id)lastTwentyFourHoursOfObservations;
- (id)nextHourPrecipitation;
- (id)objectForForecastType:(unsigned long long)arg1;
- (id)pollenForecasts;
- (id)rawData;
- (void)setAirQualityObservations:(id)arg1;
- (void)setChangeForecasts:(id)arg1;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setLastTwentyFourHoursOfObservations:(id)arg1;
- (void)setNextHourPrecipitation:(id)arg1;
- (void)setPollenForecasts:(id)arg1;
- (void)setRawData:(id)arg1;
- (void)setSevereWeatherEvents:(id)arg1;
- (id)severeWeatherEvents;

@end
