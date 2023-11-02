
@interface SAWeatherDailyForecast : SAWeatherForecast

@property (nonatomic, copy) NSNumber *highTemperature;
@property (nonatomic, copy) NSNumber *lowTemperature;

+ (id)dailyForecast;
+ (id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)highTemperature;
- (id)lowTemperature;
- (void)setHighTemperature:(id)arg1;
- (void)setLowTemperature:(id)arg1;

@end
