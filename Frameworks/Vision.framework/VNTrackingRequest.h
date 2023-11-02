
@interface VNTrackingRequest : VNImageBasedRequest {
    VNDetectedObjectObservation * _inputObservation;
    bool  _lastFrame;
    unsigned long long  _trackingLevel;
}

@property (nonatomic, retain) VNDetectedObjectObservation *inputObservation;
@property (getter=isLastFrame, nonatomic) bool lastFrame;
@property (nonatomic) unsigned long long trackingLevel;

+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_resetTrackerIfNeeded:(id)arg1 session:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (bool)allowsCachingOfResults;
- (id)applicableTrackerAndOptions:(id*)arg1 forRevision:(unsigned long long)arg2 loadedInSession:(id)arg3 error:(id*)arg4;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)inputObservation;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)isLastFrame;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id)newDuplicateInstance;
- (void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setInputObservation:(id)arg1;
- (void)setLastFrame:(bool)arg1;
- (void)setTrackingLevel:(unsigned long long)arg1;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (unsigned long long)supportedNumberOfTrackersAndReturnError:(id*)arg1;
- (unsigned long long)trackingLevel;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
