
@protocol PXVideoScrubberControllerDelegate <NSObject>

@optional

- (void)videoScrubberController:(PXVideoScrubberController *)arg1 desiredSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)videoScrubberController:(PXVideoScrubberController *)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(PXVideoScrubberController *)arg1;
- (void)videoScrubberControllerPlayerItemDidChange:(PXVideoScrubberController *)arg1;

@end
