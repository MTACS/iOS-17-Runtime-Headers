
@protocol ASORemoteContextProvider <NSObject>

@required

- (void)didFinishDismissingOverlay:(ASORemoteOverlay *)arg1;
- (ASOHostContext *)hostContextForOverlayViewService;
- (_UIRemoteViewController *)remoteViewControllerForOverlayViewService;
- (void)willStartPresentingOverlay:(ASORemoteOverlay *)arg1;

@end
