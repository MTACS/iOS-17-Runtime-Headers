
@protocol ARRecordingTechniqueProtocol <NSObject>

@required

- (void)abortRecording;
- (NSDictionary *)customUserData;
- (bool)expectAudioData;
- (bool)expectCustomData;
- (bool)expectDepthData;
- (void)finishRecording;
- (id)initWithFileURL:(NSURL *)arg1 recordingSensorDataTypes:(unsigned long long)arg2;
- (id)initWithFileURL:(NSURL *)arg1 recordingSensorDataTypes:(unsigned long long)arg2 startImmediately:(bool)arg3 recordCollaborationData:(bool)arg4;
- (id)initWithFileURL:(NSURL *)arg1 sensorDataTypes:(unsigned long long)arg2;
- (NSURL *)outputFileURL;
- (void)recordAddedAnchor:(ARAnchor *)arg1;
- (void)recordCollaborationData:(ARCollaborationData *)arg1 localSession:(bool)arg2;
- (void)recordCustomData:(id <NSSecureCoding>)arg1 forTimestamp:(double)arg2;
- (void)recordRemovedAnchor:(ARAnchor *)arg1;
- (unsigned long long)recordingSensorDataTypes;
- (<ARRecordingTechniqueDelegate> *)recordingTechniqueDelegate;
- (void)setCustomUserData:(NSDictionary *)arg1;
- (void)setExpectAudioData:(bool)arg1;
- (void)setExpectCustomData:(bool)arg1;
- (void)setExpectDepthData:(bool)arg1;
- (void)setRecordingTechniqueDelegate:(id <ARRecordingTechniqueDelegate>)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)startRecording;

@end
