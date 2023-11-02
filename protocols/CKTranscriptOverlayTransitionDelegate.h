
@protocol CKTranscriptOverlayTransitionDelegate <NSObject>

@required

- (void)transcriptOverlayViewController:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1 visibleGUIDsDidChange:(NSArray *)arg2;
- (void)transcriptOverlayViewControllerDidAnimateIn:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (void)transcriptOverlayViewControllerDidAnimateOut:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (void)transcriptOverlayViewControllerIsAnimatingIn:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (void)transcriptOverlayViewControllerIsAnimatingOut:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (void)transcriptOverlayViewControllerWillAnimateIn:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (void)transcriptOverlayViewControllerWillAnimateOut:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;
- (NSDictionary *)updatedFrameMapForTranscriptOverlayViewController:(UIViewController<CKTranscriptOverlayViewControllerProtocol> *)arg1;

@end
