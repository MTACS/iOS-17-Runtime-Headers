
@protocol SVXSessionDelegate <NSObject>

@required

- (void)session:(SVXSession *)arg1 audioSessionDidBecomeActive:(bool)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)session:(SVXSession *)arg1 audioSessionWillBecomeActive:(bool)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)session:(SVXSession *)arg1 didActivateWithContext:(SVXActivationContext *)arg2;
- (void)session:(SVXSession *)arg1 didBecomeActiveWithActivationContext:(SVXActivationContext *)arg2 activityUUID:(NSUUID *)arg3 turnID:(NSUUID *)arg4;
- (void)session:(SVXSession *)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)session:(SVXSession *)arg1 didDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)session:(SVXSession *)arg1 didEndUpdateAudioPowerWithType:(long long)arg2;
- (void)session:(SVXSession *)arg1 didFailAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)session:(SVXSession *)arg1 didNotActivateWithContext:(SVXActivationContext *)arg2 error:(NSError *)arg3;
- (void)session:(SVXSession *)arg1 didResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg2 activityUUID:(NSUUID *)arg3;
- (void)session:(SVXSession *)arg1 didStartSoundWithID:(long long)arg2;
- (void)session:(SVXSession *)arg1 didStopSoundWithID:(long long)arg2 error:(NSError *)arg3;
- (void)session:(SVXSession *)arg1 willActivateWithContext:(SVXActivationContext *)arg2;
- (void)session:(SVXSession *)arg1 willBecomeActiveWithActivationContext:(SVXActivationContext *)arg2 activityUUID:(NSUUID *)arg3 turnID:(NSUUID *)arg4;
- (void)session:(SVXSession *)arg1 willBeginUpdateAudioPowerWithType:(long long)arg2 wrapper:(AFXPCWrapper *)arg3;
- (void)session:(SVXSession *)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)session:(SVXSession *)arg1 willDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)session:(SVXSession *)arg1 willProcessAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)session:(SVXSession *)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3 activityUUID:(NSUUID *)arg4;
- (void)session:(SVXSession *)arg1 willStartSoundWithID:(long long)arg2;
- (void)sessionDidInvalidate:(SVXSession *)arg1;

@end
