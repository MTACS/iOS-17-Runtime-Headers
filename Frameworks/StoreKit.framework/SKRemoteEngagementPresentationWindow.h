
@interface SKRemoteEngagementPresentationWindow : UIApplicationRotationFollowingWindow

- (id)_presentationViewController;
- (id)init;
- (bool)isInternalWindow;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
