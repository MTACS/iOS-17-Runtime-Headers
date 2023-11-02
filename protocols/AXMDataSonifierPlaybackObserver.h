
@protocol AXMDataSonifierPlaybackObserver <NSObject>

@optional

- (void)dataSonifierPlaybackDidBeginAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidEndAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidPauseAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidResumeAtPosition:(double)arg1;
- (void)dataSonifierPlaybackProgressDidChange:(double)arg1;
- (void)dataSonifierScrubbingDidBeginAtPosition:(double)arg1;
- (void)dataSonifierScrubbingDidEndAtPosition:(double)arg1;
- (void)dataSonifierScrubbingPositionDidChange:(double)arg1;

@end
