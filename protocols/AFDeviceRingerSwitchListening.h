
@protocol AFDeviceRingerSwitchListening <NSObject>

@required

- (void)deviceRingerObserver:(AFDeviceRingerSwitchObserver *)arg1 didChangeState:(long long)arg2;

@end
