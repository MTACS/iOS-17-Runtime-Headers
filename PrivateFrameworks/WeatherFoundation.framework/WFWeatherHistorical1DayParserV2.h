
@interface WFWeatherHistorical1DayParserV2 : NSObject <WFForecastDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)parseForecastConditionsFromObservations:(id)arg1;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7;
- (id)parseHistoricalForecast:(id)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)parseHistoricalForecastConditionsFromObservations:(id)arg1 forDate:(id)arg2;

@end
