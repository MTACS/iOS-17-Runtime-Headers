
@protocol SBBiometricUnlockBehaviorConfigurationDelegate <NSObject>

@required

- (void)biometricUnlockBehaviorConfigurationDidChange:(id <SBBiometricUnlockBehaviorConfiguration>)arg1;

@optional

- (void)fillRestToOpenWithDuration:(double)arg1;
- (bool)hasVisibleContentToReveal;
- (bool)isLockScreenShowingDefaultContent;
- (bool)isRestToOpenAvailable;
- (int)lockScreenWakeSource;
- (void)resetRestToOpen;
- (void)startRestToOpenCoachingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
