
@protocol RBPowerAssertionManagerDelegate <NSObject>

@required

- (void)powerAssertionManagerDidAllowIdleSleep:(id <RBPowerAssertionManaging>)arg1;
- (void)powerAssertionManagerDidPreventIdleSleep:(id <RBPowerAssertionManaging>)arg1;

@end
