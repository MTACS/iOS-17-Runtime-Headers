
@protocol SBHIconViewConfigurationInteractionDelegate <NSObject>

@required

- (UIViewController *)containerViewControllerForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;
- (SBIconView *)sourceIconViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;

@optional

- (void)configurationInteractionDidBegin:(id <SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionDidCommit:(id <SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionDidEnd:(id <SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionWillBegin:(id <SBHIconViewConfigurationInteraction>)arg1;
- (void)configurationInteractionWillEnd:(id <SBHIconViewConfigurationInteraction>)arg1;
- (UIView *)containerViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundingRectForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;
- (UIView *)homeScreenContentViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;
- (SBIconView *)referenceIconViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg1;

@end
