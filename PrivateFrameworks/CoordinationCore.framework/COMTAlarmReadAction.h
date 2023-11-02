
@interface COMTAlarmReadAction : COMTAction {
    NSArray * _targetIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *targetIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetIdentifiers:(id)arg1;
- (id)targetIdentifiers;

@end
