
@interface REConditionalRelevanceProviderManager : RERelevanceProviderManager

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsDelayedUpdate;

- (float)_relevanceForProvider:(id)arg1;

@end
