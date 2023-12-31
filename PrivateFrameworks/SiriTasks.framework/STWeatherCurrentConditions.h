
@interface STWeatherCurrentConditions : STSiriModelObject {
    long long  _conditionCode;
    NSNumber * _highTemperature;
    NSNumber * _lowTemperature;
    NSNumber * _temperature;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4;
- (long long)conditionCode;
- (void)encodeWithCoder:(id)arg1;
- (id)highTemperature;
- (id)initWithCoder:(id)arg1;
- (id)lowTemperature;
- (id)temperature;

@end
