
@interface SPWeatherComplicationData : SPComplicationData <NSSecureCoding> {
    long long  _currentConditionsEnum;
    NSString * _currentConditionsText;
    NSString * _highLowText;
    NSString * _locationText;
    NSString * _temperatureText;
}

@property (nonatomic) long long currentConditionsEnum;
@property (nonatomic, retain) NSString *currentConditionsText;
@property (nonatomic, retain) NSString *highLowText;
@property (nonatomic, retain) NSString *locationText;
@property (nonatomic, retain) NSString *temperatureText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)currentConditionsEnum;
- (id)currentConditionsText;
- (void)encodeWithCoder:(id)arg1;
- (id)highLowText;
- (id)initWithCoder:(id)arg1;
- (id)locationText;
- (void)setCurrentConditionsEnum:(long long)arg1;
- (void)setCurrentConditionsText:(id)arg1;
- (void)setHighLowText:(id)arg1;
- (void)setLocationText:(id)arg1;
- (void)setTemperatureText:(id)arg1;
- (id)temperatureText;

@end