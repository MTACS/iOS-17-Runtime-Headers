
@interface STCreateAlarmAction : STAlarmAction {
    STAlarm * _alarm;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlarm:(id)arg1;
- (id)alarm;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
