
@interface COMTDeleteAction : COMTTypedAction {
    NSUUID * _targetIdentifier;
}

@property (nonatomic, readonly) NSUUID *targetIdentifier;

+ (id)actionWithTargetType:(id)arg1 targetIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetType:(id)arg1 targetIdentifier:(id)arg2;
- (id)targetIdentifier;

@end
