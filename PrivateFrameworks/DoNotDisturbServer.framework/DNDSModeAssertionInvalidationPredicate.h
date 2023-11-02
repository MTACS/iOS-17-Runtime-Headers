
@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic, readonly) unsigned long long predicateType;

+ (id)predicateForAnyAssertion;
+ (id)predicateForAssertionClientIdentifiers:(id)arg1;
+ (id)predicateForAssertionUUIDs:(id)arg1;
+ (id)predicateForAssertionsTakenBeforeDate:(id)arg1;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)predicateType;

@end
