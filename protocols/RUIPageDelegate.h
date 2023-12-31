
@protocol RUIPageDelegate

@required

- (void)RUIPage:(RUIPage *)arg1 pressedNavBarButton:(RUIBarButtonItem *)arg2;
- (void)RUIPage:(RUIPage *)arg1 toggledEditing:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(RUIPage *)arg1;

@end
