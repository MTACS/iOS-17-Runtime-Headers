
@interface _GCNintendoFusedJoyConDevice : NSObject <GCBatteryXPCProxyServerEndpointDelegate, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, _GCDeviceBatteryComponent, _GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceSettingsComponent, _GCDriverClientHapticInterfaceProvider, _GCLogicalDevice> {
    GCDeviceBattery * _battery;
    NSMapTable * _clientBatteryEndpoints;
    NSMapTable * _clientPlayerIndicatorEndpoints;
    NSMapTable * _clientSettingsEndpoints;
    NSMapTable * _clients;
    _GCDeviceConfiguration * _configuration;
    GCHapticCapabilityGraph * _hapticCapabilityGraph;
    <_GCDriverClientHapticInterface> * _hapticDriver;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    long long  _indicatedPlayerIndex;
    _GCNintendoJoyConDevice * _leftDevice;
    <_GCDeviceManager> * _manager;
    _GCNintendoJoyConDevice * _rightDevice;
    <GCSSettingsStoreService> * _settingsStore;
}

@property (nonatomic, readonly) GCDeviceBattery *battery;
@property (readonly) NSSet *components;
@property (nonatomic, retain) _GCDeviceConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceBatteryComponentBatteryUpdatedHandler;
@property (nonatomic, copy) id /* block */ deviceBatteryServiceConnectedHandler;
@property (readonly) <_GCGamepadEventSourceDescription> *gamepadEventSource;
@property (nonatomic, readonly) <_GCDriverClientHapticInterface> *hapticDriver;
@property (readonly) unsigned long long hash;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property long long indicatedPlayerIndex;
@property (nonatomic, readonly) _GCNintendoJoyConDevice *leftDevice;
@property (readonly) <_GCDeviceManager> *manager;
@property (nonatomic, readonly) _GCNintendoJoyConDevice *rightDevice;
@property (readonly) Class superclass;
@property (readonly) NSSet *underlyingDevices;

+ (id)identifierForFusedJoyConDeviceWithLeftDevice:(id)arg1 rightDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_addClient:(id)arg1;
- (void)_propagateBattery;
- (void)_refreshBattery;
- (void)_removeClient:(id)arg1;
- (void)activateLogical;
- (id)battery;
- (id)components;
- (id)configuration;
- (void)deactivate;
- (void)dealloc;
- (id /* block */)deviceBatteryComponentBatteryUpdatedHandler;
- (id /* block */)deviceBatteryServiceConnectedHandler;
- (id)gamepadEventSource;
- (id)hapticDriver;
- (id)identifier;
- (long long)indicatedPlayerIndex;
- (id)init;
- (id)initWithLeft:(id)arg1 right:(id)arg2 manager:(id)arg3;
- (id)leftDevice;
- (id)makeControllerForClient:(id)arg1;
- (id)manager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)persistentIdentifierForSettings;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)arg1 didReceivePlayerIndexChange:(long long)arg2;
- (id)propertyForKey:(id)arg1;
- (id)rightDevice;
- (void)setConfiguration:(id)arg1;
- (void)setDeviceBatteryComponentBatteryUpdatedHandler:(id /* block */)arg1;
- (void)setDeviceBatteryServiceConnectedHandler:(id /* block */)arg1;
- (void)setIndicatedPlayerIndex:(long long)arg1;
- (void)settingsDidChange;
- (id)underlyingDevices;

@end
