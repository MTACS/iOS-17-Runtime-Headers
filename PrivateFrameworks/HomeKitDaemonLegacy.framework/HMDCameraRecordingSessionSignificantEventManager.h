
@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject <HMFLogging> {
    HMDCameraSignificantEventFaceClassificationResolver * _faceClassificationResolver;
    id /* block */  _faceClassificationUUIDFactory;
    NSString * _logIdentifier;
    id /* block */  _significantEventUUIDFactory;
    NSMutableArray * _significantEvents;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (copy) id /* block */ faceClassificationUUIDFactory;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (copy) id /* block */ significantEventUUIDFactory;
@property (readonly) NSMutableArray *significantEvents;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_faceRecognitionSignificantEventForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 confidenceLevel:(unsigned long long)arg5;
- (id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)arg1;
- (id)_filteredFaceClassificationsFromFaceClassifications:(id)arg1;
- (bool)_isAnyEventInAnalyzerEvents:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;
- (bool)_isAnyEventInAnalyzerFrameResults:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;
- (id)_significantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;
- (id)_significantEventsForEmptyAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3;
- (id)_significantEventsForFrameResult:(id)arg1 analyzerResult:(id)arg2 dateOfOccurrence:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;
- (id)faceClassificationResolver;
- (id /* block */)faceClassificationUUIDFactory;
- (id)initWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;
- (bool)isAnyEventInAnalyzerFragmentResult:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;
- (id)logIdentifier;
- (void)resetState;
- (void)setFaceClassificationUUIDFactory:(id /* block */)arg1;
- (void)setSignificantEventUUIDFactory:(id /* block */)arg1;
- (id /* block */)significantEventUUIDFactory;
- (id)significantEvents;
- (id)significantEventsForAnalyzerFragmentResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4;
- (id)workQueue;

@end
