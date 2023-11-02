
@interface VSManagedProfileConnection : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableSet * _observers;
    MCProfileConnection * _profileConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, retain) MCProfileConnection *profileConnection;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (long long)TVProviderModificationAllowed;
- (long long)UIAppInstallationAllowed;
- (long long)accountModificationAllowed;
- (long long)analyticsAllowed;
- (long long)appInstallationAllowed;
- (long long)boolForManagedConfigurationBool:(int)arg1;
- (id)init;
- (long long)maximumAppsRating;
- (id)notificationQueue;
- (id)observers;
- (id)profileConnection;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)providerUniqueID;
- (void)refreshProfileWithCompletion:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfileConnection:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)userToken;

@end
