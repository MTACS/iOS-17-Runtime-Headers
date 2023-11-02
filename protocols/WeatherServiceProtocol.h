
@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>

@required

- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)dailyForecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 taskIdentifier:(WFTaskIdentifier *)arg3;
- (void)forecast:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)forecast:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 withUnits:(int)arg3 locale:(NSLocale *)arg4 taskIdentifier:(WFTaskIdentifier *)arg5;
- (void)forecast:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 withUnits:(int)arg3 locale:(NSLocale *)arg4 taskIdentifier:(WFTaskIdentifier *)arg5 requestOptions:(WFRequestOptions *)arg6;
- (void)forecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 onDate:(NSDate *)arg3 options:(NSDictionary *)arg4 taskIdentifier:(WFTaskIdentifier *)arg5;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 taskIdentifier:(WFTaskIdentifier *)arg3;
- (void)invalidateCache:(WFTaskIdentifier *)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForSearchCompletion:(MKLocalSearchCompletion *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForString:(NSString *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)reachabilityConfigurationForIdentifier:(WFTaskIdentifier *)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(WFTaskIdentifier *)arg2;
- (void)temperatureUnitWithIdentifier:(WFTaskIdentifier *)arg1;

@end
