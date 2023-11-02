
@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    AVOutputDeviceDiscoverySession * _avDiscoverySession;
    NSArray * _availableOutputDevices;
    unsigned int  _clientProvidedTargetAudioSessionID;
    unsigned int  _discoveryMode;
    unsigned int  _endpointFeatures;
    NSSet * _lastReportedClientIdentifiers;
    NSObject<OS_dispatch_queue> * _reloadQueue;
    NSString * _routingContextUID;
    bool  _scheduledAvailableOutputDevicesReload;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _targetAudioSessionID;
    NSArray * _virtualOutputDevices;
}

@property (nonatomic, retain) NSArray *availableEndpoints;
@property (nonatomic, retain) NSArray *availableOutputDevices;
@property (nonatomic, retain) NSSet *lastReportedClientIdentifiers;
@property (nonatomic, readonly) NSArray *virtualOutputDevices;

- (void).cxx_destruct;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)_deviceInfoDidChange:(id)arg1;
- (void)_onQueue_reload;
- (id)_onQueue_reloadAvailableOutputDevices;
- (void)_onQueue_setTargetAudioSessionID:(unsigned int)arg1;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)_scheduleReload;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (id)debugDescription;
- (id)description;
- (bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (id)initWithConfiguration:(id)arg1;
- (id)lastReportedClientIdentifiers;
- (bool)onlyDiscoversBluetoothDevices;
- (id)routingContextUID;
- (void)setAvailableOutputDevices:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1 forClientIdentifiers:(id)arg2;
- (void)setLastReportedClientIdentifiers:(id)arg1;
- (void)setOnlyDiscoversBluetoothDevices:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;
- (id)virtualOutputDevices;

@end
