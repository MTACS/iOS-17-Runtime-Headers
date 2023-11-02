
@protocol HFCameraRecordingEvent <HMCameraRecordingEvent, NSObject>

@required

- (bool)canAskForUserFeedback;
- (unsigned long long)containerType;
- (double)duration;
- (NSDateInterval *)hf_dateInterval;
- (double)hf_duration;
- (NSDate *)hf_endDate;
- (bool)hf_hasInsufficientAnalysis;
- (bool)hf_isPlayable;
- (bool)isComplete;

@end
