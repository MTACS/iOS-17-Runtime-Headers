
@interface BWPendingIrisRecordingRequest : NSObject <NSCopying> {
    long long  _enqueuedHostTime;
    BWIrisMovieInfo * _irisMovieInfo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _momentCaptureMovieRecordingMasterEndTime;
    bool  _pairedRequestCreated;
    FigCaptureMovieFileRecordingSettings * _settings;
}

@property (nonatomic) long long enqueuedHostTime;
@property (nonatomic, retain) BWIrisMovieInfo *irisMovieInfo;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } momentCaptureMovieRecordingMasterEndTime;
@property (getter=isPairedRequestCreated, nonatomic) bool pairedRequestCreated;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;

+ (id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)enqueuedHostTime;
- (id)irisMovieInfo;
- (bool)isEmpty;
- (bool)isPairedRequestCreated;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })momentCaptureMovieRecordingMasterEndTime;
- (void)setEnqueuedHostTime:(long long)arg1;
- (void)setIrisMovieInfo:(id)arg1;
- (void)setMomentCaptureMovieRecordingMasterEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPairedRequestCreated:(bool)arg1;
- (id)settings;

@end
