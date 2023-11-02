
@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    struct OpaqueFigRouteDiscoverer { } * _discoverer;
    AVOutputDeviceDiscoverySession * _parentSession;
    id /* block */  _routeDiscovererCreator;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (nonatomic, readonly) struct OpaqueFigRouteDiscoverer { }*routeDiscoverer;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVAudioSession *targetAudioSession;

- (void).cxx_destruct;
- (void)_availableGroupsChanged;
- (void)_availableRoutesChanged;
- (void)_endpointDescriptorChanged;
- (void)_routePresentChanged;
- (void)_serverDied;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (id)init;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)arg1;
- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(id)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 forClientIdentifiers:(id)arg2;
- (id)parentOutputDeviceDiscoverySession;
- (struct OpaqueFigRouteDiscoverer { }*)routeDiscoverer;
- (void)setParentOutputDeviceDiscoverySession:(id)arg1;
- (void)setTargetAudioSession:(id)arg1;
- (id)targetAudioSession;

@end
