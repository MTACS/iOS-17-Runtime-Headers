
@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {
    bool  _checkIfFileAlreadyExistForMFO;
    bool  _momentCaptureMovieRecordingEnabled;
    NSMutableArray * _pendingIrisRecordings;
    bool  _recordedWhileMultitasking;
    bool  _recording;
}

@property (nonatomic) bool checkIfFileAlreadyExistForMFO;
@property (nonatomic) bool momentCaptureMovieRecordingEnabled;
@property (nonatomic, retain) NSMutableArray *pendingIrisRecordings;
@property (nonatomic) bool recordedWhileMultitasking;
@property (nonatomic) bool recording;

- (bool)checkIfFileAlreadyExistForMFO;
- (void)dealloc;
- (bool)momentCaptureMovieRecordingEnabled;
- (id)pendingIrisRecordings;
- (bool)recordedWhileMultitasking;
- (bool)recording;
- (void)setCheckIfFileAlreadyExistForMFO:(bool)arg1;
- (void)setMomentCaptureMovieRecordingEnabled:(bool)arg1;
- (void)setPendingIrisRecordings:(id)arg1;
- (void)setRecordedWhileMultitasking:(bool)arg1;
- (void)setRecording:(bool)arg1;

@end
