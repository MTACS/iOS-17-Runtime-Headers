
@protocol AVTransportControlsViewDelegate <NSObject>

@required

- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidBeginScrubbing:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidEndScrubbing:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidScrub:(AVScrubber *)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(AVTransportControlsView *)arg1;

@end
