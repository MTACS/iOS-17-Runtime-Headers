
@interface WFWeatherDataServiceRequestFormatterV1 : NSObject <WFForecastRequestFormatter, WFForecastRequestFormatterMultiHost>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 options:(id)arg7;
+ (id)geocodePathForLocation:(id)arg1 rules:(id)arg2;
+ (id)hostURLForEnvironment:(id)arg1;
+ (id)hostURLForService;
+ (id)languagePathForLocale:(id)arg1;

@end
