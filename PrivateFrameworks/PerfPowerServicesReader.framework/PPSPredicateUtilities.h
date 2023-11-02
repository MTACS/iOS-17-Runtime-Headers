
@interface PPSPredicateUtilities : NSObject

+ (id)constantValueForLeftExpression:(id)arg1 inPredicate:(id)arg2;
+ (id)constantValueForLeftKeyPath:(id)arg1 inPredicate:(id)arg2;
+ (id)keyPathsAndValuesForPredicate:(id)arg1;
+ (id)predicateByRemovingSubpredicateWithLeftExpression:(id)arg1 fromPredicate:(id)arg2;
+ (id)predicateByRemovingSubpredicateWithLeftKeyPath:(id)arg1 fromPredicate:(id)arg2;
+ (id)predicateForDateInterval:(id)arg1 withKeyPath:(id)arg2;
+ (id)subpredicateForPredicate:(id)arg1 withLeftExpression:(id)arg2;
+ (id)subpredicateForPredicate:(id)arg1 withLeftKeyPath:(id)arg2;
+ (id)subpredicatesForPredicate:(id)arg1 withLeftExpression:(id)arg2;
+ (id)subpredicatesForPredicate:(id)arg1 withLeftKeyPath:(id)arg2;

@end
