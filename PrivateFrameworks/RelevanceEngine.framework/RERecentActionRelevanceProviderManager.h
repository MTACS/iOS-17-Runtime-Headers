
@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {
    NSDate * _lastDateUpdate;
    NSMutableDictionary * _relevanceProviderMap;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_handleActionPerformedNotifiction:(id)arg1;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (void)_removeProvider:(id)arg1;
- (void)_scheduleUpdatesForActionProvider:(id)arg1;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)pause;
- (void)resume;

@end
