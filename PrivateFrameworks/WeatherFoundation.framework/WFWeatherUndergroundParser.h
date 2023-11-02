
@interface WFWeatherUndergroundParser : NSObject <WFForecastDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)arg1;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;

- (id)dateFromUTCDict:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (void)logParsingErrorAtKeyPath:(id)arg1 error:(id*)arg2;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7;
- (id)parseHistoricalForecast:(id)arg1 error:(id*)arg2;
- (id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3;

@end
