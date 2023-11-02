
@interface REPriorityRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (float)_relevanceForProvider:(id)arg1;

@end
