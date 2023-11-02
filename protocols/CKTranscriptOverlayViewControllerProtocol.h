
@protocol CKTranscriptOverlayViewControllerProtocol <NSObject>

@required

- (CKTranscriptOverlayTransitionContext *)transitionContext;
- (bool)wantsBackingTranscriptToIgnoreContentOffsetChanges;

@end
