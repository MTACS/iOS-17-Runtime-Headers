
@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (id)_presentationViewController;
- (void)dealloc;
- (id)init;
- (bool)isInternalWindow;
- (id)mainWindow;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
