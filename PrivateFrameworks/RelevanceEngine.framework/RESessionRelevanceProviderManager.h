
@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {
    NSDate * _lastDateUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastUpdateDate;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;
+ (bool)_wantsSeperateRelevanceQueue;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;
- (id)lastUpdateDate;
- (void)pause;
- (void)resume;

@end
