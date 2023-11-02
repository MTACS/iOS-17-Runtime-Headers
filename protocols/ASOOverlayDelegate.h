
@protocol ASOOverlayDelegate <NSObject>

@optional

- (void)storeOverlay:(id <ASOOverlay>)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)storeOverlay:(id <ASOOverlay>)arg1 didFinishDismissal:(ASOOverlayTransitionContext *)arg2;
- (void)storeOverlay:(id <ASOOverlay>)arg1 didFinishPresentation:(ASOOverlayTransitionContext *)arg2;
- (void)storeOverlay:(id <ASOOverlay>)arg1 willStartDismissal:(ASOOverlayTransitionContext *)arg2;
- (void)storeOverlay:(id <ASOOverlay>)arg1 willStartPresentation:(ASOOverlayTransitionContext *)arg2;

@end
