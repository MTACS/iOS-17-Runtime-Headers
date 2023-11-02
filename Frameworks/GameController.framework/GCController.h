
@interface GCController : NSObject <GCDevice, GCDeviceLegacy, NSSecureCoding, _GCIPCObject> {
    bool  _allHIDDevicesConnected;
    <GCDeviceBatteryComponent> * _battery;
    NSArray * _components;
    id /* block */  _controllerPausedHandler;
    NSString * _debugName;
    NSString * _description;
    unsigned long long  _deviceHash;
    bool  _forwarded;
    <GCDeviceGameIntentComponent> * _gameIntent;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    <GCDeviceHapticCapabilityInfo> * _hapticCapabilityInfo;
    NSMutableArray * _hidServices;
    <NSCopying><NSObject><NSSecureCoding> * _identifier;
    <GCControllerProductInfo> * _info;
    _GCControllerInputComponent * _input;
    bool  _isProxyController;
    _GCControllerInputComponent * _legacy_input;
    <GCDeviceLightComponent> * _light;
    GCMotion * _motion;
    <GCControllerMotionConfigurableSensors> * _motionConfigurableSensors;
    NSString * _physicalDeviceUniqueID;
    bool  _physicalDeviceUsesCompass;
    GCPhysicalInputProfile * _physicalInput;
    long long  _playerIndex;
    <GCControllerPlayerIndicator> * _playerIndicator;
    <GCNamedProfile> * _profile;
    bool  _published;
    unsigned int  _service;
    <GCControllerSettingsComponent> * _settings;
    bool  _snapshot;
    <GCSystemGestureComponent> * _systemGesture;
    NSString * _uniqueIdentifier;
    NSString * _vendorName;
}

@property (nonatomic, copy) id /* block */ __deprecated_controllerPausedHandler;
@property (getter=areAllHIDDevicesConnected, nonatomic) bool allHIDDevicesConnected;
@property (getter=isAttachedToDevice, nonatomic, readonly) bool attachedToDevice;
@property (nonatomic, readonly, copy) GCDeviceBattery *battery;
@property (getter=isComponentBased, nonatomic, readonly) bool componentBased;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic, copy) id /* block */ controllerPausedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceHash;
@property (nonatomic, readonly) GCExtendedGamepad *extendedGamepad;
@property (getter=isForwarded, nonatomic) bool forwarded;
@property (nonatomic, readonly) GCGamepad *gamepad;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, readonly, retain) GCDeviceHaptics *haptics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hidServices;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) <NSCopying><NSObject><NSSecureCoding> *identifier;
@property (nonatomic, readonly) GCControllerLiveInput *input;
@property (nonatomic, readonly, retain) GCDeviceLight *light;
@property (nonatomic, readonly) GCMicroGamepad *microGamepad;
@property (nonatomic, readonly) GCMotion *motion;
@property (nonatomic, readonly) <GCControllerMotionConfigurableSensors> *motionConfigurableSensors;
@property (nonatomic, retain) NSString *physicalDeviceUniqueID;
@property (nonatomic) bool physicalDeviceUsesCompass;
@property (nonatomic, readonly) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic) long long playerIndex;
@property (nonatomic, readonly) NSString *productCategory;
@property (nonatomic, retain) GCPhysicalInputProfile<GCNamedProfile> *profile;
@property (getter=isPublished, nonatomic) bool published;
@property (nonatomic, readonly) unsigned int service;
@property (nonatomic, readonly) GCSProfile *settingsProfile;
@property (getter=isSnapshot, readonly) bool snapshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GCSystemGestureComponent> *systemGestureComponent;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (void)__daemon__appDidEnterBackground;
+ (void)__daemon__appWillEnterForeground;
+ (void)__openXPC__;
+ (void)__openXPC_and_CBApplicationDidBecomeActive__;
+ (void)__open__;
+ (bool)_settingsSupportedForBLEDevice:(id)arg1 settingsStore:(id)arg2;
+ (bool)_settingsSupportedForBTClassicDevice:(id)arg1 settingsStore:(id)arg2;
+ (void)_startWirelessControllerDiscoveryWithBTClassic:(bool)arg1 btle:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(bool)arg1 btClassic:(bool)arg2 btle:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)controllerWithExtendedGamepad;
+ (id)controllerWithMicroGamepad;
+ (id)controllers;
+ (id)current;
+ (void)setShouldMonitorBackgroundEvents:(bool)arg1;
+ (bool)settingsSupportedForCBDevice:(id)arg1;
+ (bool)shouldMonitorBackgroundEvents;
+ (id)snapshotWithProfile:(id)arg1;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(id /* block */)arg1;
+ (void)stopWirelessControllerDiscovery;
+ (bool)supportsSecureCoding;
+ (bool)userHasPairedGameController;

