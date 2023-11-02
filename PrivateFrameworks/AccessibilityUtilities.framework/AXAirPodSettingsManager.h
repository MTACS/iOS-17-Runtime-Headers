
@interface AXAirPodSettingsManager : NSObject {
    struct BTAccessoryManagerImpl { } * _accessoryManager;
    AXDispatchTimer * _delayTimer;
    NSPointerArray * _deviceListeners;
    NSMutableSet * _deviceMap;
    bool  _ignoreSettingNotifications;
    struct BTLocalDeviceImpl { } * _localDevice;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readyBlock;
    struct BTSessionImpl { } * _session;
}

@property (nonatomic) bool ignoreSettingNotifications;
@property (nonatomic, readonly) bool isConnectedToBluetoothSystem;
@property (nonatomic, readonly) NSArray *pairedAirPods;
@property (nonatomic, copy) id /* block */ readyBlock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { }*)arg1 event:(int)arg2 device:(struct BTDeviceImpl { }*)arg3 state:(int)arg4;
- (void)_applySettings;
- (void)_applySettingsForAddress:(id)arg1;
- (void)_beginDetach;
- (id)_deviceWithDeviceAddress:(id)arg1;
- (void)_didConnectWithSession:(struct BTSessionImpl { }*)arg1;
- (void)_didDisconnect;
- (id)_nps_airPodsDictionaryForPreference:(id)arg1;
- (void)_nps_updateAirPodsDictionaryForPreference:(id)arg1 deviceAddress:(id)arg2 value:(id)arg3;
- (void)_probeAccessories;
- (id)_productIdentifierForBTDevice:(id)arg1;
- (void)_retrieveSettingsForAddress:(id)arg1;
- (void)_retrieveSettingsFromDevices:(id)arg1;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { }*)arg1 serviceMask:(unsigned int)arg2 eventType:(int)arg3 specificEvent:(unsigned int)arg4 result:(int)arg5;
- (void)_sessionEventForSession:(struct BTSessionImpl { }*)arg1 event:(int)arg2 result:(int)arg3;
- (id)accessibilityDomainAccessor;
- (void)dealloc;
- (unsigned int)defaultToneVolumeForDeviceAddress:(id)arg1;
- (id)disambiguationString;
- (float)holdDurationForDeviceAddress:(id)arg1;
- (bool)ignoreSettingNotifications;
- (id)initSharedInstance;
- (bool)isAirPodProduct:(id)arg1;
- (bool)isBeatsProduct:(id)arg1;
- (bool)isConnectedToBluetoothSystem;
- (bool)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg1;
- (unsigned int)nps_defaultToneVolumeForDeviceAddress:(id)arg1;
- (float)nps_holdDurationForDeviceAddress:(id)arg1;
- (bool)nps_noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg1;
- (void)nps_setHoldDuration:(float)arg1 forDeviceAddress:(id)arg2;
- (void)nps_setNoiseCancellationEnabledWithOneUnit:(bool)arg1 forDeviceAddress:(id)arg2;
- (void)nps_setTapSpeed:(float)arg1 forDeviceAddress:(id)arg2;
- (void)nps_setToneVolume:(float)arg1 forDeviceAddress:(id)arg2;
- (void)nps_setVolumeSwipeDuration:(float)arg1 forDeviceAddress:(id)arg2;
- (void)nps_setVolumeSwipeEnabled:(bool)arg1 forDeviceAddress:(id)arg2;
- (float)nps_tapSpeedForDeviceAddress:(id)arg1;
- (float)nps_toneVolumeForDeviceAddress:(id)arg1;
- (float)nps_volumeSwipeDurationForDeviceAddress:(id)arg1;
- (bool)nps_volumeSwipeEnabledForDeviceAddress:(id)arg1;
- (id)pairedAirPods;
- (id /* block */)readyBlock;
- (void)setHoldDuration:(float)arg1 forDeviceAddress:(id)arg2;
- (void)setIgnoreSettingNotifications:(bool)arg1;
- (void)setNoiseCancellationEnabledWithOneUnit:(bool)arg1 forDeviceAddress:(id)arg2;
- (void)setReadyBlock:(id /* block */)arg1;
- (void)setTapSpeed:(float)arg1 forDeviceAddress:(id)arg2;
- (void)setToneVolume:(unsigned int)arg1 forDeviceAddress:(id)arg2;
- (void)setVolumeSwipeDuration:(float)arg1 forDeviceAddress:(id)arg2;
- (void)setVolumeSwipeEnabled:(bool)arg1 forDeviceAddress:(id)arg2;
- (void)start;
- (void)startWithCallback:(id /* block */)arg1;
- (bool)supportsHoldDurationForDeviceAddress:(id)arg1;
- (bool)supportsNoiseCancellationEnabledForDeviceAddress:(id)arg1;
- (bool)supportsSpatialAudioForDeviceAddress:(id)arg1;
- (bool)supportsTapSpeedForDeviceAddress:(id)arg1;
- (bool)supportsToneVolumeForDeviceAddress:(id)arg1;
- (bool)supportsVolumeSwipeForDeviceAddress:(id)arg1;
- (float)tapSpeedForDeviceAddress:(id)arg1;
- (id)titleForSettings;
- (unsigned int)toneVolumeForDeviceAddress:(id)arg1;
- (float)volumeSwipeDurationForDeviceAddress:(id)arg1;
- (bool)volumeSwipeEnabledForDeviceAddress:(id)arg1;

@end
