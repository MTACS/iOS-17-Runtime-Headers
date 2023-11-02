
@interface STShowDailyWeatherForecastRequest : AFSiriRequest {
    STCity * _city;
    STWeatherAttributes * _currentAttributes;
    NSArray * _dailyAttributes;
    long long  _startWeekday;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4;
- (id)city;
- (id)createResponse;
- (id)currentAttributes;
- (id)dailyAttributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)startWeekday;

@end
