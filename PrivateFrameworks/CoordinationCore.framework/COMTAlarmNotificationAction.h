
@interface COMTAlarmNotificationAction : COMTAction {
    NSArray * _alarms;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSArray *alarms;
@property (nonatomic, readonly, copy) NSString *reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReason:(id)arg1 alarms:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reason;

@end
