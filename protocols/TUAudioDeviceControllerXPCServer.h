
@protocol TUAudioDeviceControllerXPCServer <NSObject>

@required

- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(NSString *)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(NSString *)arg1;

@end
