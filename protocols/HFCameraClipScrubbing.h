
@protocol HFCameraClipScrubbing <NSObject>

@required

- (void)beginScrubbing;
- (void)endScrubbingWithTargetTime:(double)arg1;
- (void)scrubToTime:(double)arg1;

@end
