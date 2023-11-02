
@interface SKUIToastPresentationWindow : UIApplicationRotationFollowingWindow

- (id)_presentationViewController;
- (id)init;
- (bool)isInternalWindow;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
