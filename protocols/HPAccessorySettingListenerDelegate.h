
@protocol HPAccessorySettingListenerDelegate <NSObject>

@required

- (void)didUpdateHH2State:(bool)arg1;
- (void)notifyDidUpdateSetting:(HPSSetting *)arg1 forKeyPath:(NSString *)arg2;

@end
