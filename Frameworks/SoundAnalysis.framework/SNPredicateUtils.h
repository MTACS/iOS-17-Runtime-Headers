
@interface SNPredicateUtils : NSObject

+ (bool)ensureExpression:(id)arg1 hasType:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)ensureExpression:(id)arg1 isConstantValueSatisfyingPredicate:(id /* block */)arg2 error:(id*)arg3;
+ (bool)ensureExpression:(id)arg1 isKeyPathMatchingOneOfOptions:(id)arg2 error:(id*)arg3;
+ (bool)ensureExpression:(id)arg1 isKeyPathSatisfyingPredicate:(id /* block */)arg2 error:(id*)arg3;
+ (bool)ensureExpressionIsConstantNumberValue:(id)arg1 error:(id*)arg2;
+ (bool)ensurePredicate:(id)arg1 isComparisonWithOperatorFromOptions:(id)arg2 withRightConstantNumberAndLeftKeyPathFromOptions:(id)arg3 error:(id*)arg4;
+ (bool)ensurePredicate:(id)arg1 isComparisonWithOperatorTypePredicate:(id /* block */)arg2 leftPredicate:(id /* block */)arg3 rightPredicate:(id /* block */)arg4 error:(id*)arg5;
+ (bool)ensurePredicateMeetsDetectSoundRequestRequirements:(id)arg1 error:(id*)arg2;
+ (bool)ensurePredicateOperatorType:(unsigned long long)arg1 isOneOfOptions:(id)arg2 error:(id*)arg3;

- (id)init;

@end
