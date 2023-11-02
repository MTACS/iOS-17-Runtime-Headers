
@interface WFWeatherChannelRequestFormatterV2 : NSObject <WFForecastRequestFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2;
+ (id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 options:(id)arg7;
+ (id)forecastRequestForRequest:(id)arg1 queryItems:(id)arg2 forLocation:(id)arg3 rules:(id)arg4;
+ (id)forecastRequestForURL:(id)arg1 queryItems:(id)arg2;
+ (id)hostURLForService;

@end
