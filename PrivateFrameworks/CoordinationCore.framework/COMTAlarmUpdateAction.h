
@interface COMTAlarmUpdateAction : COMTAction {
    MTAlarm * _alarm;
}

@property (nonatomic, readonly, copy) MTAlarm *alarm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlarm:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
