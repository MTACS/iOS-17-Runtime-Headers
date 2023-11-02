
@protocol SBFMobileKeyBagObserver <NSObject>

@optional

- (void)keybag:(SBFMobileKeyBag *)arg1 extendedStateDidChange:(SBFMobileKeyBagState *)arg2;
- (void)keybagDidFinishProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybagDidUnlockForTheFirstTime:(SBFMobileKeyBag *)arg1;
- (void)keybagWillBeginProcessingStateChange:(SBFMobileKeyBag *)arg1;

@end
