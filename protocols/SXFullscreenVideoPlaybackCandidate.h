
@protocol SXFullscreenVideoPlaybackCandidate <NSObject>

@required

- (bool)canEnterFullscreen;
- (void)enterFullscreen;

@end
