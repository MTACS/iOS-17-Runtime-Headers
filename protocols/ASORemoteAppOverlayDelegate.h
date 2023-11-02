
@protocol ASORemoteAppOverlayDelegate <NSObject>

@required

- (void)remoteStoreOverlayDidFailToLoadWithError:(NSError *)arg1;
- (void)remoteStoreOverlayDidFinishDismissal:(ASOOverlayTransitionContext *)arg1;
- (void)remoteStoreOverlayDidFinishPresentation:(ASOOverlayTransitionContext *)arg1;
- (void)remoteStoreOverlayWillStartDismissing:(void *)arg1 executeBlock:(void *)arg2; // needs 2 arg types, found 6: ASOOverlayTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteStoreOverlayWillStartPresenting:(void *)arg1 executeBlock:(void *)arg2; // needs 2 arg types, found 6: ASOOverlayTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
