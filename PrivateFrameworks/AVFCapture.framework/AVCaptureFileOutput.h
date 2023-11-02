
@interface AVCaptureFileOutput : AVCaptureOutput {
    <AVCaptureFileOutputDelegate> * _delegate;
    AVCaptureFileOutputInternal * _fileOutputInternal;
}

@property (nonatomic) <AVCaptureFileOutputDelegate> *delegate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } recordedDuration;
@property (nonatomic, readonly) long long recordedFileSize;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (getter=isRecordingPaused, nonatomic, readonly) bool recordingPaused;
@property (nonatomic) bool usesVirtualCaptureCard;
@property (getter=isVirtualCaptureCardSupported, nonatomic, readonly) bool virtualCaptureCardSupported;

+ (void)initialize;

- (void)dealloc;
- (id)delegate;
- (id)initSubclass;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (bool)isVirtualCaptureCardSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxRecordedDuration;
- (long long)maxRecordedFileSize;
- (long long)minFreeDiskSpaceLimit;
- (id)outputFileURL;
- (void)pauseRecording;
- (bool)pausesRecordingOnInterruption;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })recordedDuration;
- (long long)recordedFileSize;
- (void)resumeRecording;
- (void)setDelegate:(id)arg1;
- (void)setMaxRecordedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxRecordedFileSize:(long long)arg1;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setPausesRecordingOnInterruption:(bool)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (bool)usesVirtualCaptureCard;

@end
