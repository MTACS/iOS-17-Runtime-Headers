
@interface COAlarmRequest : COMeshRequest {
    MTAlarm * _alarm;
}

@property (nonatomic, readonly, copy) MTAlarm *alarm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlarm:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
