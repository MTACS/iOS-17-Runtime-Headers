
@protocol SBHLibraryProvider <SBHLegibility, SBIconLocationPresenting, SBIconViewQuerying>

@required

- (SBFolderController *)folderController;
- (<SBHomeScreenIconTransitionAnimatorDelegate> *)homeScreenIconTransitionAnimatorDelegate;
- (SBHIconImageCache *)iconImageCache;
- (SBHIconModel *)iconModel;
- (<SBIconViewProviding> *)iconViewProvider;
- (<SBIconListLayoutProvider> *)listLayoutProvider;
- (UIView *)searchDimmingView;
- (void)setHomeScreenIconTransitionAnimatorDelegate:(id <SBHomeScreenIconTransitionAnimatorDelegate>)arg1;
- (void)setIconImageCache:(SBHIconImageCache *)arg1;
- (void)setIconModel:(SBHIconModel *)arg1;
- (void)setIconViewProvider:(id <SBIconViewProviding>)arg1;
- (void)setListLayoutProvider:(id <SBIconListLayoutProvider>)arg1;
- (void)setSearchDimmingView:(UIView *)arg1;

@end
