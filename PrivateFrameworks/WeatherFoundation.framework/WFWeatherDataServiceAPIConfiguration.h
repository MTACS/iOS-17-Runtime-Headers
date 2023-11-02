
@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {
    NSString * _environment;
    <WFForecastDataParser> * _forecastParser;
    Class  _forecastRequestFormatterClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *environment;
@property (nonatomic, retain) <WFForecastDataParser> *forecastParser;
@property (nonatomic, retain) Class forecastRequestFormatterClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)environment;
- (id)forecastParser;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 options:(id)arg7;
- (Class)forecastRequestFormatterClass;
- (id)hostUrl;
- (id)initWithVersion:(id)arg1 environment:(id)arg2;
- (bool)isValid;
- (id)parseAQIScaleNamed:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8;
- (void)setForecastParser:(id)arg1;
- (void)setForecastRequestFormatterClass:(Class)arg1;

@end
