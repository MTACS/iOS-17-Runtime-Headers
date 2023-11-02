
@interface NSTruePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (bool)supportsSecureCoding;

- (bool)_allowsEvaluation;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
