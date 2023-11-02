
@interface HUAccessoryHearingSyncManager : NSObject {
    NSMutableDictionary * _cachedEnabled;
    NSMutableDictionary * _deviceListeningState;
    NSMutableDictionary * _deviceType;
    NSMutableDictionary * _nearbyDevicesListeningState;
}

@property (nonatomic, retain) NSMutableDictionary *cachedEnabled;
@property (nonatomic, retain) NSMutableDictionary *deviceListeningState;
@property (nonatomic, retain) NSMutableDictionary *deviceType;
@property (nonatomic, retain) NSMutableDictionary *nearbyDevicesListeningState;

+ (id)adaptiveTransparencySupportedDevices;
+ (id)sharedInstance;
+ (id)syncableSupportedDevices;

- (void).cxx_destruct;
- (void)_initCachedEnabled;
- (void)_registerForAccessoryHearingSettingsUpdate;
- (void)_registerForAccessoryManagerUpdate;
- (void)_registerForNearbyControllerUpdate;
- (id)cachedEnabled;
- (id)deviceListeningState;
- (struct { long long x1; long long x2; })deviceState;
- (id)deviceType;
- (long long)deviceTypeForAddress:(id)arg1;
- (id)deviceTypeForProductCode:(id)arg1;
- (id)deviceTypes;
- (id)init;
- (void)listeningModeDidChange:(id)arg1;
- (long long)listeningStateForAddress:(id)arg1 andStoredState:(id)arg2;
- (id)nearbyDevicesListeningState;
- (void)sendUpdateToAccessory;
- (void)setCachedEnabled:(id)arg1;
- (void)setDeviceListeningState:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setNearbyDevicesListeningState:(id)arg1;

@end
