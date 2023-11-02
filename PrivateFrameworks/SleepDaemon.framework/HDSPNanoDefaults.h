
@interface HDSPNanoDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults> {
    HDSPSyncedDefaultsConfiguration * _configuration;
    <HDSPSyncedUserDefaultsExternalChangeDelegate> * _delegate;
    HDSPEnvironment * _environment;
    HKSPAccumulator * _notifyAccumulator;
    NPSDomainAccessor * _npsDomainAccessor;
    NSObject<OS_dispatch_queue> * _npsDomainAccessorQueue;
    NPSManager * _npsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSyncedUserDefaultsExternalChangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NPSDomainAccessor *npsDomainAccessor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActivePairedDeviceDidChange:(id)arg1;
- (void)_handleNanoPreferencesSync:(id)arg1;
- (id)_keysForChangeNotification:(id)arg1;
- (void)_registerForNotifications;
- (void)_resetNPSDomainAccessor;
- (id)delegate;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)arg1;
- (void)hdsp_setExternalChangeDelegate:(id)arg1;
- (bool)hksp_boolForKey:(id)arg1;
- (id)hksp_dataForKey:(id)arg1;
- (id)hksp_dictionaryRepresentation;
- (id)hksp_dictionaryRepresentationForKeys:(id)arg1;
- (float)hksp_floatForKey:(id)arg1;
- (long long)hksp_integerForKey:(id)arg1;
- (id)hksp_objectForKey:(id)arg1;
- (void)hksp_removeObjectForKey:(id)arg1;
- (void)hksp_removeObjectsForKeys:(id)arg1;
- (void)hksp_reset;
- (void)hksp_saveDictionary:(id)arg1;
- (void)hksp_setBool:(bool)arg1 forKey:(id)arg2;
- (void)hksp_setFloat:(float)arg1 forKey:(id)arg2;
- (void)hksp_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)hksp_setObject:(id)arg1 forKey:(id)arg2;
- (void)hksp_synchronize;
- (void)hksp_synchronizeKeys:(id)arg1;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)npsDomainAccessor;
- (void)setDelegate:(id)arg1;

@end
