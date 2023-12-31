
@interface AFCreateAlarmResponse : AFSiriResponse {
    NSString * _alarmIdentifier;
}

@property (nonatomic, copy) NSString *alarmIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarmIdentifier:(id)arg1;

@end
