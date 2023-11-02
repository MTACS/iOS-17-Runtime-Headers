
@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    BKSHIDEventKeyCommandsDispatchingPredicate * _predicate;
    NSArray * _targets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BKSHIDEventKeyCommandsDispatchingPredicate *predicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *targets;

+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg1 toTargets:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPredicate:(id)arg1 targets:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targets;

@end
