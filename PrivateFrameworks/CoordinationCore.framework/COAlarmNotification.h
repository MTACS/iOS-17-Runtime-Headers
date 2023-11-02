
@interface COAlarmNotification : COMeshNotification {
    NSArray * _alarms;
}

@property (nonatomic, readonly, copy) NSArray *alarms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarms;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlarms:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
