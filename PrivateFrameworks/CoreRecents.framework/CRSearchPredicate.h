
@interface CRSearchPredicate : NSObject <NSSecureCoding>

+ (id)predicateForKey:(id)arg1 inCollection:(id)arg2;
+ (id)predicateForKey:(id)arg1 matchingText:(id)arg2 comparison:(unsigned long long)arg3;
+ (id)predicateSatisfyingAllSubpredicates:(id)arg1;
+ (id)predicateSatisfyingAnySubpredicate:(id)arg1;
+ (id)secureCodableSubclasses;
+ (bool)supportsSecureCoding;

- (id)asNSPredicate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
