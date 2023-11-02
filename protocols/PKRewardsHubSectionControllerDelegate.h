
@protocol PKRewardsHubSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)navigateToRewardsHubDestination:(long long)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)reportEventIfNecessary:(NSDictionary *)arg1;
- (UICollectionView *)rewardsHubCollectionView;

@optional

- (void)openLinkedApplication:(PKLinkedApplication *)arg1;
- (void)openURL:(NSURL *)arg1 sensitive:(bool)arg2 preferInApp:(bool)arg3;
- (void)presentDisplayableError:(NSError *)arg1;
- (void)presentEducationViewController;
- (void)presentEnhancedMerchant:(PKAccountEnhancedMerchant *)arg1;

@end
