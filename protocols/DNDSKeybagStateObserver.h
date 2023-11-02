
@protocol DNDSKeybagStateObserver <NSObject>

@optional

- (void)keybagDidChangeState:(id <DNDSKeybagStateProviding>)arg1;
- (void)keybagDidUnlockForTheFirstTime:(id <DNDSKeybagStateProviding>)arg1;

@end
