
@protocol WFFocusConfigurationViewControllerDelegate <NSObject>

@optional

- (void)focusConfigurationViewController:(WFFocusConfigurationViewController *)arg1 configurationUIStateDidChange:(WFFocusConfigurationUIState *)arg2;
- (void)focusConfigurationViewController:(WFFocusConfigurationViewController *)arg1 didPressButtonWithIdentifier:(NSString *)arg2 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)focusConfigurationViewController:(WFFocusConfigurationViewController *)arg1 didUpdateConfigurationWithAction:(LNAction *)arg2;
- (void)focusConfigurationViewController:(WFFocusConfigurationViewController *)arg1 didUpdateConfigurationWithAction:(LNAction *)arg2 displayRepresentation:(LNDisplayRepresentation *)arg3;
- (void)focusConfigurationViewController:(WFFocusConfigurationViewController *)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;

@end
