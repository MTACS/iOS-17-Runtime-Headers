
@interface HDGymKitSettings : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, NRDevicePropertyObserver> {
    NRDevice * _currentDevice;
    <HDGymKitSettingsDelegate> * _delegate;
    bool  _hasRunProtectedDataCheck;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _nfcPermission;
    int  _privacyNotificationToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDGymKitSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fitnessTrackingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long nfcPermission;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (bool)fitnessTrackingEnabled;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (bool)isLowPowerModeEnabled;
- (unsigned long long)nfcPermission;
- (void)profileDidBecomeReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)unitTest_simulateNRDeviceUpdate;

@end
