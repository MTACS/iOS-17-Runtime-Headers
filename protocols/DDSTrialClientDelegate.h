
@protocol DDSTrialClientDelegate <NSObject>

@required

- (void)trialClient:(id <DDSTrialClient>)arg1 didReceiveAsset:(DDSTrialAsset *)arg2;
- (void)trialClientDidStop:(id <DDSTrialClient>)arg1;

@end
