
@interface SBAppSwitcherPageServiceRemoteViewController : _UIRemoteViewController <_SBUISwitcherPageHostInterface>

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (bool)__shouldRemoteViewControllerFenceOperations;

@end
