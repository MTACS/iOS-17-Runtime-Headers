
@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent {
    long long  _analysisResultCode;
    NSUUID * _clipModelID;
    int  _recordingReason;
}

@property long long analysisResultCode;
@property (retain) NSUUID *clipModelID;
@property int recordingReason;

- (void).cxx_destruct;
- (long long)analysisResultCode;
- (id)attributeDescriptions;
- (id)clipModelID;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (int)recordingReason;
- (void)setAnalysisResultCode:(long long)arg1;
- (void)setClipModelID:(id)arg1;
- (void)setRecordingReason:(int)arg1;

@end
