
@interface AXWeatherUtilities : NSObject

+ (id)sharedInstance;

- (unsigned long long)_weatherCodeForGenericIconName:(id)arg1;
- (id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(unsigned long long)arg2;
- (id)descriptionForWeatherConditionImageName:(id)arg1;
- (id)descriptionForWeatherWFConditionCode:(unsigned long long)arg1;

@end
