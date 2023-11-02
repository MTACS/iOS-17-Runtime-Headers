
@protocol AFUISiriContentDelegate

@required

- (void)siriContentDidReceiveOrbHoldDidBeginAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveOrbHoldDidEndAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveOrbTappedAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveReportBugAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveReportBugLongPress:(id <AFUISiriContent>)arg1;
- (bool)siriView:(UIView<AFUISiriContent> *)arg1 attemptUnlockWithPassword:(NSString *)arg2;

@end
