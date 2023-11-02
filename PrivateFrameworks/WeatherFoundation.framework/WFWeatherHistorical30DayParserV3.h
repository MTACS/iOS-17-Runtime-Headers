
@interface WFWeatherHistorical30DayParserV3 : NSObject <WFForecastDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dateFormatter;
+ (id)daysOfWeek;

- (long long)getDataIndexFromFirstDayOfWeek:(id)arg1 andRequestedDate:(id)arg2;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7;
- (id)parseHistorical30DayForecastDataFromJson:(id)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4;

@end
