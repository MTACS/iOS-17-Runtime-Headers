
@interface NWCEntryModel : NSObject <NSSecureCoding> {
    WFAirQualityConditions * _airQualityConditions;
    WFWeatherConditions * _conditions;
    WFWeatherConditions * _dailyConditions;
    NSArray * _hourlyEntryModels;
    unsigned long long  _timeOfDay;
}

@property (readonly) WFAirQualityConditions *airQualityConditions;
@property (readonly) WFWeatherConditions *conditions;
@property (readonly) WFWeatherConditions *dailyConditions;
@property (readonly) NSArray *hourlyEntryModels;
@property (readonly) unsigned long long timeOfDay;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airQualityConditions;
- (id)conditions;
- (id)dailyConditions;
- (void)encodeWithCoder:(id)arg1;
- (id)hourlyEntryModels;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4;
- (id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 hourlyEntryModels:(id)arg3 dailyConditions:(id)arg4 timeOfDay:(unsigned long long)arg5;
- (id)initWithConditions:(id)arg1 dailyConditions:(id)arg2 timeOfDay:(unsigned long long)arg3;
- (id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4;
- (id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 timeOfDay:(unsigned long long)arg3;
- (id)initWithConditions:(id)arg1 timeOfDay:(unsigned long long)arg2;
- (unsigned long long)timeOfDay;

@end
