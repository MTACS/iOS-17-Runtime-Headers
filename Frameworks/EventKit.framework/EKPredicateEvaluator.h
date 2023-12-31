
@interface EKPredicateEvaluator : NSObject <CADPredicateValidator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)evaluatePredicate:(id)arg1 withObject:(id)arg2;

@end
