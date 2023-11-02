
@protocol QLMediaScrubberGestureDelegate

@required

- (void)scrubber:(QLMediaScrubberGesture *)arg1 didChangeValue:(float)arg2;
- (void)scrubberDidEndScrubbing:(QLMediaScrubberGesture *)arg1;
- (void)scrubberDidStartScrubbing:(QLMediaScrubberGesture *)arg1;

@end
