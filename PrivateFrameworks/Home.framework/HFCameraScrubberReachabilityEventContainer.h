
@interface HFCameraScrubberReachabilityEventContainer : NSObject <HFCameraRecordingEvent> {
    <HFCameraRecordingEvent> * _endEvent;
    <HFCameraRecordingEvent> * _startEvent;
}

@property (nonatomic, readonly) unsigned long long containerType;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayDescription;
@property (nonatomic, retain) <HFCameraRecordingEvent> *endEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFCameraRecordingEvent> *startEvent;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (bool)canAskForUserFeedback;
- (unsigned long long)containerType;
- (id)dateOfOccurrence;
- (id)description;
- (id)displayDescription;
- (double)duration;
- (id)encryptionKey;
- (id)endEvent;
- (id)hf_dateInterval;
- (double)hf_duration;
- (id)hf_endDate;
- (bool)hf_hasInsufficientAnalysis;
- (bool)hf_isPlayable;
- (id)initWithStartEvent:(id)arg1;
- (bool)isComplete;
- (void)setEndEvent:(id)arg1;
- (id)startEvent;
- (double)targetFragmentDuration;
- (id)uniqueIdentifier;
- (id)videoAssetRequiredHTTPHeaders;

@end
