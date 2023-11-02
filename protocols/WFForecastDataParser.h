
@protocol WFForecastDataParser <NSObject>

@required

- (WFAQIScale *)parseAQIScaleNamed:(NSString *)arg1 data:(NSData *)arg2 error:(id*)arg3;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 locale:(NSLocale *)arg4 date:(NSDate *)arg5 error:(id*)arg6;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 locale:(NSLocale *)arg4 date:(NSDate *)arg5 error:(id*)arg6 rules:(WFResponseParsingRules *)arg7;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 units:(int)arg4 locale:(NSLocale *)arg5 date:(NSDate *)arg6 error:(id*)arg7 rules:(WFResponseParsingRules *)arg8;

@end
