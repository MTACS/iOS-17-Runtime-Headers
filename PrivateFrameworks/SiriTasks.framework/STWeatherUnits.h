
@interface STWeatherUnits : STSiriModelObject {
    long long  _temperatureUnits;
}

+ (bool)supportsSecureCoding;

- (id)_initWithTemperatureUnits:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)temperatureUnits;

@end
