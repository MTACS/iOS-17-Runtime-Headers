
@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {
    NSDate * _lastDateUpdate;
    NSDateInterval * _todayInterval;
}

@property (nonatomic, readonly) NSDate *lastDateUpdate;
@property (nonatomic, readonly) NSDate *todayEnd;
@property (nonatomic, readonly) NSDate *todayStart;

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;
+ (bool)_wantsSeperateRelevanceQueue;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_prepareForUpdate;
- (void)_scheduleUpdateForDate:(id)arg1;
- (void)_scheduleUpdatesForDateProvider:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)lastDateUpdate;
- (void)pause;
- (void)resume;
- (id)todayEnd;
- (id)todayStart;

@end
