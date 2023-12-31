
@interface SGDSpotlightCommander : NSObject {
    id  _deviceStateToken;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SGSqlEntityStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_attemptToProcessRequests;
- (void)_executeReimportOfIdentifiers:(id)arg1;
- (void)_issueCommand:(id)arg1;
- (bool)_locked;
- (id)_protectionClasses;
- (void)_registerForLockStateChange;
- (void)_reimportFromBundleId:(id)arg1 protectionClasses:(id)arg2 identifiers:(id)arg3;
- (id)_reimportQueryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 requestId:(unsigned long long)arg4;
- (bool)_unlocked;
- (void)_unregisterForLockStateChange;
- (id)init;
- (id)queryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contentTypes:(id)arg4;
- (void)requestReimportForHistoricalDataRequest:(id)arg1;
- (void)requestReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end
