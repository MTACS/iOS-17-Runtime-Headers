
@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate> {
    ACMonitoredAccountStore * _accountStore;
    <RCCloudSyncAccessManagerDelegate> * _delegate;
    RCManagedConfigurationHelper * _managedConfigurationHelper;
    bool  _monitoringAccountChanges;
    int  _tccNotifyToken;
}

@property (readonly) ACMonitoredAccountStore *accountStore;
@property (nonatomic, readonly) bool cloudSyncIsAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCCloudSyncAccessManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int tccCloudAccess;

- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)_startMonitoringAccountChanges;
- (id)accountStore;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (bool)cloudSyncIsAvailable;
- (void)dealloc;
- (id)delegate;
- (void)managedConfigurationUpdated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTccCloudAccess:(int)arg1;
- (void)startMonitoringAccountChanges;
- (int)tccCloudAccess;

@end
