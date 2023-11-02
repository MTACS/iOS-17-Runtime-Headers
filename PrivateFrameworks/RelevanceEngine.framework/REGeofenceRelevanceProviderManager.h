
@interface REGeofenceRelevanceProviderManager : RESharedLocationRelevanceProviderManager

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;

- (int)_queryRevokableStatusForProvider:(id)arg1;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

@end
