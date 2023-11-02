
@protocol CPTemplateApplicationSceneDelegate <UISceneDelegate>

@optional

- (void)contentStyleDidChange:(long long)arg1;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2 toWindow:(CPWindow *)arg3;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2 fromWindow:(CPWindow *)arg3;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectManeuver:(CPManeuver *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectNavigationAlert:(CPNavigationAlert *)arg2;

@end
