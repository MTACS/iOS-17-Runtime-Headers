
@protocol WFAPIConfigurationProtocol <NSObject, NSCopying>

@required

- (NSURLRequest *)aqiRequestForScaleNamed:(NSString *)arg1 language:(NSString *)arg2;
- (NSURLRequest *)forecastRequestForTypes:(unsigned long long)arg1 location:(WFLocation *)arg2 units:(int)arg3 date:(NSDate *)arg4 error:(id*)arg5 rules:(WFRequestFormattingRules *)arg6 options:(WFRequestOptions *)arg7;
- (NSURL *)hostUrl;
- (bool)isValid;
- (WFAQIScale *)parseAQIScaleNamed:(NSString *)arg1 data:(NSData *)arg2 error:(id*)arg3;
- (WFParsedForecastData *)parseForecast:(unsigned long long)arg1 data:(NSData *)arg2 location:(WFLocation *)arg3 units:(int)arg4 locale:(NSLocale *)arg5 date:(NSDate *)arg6 error:(id*)arg7 rules:(WFResponseParsingRules *)arg8;

@end
