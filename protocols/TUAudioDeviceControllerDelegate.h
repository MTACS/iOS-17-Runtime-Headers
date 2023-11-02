
@protocol TUAudioDeviceControllerDelegate <NSObject>

@optional

- (void)audioDeviceControllerDeviceListChanged:(TUAudioDeviceController *)arg1;
- (void)audioDeviceControllerMutedTalkerDidEnd:(TUAudioDeviceController *)arg1;
- (void)audioDeviceControllerMutedTalkerDidStart:(TUAudioDeviceController *)arg1;

@end
