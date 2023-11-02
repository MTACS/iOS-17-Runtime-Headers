
@interface VSDevice : NSObject <VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate> {
    int (* _copyAnswer;
    VSRemoteNotifier * _developerSettingsRemoteNotifier;
    id /* block */  _newDeveloperSettingsFetchOperationBlock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableSet * _observers;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    NSString * _productVersionString;
    VSManagedProfileConnection * _profileConnection;
    NSString * _serialNumberString;
    VSRemoteNotifier * _setTopBoxStateRemoteNotifier;
}

@property (nonatomic) int (*copyAnswer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSRemoteNotifier *developerSettingsRemoteNotifier;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ newDeveloperSettingsFetchOperationBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSString *productVersionString;
@property (nonatomic, retain) VSManagedProfileConnection *profileConnection;
@property (getter=isRunningACustomerBuild, nonatomic, readonly) bool runningACustomerBuild;
@property (getter=isRunningAnInternalBuild, nonatomic, readonly) bool runningAnInternalBuild;
@property (nonatomic, retain) NSString *serialNumberString;
@property (nonatomic, retain) VSRemoteNotifier *setTopBoxStateRemoteNotifier;
@property (readonly) Class superclass;

+ (unsigned long long)_deviceTypeWithCopyAnswer:(int (*)arg1;
+ (bool)_getMobileGestaltBoolean:(struct __CFString { }*)arg1 withCopyAnswer:(int (*)arg2;
+ (bool)_runningACustomerBuildWithCopyAnswer:(int (*)arg1;
+ (bool)_runningAnInternalBuildWithCopyAnswer:(int (*)arg1;
+ (id)_stringForKey:(struct __CFString { }*)arg1 copyAnswer:(int (*)arg2;
+ (id)currentDevice;

- (void).cxx_destruct;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;
- (void)cloudConfigurationDidChange;
- (int (*)copyAnswer;
- (void)dealloc;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (id)developerSettingsRemoteNotifier;
- (unsigned long long)deviceType;
- (void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id /* block */)arg1;
- (void)fetchSetTopBoxProfileWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isRunningACustomerBuild;
- (bool)isRunningAnInternalBuild;
- (id)name;
- (id /* block */)newDeveloperSettingsFetchOperationBlock;
- (id)notificationQueue;
- (id)observers;
- (id)preferences;
- (id)privateQueue;
- (id)productVersion;
- (id)productVersionString;
- (id)profileConnection;
- (void)profileConnectionProfileChanged:(id)arg1;
- (void)refreshSetTopBoxProfile:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)serialNumber;
- (id)serialNumberString;
- (void)setCopyAnswer:(int (*)arg1;
- (void)setDeveloperSettingsRemoteNotifier:(id)arg1;
- (bool)setIgnoreSetTopBoxProfile:(bool)arg1;
- (void)setNewDeveloperSettingsFetchOperationBlock:(id /* block */)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setProductVersionString:(id)arg1;
- (void)setProfileConnection:(id)arg1;
- (void)setSerialNumberString:(id)arg1;
- (void)setSetTopBoxStateRemoteNotifier:(id)arg1;
- (id)setTopBoxStateRemoteNotifier;
- (id)stringForAMSDeviceFamilies;
- (id)stringForAMSPlatform;
- (id)stringForAMSPlatformAttributes;
- (void)unregisterObserver:(id)arg1;

@end
