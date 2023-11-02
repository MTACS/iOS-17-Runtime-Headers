
@interface CKDPCSKeySyncTracker : NSObject {
    bool  _KRSReturnedExistingIdentity;
    NSString * _accountDsid;
    NSDate * _completionDate;
    bool  _manatee;
    NSString * _requestorOperationID;
    NSString * _serviceName;
    NSError * _syncError;
    NSObject<OS_dispatch_group> * _syncGroup;
    NSNumber * _syncStatus;
}

@property (nonatomic) bool KRSReturnedExistingIdentity;
@property (nonatomic, retain) NSString *accountDsid;
@property (nonatomic, retain) NSDate *completionDate;
@property (getter=isManatee, nonatomic) bool manatee;
@property (nonatomic, copy) NSString *requestorOperationID;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, retain) NSError *syncError;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, retain) NSNumber *syncStatus;

- (void).cxx_destruct;
- (bool)KRSReturnedExistingIdentity;
- (id)accountDsid;
- (id)completionDate;
- (bool)isManatee;
- (id)requestorOperationID;
- (id)serviceName;
- (void)setAccountDsid:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setKRSReturnedExistingIdentity:(bool)arg1;
- (void)setManatee:(bool)arg1;
- (void)setRequestorOperationID:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSyncError:(id)arg1;
- (void)setSyncGroup:(id)arg1;
- (void)setSyncStatus:(id)arg1;
- (unsigned long long)state;
- (id)syncError;
- (id)syncGroup;
- (id)syncStatus;
- (void)waitOnSyncWithQueue:(id)arg1 waiterOperationID:(id)arg2 handler:(id /* block */)arg3;

@end
