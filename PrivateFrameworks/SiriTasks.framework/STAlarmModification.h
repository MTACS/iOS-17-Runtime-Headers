
@interface STAlarmModification : STSiriModelObject {
    long long  _addedFrequency;
    NSURL * _alarmId;
    NSNumber * _enabled;
    NSNumber * _hour;
    NSString * _label;
    NSNumber * _minute;
    long long  _removedFrequency;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7;
- (long long)addedFrequency;
- (id)alarmId;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)hour;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)minute;
- (long long)removedFrequency;

@end