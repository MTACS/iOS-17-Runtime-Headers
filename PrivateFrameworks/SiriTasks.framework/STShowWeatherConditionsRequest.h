
@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes * _attributes;
    STCity * _city;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAttributes:(id)arg1 city:(id)arg2;
- (id)attributes;
- (id)city;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
