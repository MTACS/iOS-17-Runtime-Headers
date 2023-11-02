
@protocol HFAccessorySettingMobileTimerAdapterObserver <NSObject>

@optional

- (void)mobileTimerAdapter:(HFAccessorySettingMobileTimerAdapter *)arg1 didUpdateAlarms:(NSArray *)arg2;
- (void)mobileTimerAdapterDidUpdateReadiness:(HFAccessorySettingMobileTimerAdapter *)arg1;

@end
