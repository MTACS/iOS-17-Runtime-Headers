
@interface APUICardRequestSatisfactionCriteria : NSObject

+ (id)compactSatisfactionCriteria;
+ (id)customIntentSatisfactionCriteria;
+ (id)generalSatisfactionCriteria;

- (bool)canSatisfyCardRequest:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;

@end
