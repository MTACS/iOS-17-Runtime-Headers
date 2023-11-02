
@protocol WFFocusConfigurationRemoteViewControllerDelegate <NSObject>

@required

- (void)focusConfigurationRemoteViewController:(WFFocusConfigurationRemoteViewController *)arg1 configurationUIStateDidChange:(WFFocusConfigurationUIState *)arg2;
- (void)focusConfigurationRemoteViewController:(WFFocusConfigurationRemoteViewController *)arg1 didPressButtonWithIdentifier:(NSString *)arg2 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
