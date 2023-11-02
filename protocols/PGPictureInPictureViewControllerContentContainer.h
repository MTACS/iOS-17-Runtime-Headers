
@protocol PGPictureInPictureViewControllerContentContainer <NSObject>

@required

- (void)performStartAnimationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performStopAnimationWithFinalInterfaceOrientation:(void *)arg1 finalLayerFrame:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(void *)arg1 initialLayerFrame:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)acquireInterfaceOrientationLock;
- (bool)handleDoubleTapGesture;
- (bool)handleTapWhileStashedGesture;
- (void)notePictureInPictureViewControllerPrefersHiddenFromClonedDisplayDidChange;
- (void)notePictureInPictureViewControllerTetheringDidUpdate;
- (void)performRotateAnimationWithRotation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performStartInIsolationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performStopInIsolationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pictureInPictureClientDidRequestStashing;
- (void)playbackSourceDidUpdateIsRoutingVideoToHostedWindow:(bool)arg1;
- (void)prepareStopAnimationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)relinquishInterfaceOrientationLock;
- (void)updateMenuItems;

@end
