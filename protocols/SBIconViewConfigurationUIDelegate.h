
@protocol SBIconViewConfigurationUIDelegate <NSObject>

@optional

- (void)iconView:(SBIconView *)arg1 configurationDidBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationDidEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationDidUpdateWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (<SBHIconViewConfigurationInteraction> *)iconView:(SBIconView *)arg1 configurationInteractionForDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationWillBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationWillEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIViewController *)iconView:(SBIconView *)arg1 containerViewControllerForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIView *)iconView:(SBIconView *)arg1 containerViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconView:(SBIconView *)arg1 contentBoundingRectForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIView *)iconView:(SBIconView *)arg1 homeScreenContentViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (bool)iconView:(SBIconView *)arg1 supportsConfigurationForDataSource:(id <SBLeafIconDataSource>)arg2;
- (<SBHIconViewConfigurationInteraction> *)stackConfigurationInteractionForIconView:(SBIconView *)arg1;

@end
