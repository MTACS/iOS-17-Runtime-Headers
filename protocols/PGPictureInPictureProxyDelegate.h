
@protocol PGPictureInPictureProxyDelegate <NSObject>

@optional

- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didReceivePlaybackCommand:(PGCommand *)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didReceiveTestingCommand:(PGCommand *)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didRequestFaceTimeAction:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didUpdateStashedOrUnderLockState:(bool)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(NSError *)arg3;
- (void)pictureInPictureProxy:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: PGPictureInPictureProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (bool)pictureInPictureProxyCanIssueOptionalCommand:(PGCommand *)arg1;
- (long long)pictureInPictureProxyContentType:(PGPictureInPictureProxy *)arg1;
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(PGPictureInPictureProxy *)arg1;
- (bool)pictureInPictureProxySupportsPrewarming:(PGPictureInPictureProxy *)arg1;
- (UIWindow *)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyWillSetupPictureInPictureStop:(PGPictureInPictureProxy *)arg1;

@end
