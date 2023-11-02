
@interface NMCUICloudNotificationAccountDataSource : NSObject {
    <NMCUIAccountDataSource> * _accountDataSource;
    NSNumber * _deviceSupportsPCC;
    NPSDomainAccessor * _domainAccessor;
    NSArray * _notificationSubsections;
    NSMutableSet * _pendingAccountIds;
    bool  _showsAlerts;
    NPSManager * _syncManager;
}

@property (nonatomic, retain) <NMCUIAccountDataSource> *accountDataSource;
@property (nonatomic) bool cloudNotificationsEnabled;
@property (nonatomic, retain) NSNumber *deviceSupportsPCC;
@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (retain) NSArray *notificationSubsections;
@property (nonatomic, retain) NSMutableSet *pendingAccountIds;
@property (nonatomic) bool showsAlerts;
@property (nonatomic, retain) NPSManager *syncManager;

+ (bool)accountHasCredentials:(id)arg1;
+ (bool)accountSupportsNotifications:(id)arg1;
+ (bool)accountSupportsNotifications:(id)arg1 forceEnabled:(bool)arg2;

- (void).cxx_destruct;
- (void)_displayFailedToSaveAlertShouldDismiss:(bool)arg1 viewController:(id)arg2;
- (id)_emailAddressFromJWTToken:(id)arg1 error:(id*)arg2;
- (id)_ensureValidBase64String:(id)arg1;
- (id)_getValueForKey:(id)arg1;
- (void)_handleDidUnpair;
- (void)_handlePairedDeviceChanged;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)accountDataSource;
- (bool)accountIsPending:(id)arg1;
- (bool)accountShowsAlerts:(id)arg1;
- (id)accounts;
- (id)accountsRequiringCredentials;
- (void)addObserver:(id)arg1;
- (bool)cloudNotificationsEnabled;
- (void)dealloc;
- (bool)deviceSupportsCloudNotifications;
- (id)deviceSupportsPCC;
- (id)domainAccessor;
- (void)handleAccountAuthenication:(id)arg1 viewController:(id)arg2 stateUpdateHandler:(id /* block */)arg3;
- (id)initWithAccountDataSource:(id)arg1;
- (id)notificationSubsections;
- (id)pendingAccountIds;
- (void)removeObserver:(id)arg1;
- (void)saveCredential:(id)arg1 emailAddress:(id)arg2 forAccount:(id)arg3 completion:(id /* block */)arg4;
- (void)savePCCCredentialForAccount:(id)arg1 identity:(id)arg2 viewController:(id)arg3 stateUpdateHandler:(id /* block */)arg4;
- (void)setAccountDataSource:(id)arg1;
- (void)setCloudNotificationsEnabled:(bool)arg1;
- (void)setDeviceSupportsPCC:(id)arg1;
- (void)setDomainAccessor:(id)arg1;
- (void)setNotificationSubsections:(id)arg1;
- (void)setPendingAccountIds:(id)arg1;
- (void)setShowsAlerts:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (bool)shouldPromptToEnableNotifications:(id)arg1;
- (bool)showsAlerts;
- (id)syncManager;

@end
