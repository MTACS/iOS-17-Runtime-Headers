
@protocol DDSAssetCenterDelegate <NSObject>

@required

- (void)didUpdateAssetsWithType:(NSString *)arg1;

@optional

- (void)trialDidReceiveAsset:(DDSTrialAsset *)arg1 forQuery:(DDSTrialQuery *)arg2;
- (void)trialDidStopForQuery:(DDSTrialQuery *)arg1;

@end
