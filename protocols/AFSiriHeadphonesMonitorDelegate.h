
@protocol AFSiriHeadphonesMonitorDelegate <NSObject>

@optional

- (void)authenticationCapabilityDidChange:(bool)arg1 forBTAddress:(NSString *)arg2;
- (void)currentAudioRouteDidChange:(AFSiriAudioRoute *)arg1;
- (void)inEarDetectionStateDidChangeForBTAddress:(NSString *)arg1 fromState:(AFBluetoothHeadphoneInEarDetectionState *)arg2 toState:(AFBluetoothHeadphoneInEarDetectionState *)arg3;
- (void)inEarDetectionStateDidChangeForBTAddress:(NSString *)arg1 toState:(AFBluetoothHeadphoneInEarDetectionState *)arg2;
- (void)privateAudioSessionStateDidChange:(unsigned long long)arg1;

@end
