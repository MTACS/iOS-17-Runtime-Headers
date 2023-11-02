
@interface COMTUpdateInterestAction : COMTTypedAction {
    NSArray * _targetIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *targetIdentifiers;

+ (id)actionWithTargetType:(id)arg1 targetIdentifiers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetType:(id)arg1 targetIdentifiers:(id)arg2;
- (id)targetIdentifiers;

@end
