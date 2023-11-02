
@protocol AVScrubbing <NSObject>

@required

- (void)beginScrubbing;
- (void)endScrubbing;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;

@end
