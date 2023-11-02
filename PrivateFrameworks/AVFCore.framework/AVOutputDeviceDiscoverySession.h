
@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal * _outputDeviceDiscoverySession;
}

@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) long long discoveryMode;
@property (nonatomic) bool onlyDiscoversBluetoothDevices;
@property (readonly) struct OpaqueFigRouteDiscoverer { }*routeDiscoverer;
@property (nonatomic, retain) AVAudioSession *targetAudioSession;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (id)availableOutputDeviceGroups;
- (id)availableOutputDevices;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (id)impl;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;
- (bool)onlyDiscoversBluetoothDevices;
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)arg1;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;
- (struct OpaqueFigRouteDiscoverer { }*)routeDiscoverer;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setDiscoveryMode:(long long)arg1 forClientIdentifiers:(id)arg2;
- (void)setOnlyDiscoversBluetoothDevices:(bool)arg1;
- (void)setTargetAudioSession:(id)arg1;
- (id)targetAudioSession;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (unsigned long long)_pu_routeAvailability;

@end
