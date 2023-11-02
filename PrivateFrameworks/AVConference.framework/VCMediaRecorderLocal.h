
@interface VCMediaRecorderLocal : VCMediaRecorder <VCVideoCaptureClient, VCVideoSink> {
    VCAudioIO * _audioIO;
    unsigned int  _audioSessionId;
    VCMediaRecorderConfiguration * _configuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)avConferencePreviewError:(id)arg1;
- (void)cameraAvailabilityDidChange:(bool)arg1;
- (void)cleanupSpatialAudio;
- (id)clientCaptureRule;
- (bool)configureVideoRecording;
- (void)dealloc;
- (struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; id x_20_1_4; long long x_20_1_5; id x_20_1_6; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; id x_21_1_4; long long x_21_1_5; id x_21_1_6; } x21; })defaultAudioIOConfig;
- (void)deregisterForCameraCapture;
- (id)initWithStreamToken:(long long)arg1 configuration:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3;
- (void)invalidate;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (void)reactionDidStart:(id)arg1;
- (bool)registerForCameraCapture;
- (void)setupSpatialAudio;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (bool)startAudio;
- (int)supportedVideoCodec;
- (void)thermalLevelDidChange:(int)arg1;

@end
