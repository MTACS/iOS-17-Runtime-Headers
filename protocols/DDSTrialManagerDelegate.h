
@protocol DDSTrialManagerDelegate <NSObject>

@required

- (void)trialDidReceiveAsset:(DDSTrialAsset *)arg1 forQuery:(DDSTrialQuery *)arg2;
- (void)trialDidStopForQuery:(DDSTrialQuery *)arg1;

@end
