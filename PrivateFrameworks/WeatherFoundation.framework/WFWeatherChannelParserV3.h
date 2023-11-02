
@interface WFWeatherChannelParserV3 : NSObject <WFForecastDataParser> {
    NSCalendar * _calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_parseCommonComponents:(id)arg1 intoConditions:(id)arg2;
- (id)_parseCurrentConditions:(id)arg1;
- (id)_parseDailyForecastedConditions:(id)arg1;
- (id)_parseDailyPollenForecastedConditions:(id)arg1;
- (id)_parseForecastedConditions:(id)arg1 individualForecastProcessingBlock:(id /* block */)arg2 uniqueParsingBlock:(id /* block */)arg3;
- (id)_parseHourlyForecastedConditions:(id)arg1;
- (id)_parseLastTwentyFourHoursOfObservations:(id)arg1;
- (id)_parsePollutants:(id)arg1;
- (void)_parseWebLinks:(id)arg1 intoWeatherConditions:(id)arg2;
- (id)calendar;
- (id)init;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7;

@end