- (void).cxx_destruct;
- (id /* block */)__deprecated_controllerPausedHandler;
- (void)_addComponent:(id)arg1;
- (void)_becomeCurrent;
- (id)_componentOfClass:(Class)arg1;
- (id)_componentWithProtocol:(id)arg1;
- (id)_legacy_batteryStatus;
- (id)_legacy_description;
- (id)_legacy_extendedGamepad;
- (id)_legacy_gamepad;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_legacy_input;
- (void)_legacy_invalidateDescription;
- (bool)_legacy_isAttachedToDevice;
- (bool)_legacy_isEqualToController:(id)arg1;
- (id)_legacy_keyboard;
- (id)_legacy_microGamepad;
- (id)_legacy_motion;
- (id)_legacy_mouse;
- (id)_legacy_physicalInputProfile;
- (id)_legacy_physicalInputProfileName;
- (long long)_legacy_playerIndex;
- (id)_legacy_productCategory;
- (void)_legacy_setPlayerIndex:(long long)arg1;
- (id)_legacy_vendorName;
- (void)_setSnapshot:(bool)arg1;
- (void)_triggerGameIntentLongPress;
- (void)_triggerGameIntentShortPress;
- (void)addServiceRef:(id)arg1;
- (void)addServiceRefs:(id)arg1;
- (void)addServiceRefsWithDevice:(id)arg1;
- (id)anonymizedIdentifier;
- (bool)areAllHIDDevicesConnected;
- (id)battery;
- (id)capture;
- (void)clearServiceRef;
- (id)components;
- (id /* block */)controllerPausedHandler;
- (id)controllerSettings;
- (void*)createInputBufferForDevice:(struct __IOHIDDevice { }*)arg1 withSize:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugName;
- (id)description;
- (id)detailedProductCategory;
- (unsigned long long)deviceHash;
- (bool)displayTrueSiriRemoteName;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedGamepad;
- (id)gamepad;
- (id)handlerQueue;
- (id)hapticEngines;
- (id)haptics;
- (bool)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)hidServices;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfileClass:(Class)arg1 serviceRef:(struct __IOHIDServiceClient { }*)arg2;
- (id)initWithProfileClass:(Class)arg1 services:(id)arg2;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)initializeHapticEngines;
- (id)input;
- (bool)isATVRemote;
- (bool)isAttachedToDevice;
- (bool)isComponentBased;
- (bool)isEqualToController:(id)arg1;
- (bool)isForwarded;
- (bool)isProxyController;
- (bool)isPublished;
- (bool)isSnapshot;
- (id)light;
- (id)microGamepad;
- (id)motion;
- (id)motionConfigurableSensors;
- (id)persistentIdentifier;
- (id)physicalDeviceUniqueID;
- (bool)physicalDeviceUsesCompass;
- (id)physicalInputProfile;
- (id)physicalInputProfileName;
- (long long)playerIndex;
- (id)productCategory;
- (id)profile;
- (void)removeComponent:(id)arg1;
- (void)removeHapticEngines;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned int)sampleRate;
- (unsigned int)service;
- (void)setAllHIDDevicesConnected:(bool)arg1;
- (void)setComponents:(id)arg1;
- (void)setControllerPausedHandler:(id /* block */)arg1;
- (void)setDebugName:(id)arg1;
- (void)setDeviceHash:(unsigned long long)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setHidServices:(id)arg1;
- (void)setIsProxyController:(bool)arg1;
- (void)setPhysicalDeviceUniqueID:(id)arg1;
- (void)setPhysicalDeviceUsesCompass:(bool)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setPublished:(bool)arg1;
- (void)setService:(unsigned int)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVendorName:(id)arg1;
- (void)set__deprecated_controllerPausedHandler:(id /* block */)arg1;
- (id)settingsProfile;
- (id)systemGestureComponent;
- (id)uniqueIdentifier;
- (id)vendorName;

@end