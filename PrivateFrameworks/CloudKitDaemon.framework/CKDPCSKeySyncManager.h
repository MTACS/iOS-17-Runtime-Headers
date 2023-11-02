
@interface CKDPCSKeySyncManager : NSObject {
    NSObject<OS_dispatch_queue> * _keySyncQueue;
    NSMutableDictionary * _keySyncTrackerByServiceNameByAccount;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *keySyncQueue;
@property (nonatomic, retain) NSMutableDictionary *keySyncTrackerByServiceNameByAccount;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_on_queue_createSyncTrackerForAccount:(id)arg1 requestorOperationID:(id)arg2 service:(id)arg3 manatee:(bool)arg4;
- (id)_on_queue_getKeySyncTrackerByServicenameForAccount:(id)arg1;
- (void)_on_queue_performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(bool)arg3 testOverrideProvider:(id)arg4 requestorOperationID:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)_on_queue_syncTrackerForAccount:(id)arg1 requestorOperationID:(id)arg2 service:(id)arg3 manatee:(bool)arg4 shortThrottlePeriod:(bool)arg5;
- (id)createSyncTrackerForAccount:(id)arg1 requestorOperationID:(id)arg2 service:(id)arg3 manatee:(bool)arg4;
- (void)getKeySyncEligibilityForService:(id)arg1 isManatee:(bool)arg2 account:(id)arg3 lastModifiedDate:(id)arg4 testOverrideProvider:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (id)keySyncQueue;
- (id)keySyncTrackerByServiceNameByAccount;
- (void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(bool)arg3 testOverrideProvider:(id)arg4 requestorOperationID:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)setKeySyncQueue:(id)arg1;
- (void)setKeySyncTrackerByServiceNameByAccount:(id)arg1;
- (id)syncTrackerForAccount:(id)arg1 requestorOperationID:(id)arg2 service:(id)arg3 manatee:(bool)arg4 shortThrottlePeriod:(bool)arg5;
- (void)syncUserKeysForService:(id)arg1 context:(id)arg2 bundleID:(id)arg3 serviceIsManatee:(bool)arg4 account:(id)arg5 shouldThrottle:(bool)arg6 testOverrideProvider:(id)arg7 requestorOperationID:(id)arg8 completionHandler:(id /* block */)arg9;

@end
