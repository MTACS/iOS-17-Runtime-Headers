
@interface _NSPredicateUtilities : NSObject

+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)_constantValueClassesForSecureCoding;
+ (id)_expressionClassesForSecureCoding;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (bool)_isReservedWordInParser:(id)arg1;
+ (id)_operatorClassesForSecureCoding;
+ (id)_predicateClassesForSecureCoding;
+ (void)_setDebugPredicateSecurityScoping:(bool)arg1;
+ (void)_setDebugPredicateTestAction:(bool)arg1;
+ (id)abs:(id)arg1;
+ (id)add:(id)arg1 to:(id)arg2;
+ (id)average:(id)arg1;
+ (id)bitwiseAnd:(id)arg1 with:(id)arg2;
+ (id)bitwiseOr:(id)arg1 with:(id)arg2;
+ (id)bitwiseXor:(id)arg1 with:(id)arg2;
+ (id)canonical:(id)arg1;
+ (id)castObject:(id)arg1 toType:(id)arg2;
+ (id)ceiling:(id)arg1;
+ (id)count:(id)arg1;
+ (id)distanceToLocation:(id)arg1 fromLocation:(id)arg2;
+ (id)distinct:(id)arg1;
+ (id)divide:(id)arg1 by:(id)arg2;
+ (id)exp:(id)arg1;
+ (id)floor:(id)arg1;
+ (id)from:(id)arg1 subtract:(id)arg2;
+ (id)indexed:(id)arg1 by:(id)arg2;
+ (void)initialize;
+ (id)inverseOrderKey:(id)arg1;
+ (id)leftshift:(id)arg1 by:(id)arg2;
+ (id)length:(id)arg1;
+ (id)ln:(id)arg1;
+ (id)log:(id)arg1;
+ (id)lowercase:(id)arg1;
+ (id)max:(id)arg1;
+ (id)median:(id)arg1;
+ (id)min:(id)arg1;
+ (id)mode:(id)arg1;
+ (id)modulus:(id)arg1 by:(id)arg2;
+ (id)multiply:(id)arg1 by:(id)arg2;
+ (id)noindex:(id)arg1;
+ (id)now;
+ (id)objectFrom:(id)arg1 withIndex:(id)arg2;
+ (id)onesComplement:(id)arg1;
+ (id)raise:(id)arg1 toPower:(id)arg2;
+ (id)random;
+ (id)randomn:(id)arg1;
+ (id)rightshift:(id)arg1 by:(id)arg2;
+ (id)sqrt:(id)arg1;
+ (id)stddev:(id)arg1;
+ (id)sum:(id)arg1;
+ (id)tokenize:(id)arg1 using:(id)arg2;
+ (id)trunc:(id)arg1;
+ (id)uppercase:(id)arg1;

- (double)distanceFromLocation:(id)arg1;

@end
