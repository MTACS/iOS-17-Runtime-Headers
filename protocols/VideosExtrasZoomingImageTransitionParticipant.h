
@protocol VideosExtrasZoomingImageTransitionParticipant <NSObject>

@required

- (void)finalizeZoomingImageTransitionWithContext:(VideosExtrasZoomingImageTransitionContext *)arg1 transitionFinished:(bool)arg2;
- (void)performZoomingImageTransitionWithContext:(VideosExtrasZoomingImageTransitionContext *)arg1;
- (void)prepareZoomingImageTransitionWithContext:(VideosExtrasZoomingImageTransitionContext *)arg1;

@end
