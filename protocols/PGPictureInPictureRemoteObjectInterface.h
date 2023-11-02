
@protocol PGPictureInPictureRemoteObjectInterface <NSObject>

@required

- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, bool, bool, void*
- (oneway void)cleanupWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)initializePictureInPictureWithControlsStyle:(void *)arg1 preferredContentSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)rotateContentContainer:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, BKSAnimationFenceHandle *, void*
- (oneway void)setActivitySessionIdentifier:(NSString *)arg1;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setupStartAnimated:(void *)arg1 hostedWindowHostingHandle:(void *)arg2 sceneSessionPersistentIdentifier:(void *)arg3 preferredContentSize:(void *)arg4 initialInterfaceOrientation:(void *)arg5 initialLayerFrame:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: bool, PGHostedWindowHostingHandle *, NSString *, struct CGSize { double x1; double x2; }, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setupStopAnimated:(void *)arg1 needsApplicationActivation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)startPictureInPictureAnimated:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)stopPictureInPictureAndRestoreUserInterface;
- (oneway void)stopPictureInPictureAnimated:(void *)arg1 withFinalInterfaceOrientation:(void *)arg2 finalLayerFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: bool, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, BKSAnimationFenceHandle *, void*
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)updateMenuItems:(NSArray *)arg1;
- (oneway void)updatePlaybackStateWithDiff:(NSDictionary *)arg1;
- (oneway void)updatePreferredContentSize:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
