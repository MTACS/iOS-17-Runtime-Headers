
@interface HMDSymptomManager : HMFObject <HMFLogging> {
    <HMDCompanionLinkClient> * _companionLinkClient;
    <HMDSharingDeviceDiscovery> * _deviceDiscovery;
    unsigned long long  _deviceDiscoveryFlags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _nearbySFDevices;
    NSMapTable * _networkReachableRPCompanionLinkDevices;
    NSNotificationCenter * _notificationCenter;
    bool  _supportsRegisteringAccessories;
    NSMapTable * _symptomContainerByRegisteredAccessory;
    HMFWiFiManager * _wifiManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <HMDCompanionLinkClient> *companionLinkClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDSharingDeviceDiscovery> *deviceDiscovery;
@property (nonatomic) unsigned long long deviceDiscoveryFlags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *nearbySFDevices;
@property (nonatomic, readonly) NSMapTable *networkReachableRPCompanionLinkDevices;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRegisteringAccessories;
@property (nonatomic, readonly) NSMapTable *symptomContainerByRegisteredAccessory;
@property (nonatomic, readonly) HMFWiFiManager *wifiManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_symptomsForProblemFlags:(unsigned long long)arg1;
+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)_registeredAccessoryWithIDSIdentifier:(id)arg1;
- (void)_rpDeviceChangedHandler:(id)arg1;
- (void)_rpDeviceFoundHandler:(id)arg1;
- (void)_rpDeviceLostHandler:(id)arg1;
- (void)_sfDeviceChangedHandler:(id)arg1;
- (void)_sfDeviceFoundHandler:(id)arg1;
- (void)_sfDeviceLostHandler:(id)arg1;
- (void)_start;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_stop;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (id)_symptomsForRegisteredAccessory:(id)arg1;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForRegisteredAccessory:(id)arg1;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)arg1;
- (id)companionLinkClient;
- (void)dealloc;
- (void)deregisterAccessory:(id)arg1;
- (id)deviceDiscovery;
- (unsigned long long)deviceDiscoveryFlags;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)arg1;
- (void)handleCurrentNetworkDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 deviceDiscovery:(id)arg2 companionLinkClient:(id)arg3 wifiManager:(id)arg4 notificationCenter:(id)arg5;
- (void)initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)nearbySFDevices;
- (id)networkReachableRPCompanionLinkDevices;
- (id)notificationCenter;
- (void)registerAccessory:(id)arg1 delegate:(id)arg2;
- (void)setDeviceDiscoveryFlags:(unsigned long long)arg1;
- (void)setSupportsRegisteringAccessories:(bool)arg1;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (bool)supportsRegisteringAccessories;
- (id)symptomContainerByRegisteredAccessory;
- (id)wifiManager;
- (id)workQueue;

@end
