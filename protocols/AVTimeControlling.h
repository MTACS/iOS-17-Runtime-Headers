
@protocol AVTimeControlling

@required

- (bool)canSeek;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (bool)hasSeekableLiveStreamingContent;
- (bool)isCompletelySeekable;
- (bool)isSeeking;
- (double)maxTime;
- (AVValueTiming *)maxTiming;
- (double)minTime;
- (AVValueTiming *)minTiming;
- (double)seekToTime;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (NSArray *)seekableTimeRanges;
- (AVValueTiming *)timing;

@end
