
@protocol PUVideoScrubberViewDelegate <NSObject>

@required

- (void)videoScrubberViewDidScrubTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)videoScrubberViewInteractionDone;

@end
