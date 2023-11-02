
@interface SBWiFiManager : NSObject {
    struct __CFRunLoop { } * _callbackRunLoop;
    struct __WiFiNetwork { } * _currentNetwork;
    bool  _currentNetworkHasBeenSet;
    bool  _currentNetworkIsIOSHotspot;
    bool  _currentNetworkIsIOSHotspotHasBeenSet;
    struct __WiFiDeviceClient { } * _device;
    NSString * _deviceInterfaceName;
    bool  _isPrimaryInterface;
    bool  _isPrimaryInterfaceChanging;
    NSRecursiveLock * _lock;
    bool  _mainThread_devicePresent;
    int  _mainThread_signalStrengthBars;
    bool  _mainThread_signalStrengthHasBeenSet;
    int  _mainThread_signalStrengthRSSI;
    struct __WiFiManagerClient { } * _manager;
    bool  _powered;
    bool  _poweredHasBeenSet;
    struct __WiFiNetwork { } * _previousNetwork;
    struct __WiFiNetwork { } * _primaryInterface;
    bool  _primaryInterfaceHasBeenSet;
    NSObject<OS_dispatch_source> * _primaryInterfaceUpdateTimeoutSource;
    NWSystemPathMonitor * _systemPathMonitor;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_cachedIsAssociated;
- (void)_linkDidChange;
- (struct __WiFiManagerClient { }*)_lock_manager;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)_lock_spawnManagerCallbackThread;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(bool)arg1;
- (void)_runManagerCallbackThread;
- (void)_updateCurrentNetwork;
- (void)_updateDevicePresence;
- (void)_updateSignalStrength;
- (void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (void)_updateWiFiDevice;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (id)currentNetworkName;
- (id)init;
- (bool)isAssociated;
- (bool)isAssociatedToIOSHotspot;
- (bool)isPowered;
- (bool)isPrimaryInterface;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setPowered:(bool)arg1;
- (void)setWiFiEnabled:(bool)arg1;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (bool)wiFiEnabled;
- (struct __CFRunLoop { }*)wifiRunLoopRef;

@end
