
@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>

@required

- (AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
- (bool)devicePresenceDetected;
- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(AVOutputDeviceDiscoverySession *)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(AVOutputDeviceDiscoverySession *)arg1 forClientIdentifiers:(NSArray *)arg2;
- (AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
- (void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1;
- (void)setTargetAudioSession:(AVAudioSession *)arg1;
- (AVAudioSession *)targetAudioSession;

@end
