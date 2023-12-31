
@interface AFCreateAlarmRequest : AFSiriRequest {
    STAlarm * _alarm;
}

@property (nonatomic, retain) STAlarm *alarm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarm:(id)arg1;

@end
