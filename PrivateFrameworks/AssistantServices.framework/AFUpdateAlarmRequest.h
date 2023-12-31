
@interface AFUpdateAlarmRequest : AFSiriRequest {
    NSArray * _alarms;
}

@property (nonatomic, copy) NSArray *alarms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (id)alarms;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarms:(id)arg1;

@end
