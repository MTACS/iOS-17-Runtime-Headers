
@protocol SXPresentationDelegate <NSObject>

@required

- (<SXAdDocumentStateManager> *)adDocumentStateManager;
- (bool)addInteractivityFocusForComponent:(SXComponentView *)arg1;
- (bool)allowInteractivityFocusForComponent:(SXComponentView *)arg1;
- (SXComponentAnimationController *)animationController;
- (SXComponentBehaviorController *)behaviorController;
- (<SXComponentController> *)componentController;
- (void)dismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (SXFullscreenVideoPlaybackManager *)fullscreenVideoPlaybackManager;
- (bool)isScrolling;
- (SXMediaPlaybackController *)mediaPlaybackController;
- (SXPresentationAttributes *)presentationAttributes;
- (UIViewController *)presentingContentViewController;
- (void)removeInteractivityFocusForComponent:(SXComponentView *)arg1;
- (UIViewController *)requestFullScreenCanvasViewControllerForComponent:(void *)arg1 canvasController:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 7: SXComponentView *, SXFullscreenCanvasController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController *)requestFullScreenCanvasViewControllerForComponent:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 6: SXComponentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (SXTangierController *)tangierController;
- (<SXTextSelectionManager> *)textSelectionManager;
- (void)updateBehaviorForComponentView:(SXComponentView *)arg1;
- (void)willDismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (void)willReturnToFullscreenForComponent:(SXComponentView *)arg1;

@optional

- (bool)accessibilityShouldHandleInteractionForView:(SXComponentView *)arg1;

@end