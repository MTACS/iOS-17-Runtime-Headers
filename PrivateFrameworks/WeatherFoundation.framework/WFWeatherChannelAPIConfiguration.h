
@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {
    <WFForecastDataParser> * _defaultForecastParser;
    Class  _defaultForecastRequestFormatterClass;
    NSMutableDictionary * _requestFormatterForForecastType;
    NSMutableDictionary * _requestParserForForecastType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <WFForecastDataParser> *defaultForecastParser;
@property (nonatomic, retain) Class defaultForecastRequestFormatterClass;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSMutableDictionary *requestFormatterForForecastType;
@property (nonatomic, retain) NSMutableDictionary *requestParserForForecastType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultForecastParser;
- (Class)defaultForecastRequestFormatterClass;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 options:(id)arg7;
- (id)hostUrl;
- (id)initWithVersion:(id)arg1;
- (bool)isValid;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8;
- (id)requestFormatterForForecastType;
- (id)requestParserForForecastType;
- (void)setDefaultForecastFormatter:(Class)arg1;
- (void)setDefaultForecastParser:(id)arg1;
- (void)setDefaultForecastRequestFormatterClass:(Class)arg1;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestFormatterForForecastType:(id)arg1;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestParserForForecastType:(id)arg1;

@end
