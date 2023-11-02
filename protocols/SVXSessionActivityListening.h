
@protocol SVXSessionActivityListening <NSObject>

@optional

- (void)audioSessionDidBecomeActive:(bool)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (void)audioSessionWillBecomeActive:(bool)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (void)sessionDidBecomeActiveWithActivationContext:(SVXActivationContext *)arg1 turnID:(NSUUID *)arg2;
- (void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionDidDeactivateWithContext:(SVXDeactivationContext *)arg1;
- (void)sessionDidFailAppLaunchWithBundleIdentifier:(NSString *)arg1;
- (void)sessionDidResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg1;
- (void)sessionDidStartSoundWithID:(long long)arg1;
- (void)sessionDidStopSoundWithID:(long long)arg1 error:(NSError *)arg2;
- (void)sessionWillBecomeActiveWithActivationContext:(SVXActivationContext *)arg1 turnID:(NSUUID *)arg2;
- (void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(NSString *)arg1;
- (void)sessionWillProcessAppLaunchWithBundleIdentifier:(NSString *)arg1;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)sessionWillStartSoundWithID:(long long)arg1;

@end
