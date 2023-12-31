
@interface AFSearchAlarmsRequest : AFSiriRequest {
    STAlarm * _criteria;
    long long  _options;
}

@property (nonatomic, retain) STAlarm *criteria;
@property (nonatomic) long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (id)criteria;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)options;
- (void)setCriteria:(id)arg1;
- (void)setOptions:(long long)arg1;

@end
