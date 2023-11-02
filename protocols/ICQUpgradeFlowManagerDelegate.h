
@protocol ICQUpgradeFlowManagerDelegate <NSObject>

@optional

- (void)manager:(ICQUpgradeFlowManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)upgradeFlowManager:(ICQUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidCancel:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidComplete:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidFail:(ICQUpgradeFlowManager *)arg1 error:(NSError *)arg2;

@end
