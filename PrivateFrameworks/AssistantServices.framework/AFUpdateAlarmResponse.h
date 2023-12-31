
@interface AFUpdateAlarmResponse : AFSiriResponse {
    NSArray * _alarmIdentifiers;
}

@property (nonatomic, copy) NSArray *alarmIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarmIdentifier:(id)arg1;
- (void)setAlarmIdentifiers:(id)arg1;

@end
