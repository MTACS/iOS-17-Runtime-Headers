
@interface VCCKShortcutSyncCoordinator : NSObject {
    long long  _accountStatus;
    VCCKApplicationStateObserver * _applicationObserver;
    CKContainer * _container;
    <WFShortcutsSyncService> * _currentSyncService;
    <WFDatabaseProvider> * _databaseProvider;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    bool  _started;
    NSObject<OS_dispatch_queue> * _stateAccessQueue;
    bool  _syncEnabled;
    struct __CTServerConnection { } * _telephonyConnection;
    CKRecordID * _userRecordID;
}

@property (nonatomic, readonly) NSString *accountForSyncToken;
@property (nonatomic) long long accountStatus;
@property (nonatomic, readonly) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, retain) <WFShortcutsSyncService> *currentSyncService;
@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (getter=isStarted, nonatomic) bool started;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (getter=isSyncEnabled, nonatomic) bool syncEnabled;
@property (nonatomic, readonly) struct __CTServerConnection { }*telephonyConnection;
@property (nonatomic, retain) CKRecordID *userRecordID;
@property (getter=isUsingSync2, nonatomic, readonly) bool usingSync2;

- (void).cxx_destruct;
- (id)accountForSyncToken;
- (long long)accountStatus;
- (id)applicationObserver;
- (id)container;
- (id)currentSyncService;
- (id)databaseProvider;
- (void)dealloc;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)handleCloudKitSyncEnabledChange;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)handleWalrusStatusDidChange;
- (id)initWithDatabaseProvider:(id)arg1;
- (bool)isStarted;
- (bool)isSyncEnabled;
- (bool)isUsingSync2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pathMonitor;
- (void)setAccountStatus:(long long)arg1;
- (void)setCurrentSyncService:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setUserRecordID:(id)arg1;
- (void)setupPathMonitor;
- (void)start;
- (void)startObservingAccountChanges;
- (void)startObservingApplicationVisibility;
- (void)startObservingDataUsagePermission;
- (void)startObservingReachability;
- (void)startObservingUserDefaults;
- (id)stateAccessQueue;
- (void)stopObservingAccountChanges;
- (void)stopObservingApplicationVisibility;
- (void)stopObservingDataUsagePermission;
- (void)stopObservingReachability;
- (void)stopObservingUserDefaults;
- (struct __CTServerConnection { }*)telephonyConnection;
- (void)updateAccountStatusAndUserRecordID;
- (void)updateCurrentSyncServiceIfNeeded;
- (id)userRecordID;

@end
