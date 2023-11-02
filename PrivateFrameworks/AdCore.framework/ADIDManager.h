
@interface ADIDManager : ADSingleton <ADIDManager_XPC, BackgroundTaskDelegate> {
    DSIDRecord * _activeDSIDRecord;
    NSArray * _monthlyResetArray;
}

@property (nonatomic, readonly) long long PersonalizedAdsMonthResetCount;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *monthlyResetArray;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)PersonalizedAdsMonthResetCount;
- (id)activeDSIDRecord;
- (id)deviceIdentifiers;
- (id)dsidRecord:(id)arg1 fromDict:(id)arg2;
- (id)encryptedIDForClientType:(long long)arg1;
- (void)forceReconcile:(id /* block */)arg1;
- (id)idForClientType:(long long)arg1;
- (id)init;
- (id)loadFakeRecord:(id)arg1;
- (bool)loadIDs;
- (void)logIDs:(id)arg1;
- (id)monthlyResetArray;
- (id)reloadRecords:(id)arg1;
- (void)reloadRecords:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)retrieveDeviceIDs;
- (void)setActiveDSIDRecord:(id)arg1;
- (void)setMonthlyResetArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AdID.framework/AdID

+ (void)initialize;

- (void)cancelPendingReconcile;
- (void)checkForLateReconcile;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (void)deleteRecords:(id /* block */)arg1;
- (void)finishedReconciling:(id /* block */)arg1 withError:(id)arg2;
- (void)handleAccountChange:(id /* block */)arg1;
- (void)incrementMonthlyResetCount;
- (id)init;
- (void)notifyActiveRecordChanged;
- (void)performOperationAfterReconcile:(id /* block */)arg1;
- (void)performOperationWhenNotReconciling:(id /* block */)arg1;
- (void)prepareForPushNotification;
- (void)reconcile:(id /* block */)arg1;
- (bool)reconcileInProgress;
- (id)reconcileOperations;
- (bool)runTask:(id)arg1;
- (id)save;
- (id)saveAndNotifyIfNecessary;
- (void)saveDataForPCD;
- (bool)scheduleDailyUpdate;
- (bool)scheduleReconciliation:(double)arg1;
- (void)setDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setReconcileOperations:(id)arg1;
- (void)updateAccountData:(id /* block */)arg1;

@end
