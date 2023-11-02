
@protocol BLSCBDisplayStateDelegate <NSObject>

@required

- (void)osInterfaceProvider:(id <BLSHBacklightOSInterfaceProviding>)arg1 didCompleteSwitchToFlipbookState:(long long)arg2 withError:(NSError *)arg3;
- (void)osInterfaceProvider:(id <BLSHBacklightOSInterfaceProviding>)arg1 didCompleteTransitionToDisplayMode:(long long)arg2 withError:(NSError *)arg3;

@end
