
@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (nonatomic, copy) NSNumber *temperature;

+ (id)hourlyForecast;
+ (id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTemperature:(id)arg1;
- (id)temperature;

@end
