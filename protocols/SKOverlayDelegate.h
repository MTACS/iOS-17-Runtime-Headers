
@protocol SKOverlayDelegate <NSObject>

@optional

- (void)storeOverlay:(SKOverlay *)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 didFinishDismissal:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 didFinishPresentation:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 willStartDismissal:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 willStartPresentation:(SKOverlayTransitionContext *)arg2;

@end
