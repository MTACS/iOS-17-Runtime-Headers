
@interface _ATXDuetHelper : NSObject {
    _PASLock * _deletionHandlerLock;
    _PASLock * _rootOfAppDataLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_computeRootOfAppDataWithLockWitness:(id)arg1;
- (unsigned long long)_countDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (void)_enumerateActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 ascending:(bool)arg5 callback:(id /* block */)arg6;
- (void)_enumerateBatchesInDuetStream:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(bool)arg6 block:(id /* block */)arg7;
- (void)_enumerateBatchesInDuetStream:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ascending:(bool)arg7 block:(id /* block */)arg8;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(bool)arg6 block:(id /* block */)arg7;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ascending:(bool)arg7 block:(id /* block */)arg8;
- (void)_enumerateIntentEventsForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(bool)arg6 limit:(unsigned long long)arg7 ascending:(bool)arg8 callback:(id /* block */)arg9;
- (id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(bool)arg6 limit:(unsigned long long)arg7;
- (void)_handleTombstoneCreationWithNotification:(id)arg1;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)_queryDuetStreamUnbatched:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 ascending:(bool)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 offset:(unsigned long long)arg7;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ascending:(bool)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 offset:(unsigned long long)arg7;
- (void)dealloc;
- (void)deregisterDeletionHandlerWithToken:(unsigned long long)arg1;
- (void)enumerateActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 intentLimit:(unsigned long long)arg3 nsuaLimit:(unsigned long long)arg4 ascending:(bool)arg5 callback:(id /* block */)arg6;
- (void)enumerateActivityAndIntentEventsFromLastMonthWithLimit:(unsigned long long)arg1 nsuaLimit:(unsigned long long)arg2 ascending:(bool)arg3 callback:(id /* block */)arg4;
- (void)enumerateBatchedEligibleActivityDeletionUUIDsAndDatesBetweenStartDate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateBatchedIntentDeletionUUIDsAndDatesBetweenStartdate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateRelevantShortcutsAndBundleIdsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)getActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ascending:(bool)arg3;
- (id)getActivityAndIntentEventsFromLastMonth;
- (id)getActivityEventFromDKEvent:(id)arg1 bundleIdFilter:(id)arg2;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)getAppLaunchesFromOneMonth;
- (id)getAppLaunchesFromUsageBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)getDNDTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)getDocFreqFor:(id)arg1 contentKey:(id)arg2;
- (id)getFirstActivityEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getFirstAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getFirstIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4;
- (id)getFirstSortedActivityOrIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(id /* block */)arg4;
- (id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2;
- (id)getIntentEventFromDKEvent:(id)arg1 source:(long long)arg2 bundleIdFilter:(id)arg3 allowMissingTitles:(bool)arg4 intentsToKeep:(id)arg5;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 allowMissingTitles:(bool)arg5;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;
- (id)getLastAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getMicroLocationsFromLastMonth;
- (id)getMostRecentMicroLocation;
- (id)getNotificationEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)getRootOfAppSignalsFor:(id)arg1 contentKey:(id)arg2;
- (id)getScreenOnIntervalsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getSortedActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(id /* block */)arg4;
- (id)init;
- (unsigned long long)numActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)numIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)registerDeletionHandler:(id /* block */)arg1 queue:(id)arg2;

@end
