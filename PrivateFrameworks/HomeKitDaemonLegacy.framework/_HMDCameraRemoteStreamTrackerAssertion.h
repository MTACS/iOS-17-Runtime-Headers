
@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject {
    HMDCameraStreamSessionID * _streamSessionID;
    HMDCameraRemoteStreamTracker * _streamTracker;
}

@property (readonly) HMDCameraStreamSessionID *streamSessionID;
@property HMDCameraRemoteStreamTracker *streamTracker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;
- (void)setStreamTracker:(id)arg1;
- (id)streamSessionID;
- (id)streamTracker;

@end
