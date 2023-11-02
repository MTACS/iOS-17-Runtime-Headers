
@interface REGroupRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

@end
