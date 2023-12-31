
@interface NSCompoundPredicateOperator : NSPredicateOperator

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)andPredicateOperator;
+ (void)initialize;
+ (id)notPredicateOperator;
+ (id)orPredicateOperator;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluatePredicates:(id)arg1 withObject:(id)arg2;
- (bool)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3;
- (id)predicateFormat;
- (id)symbol;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1 ofPredicates:(id)arg2;

@end
