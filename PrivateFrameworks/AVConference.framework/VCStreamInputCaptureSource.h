
@interface VCStreamInputCaptureSource : VCVideoCapture <VCVideoCaptureServer, VCVideoSink> {
    <VCVideoSource> * _cannedVideoCapture;
    int  _cannedVideoHeight;
    int  _cannedVideoWidth;
    int  _captureSourceID;
    id  _delegate;
    struct opaqueCMFormatDescription { } * _formatDescription;
    unsigned int  _frameRate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _sinkMutex;
    long long  _streamInputID;
    NSMutableDictionary * _videoSinkState;
}

@property (nonatomic, readonly) int bestCameraCaptureFrameRate;
@property (nonatomic) int captureSourceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool followSystemCamera;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) unsigned int frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool is1080pCameraAvailable;
@property (nonatomic, readonly) long long streamInputID;
@property (readonly) Class superclass;

+ (bool)readIntegerFromConfig:(id)arg1 key:(id)arg2 value:(long long*)arg3;
+ (bool)readUint32FromConfig:(id)arg1 key:(id)arg2 value:(unsigned int*)arg3;

- (unsigned int)addSink:(id)arg1;
- (bool)allSinksSuspended;
- (int)captureSourceID;
- (id /* block */)copyOnVideoFrameBlock;
- (void)dealloc;
- (void)didResumeVideoSink:(id)arg1;
- (void)didSuspendVideoSink:(id)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned int)frameRate;
- (int)getCaptureFrameRateForSource:(int)arg1;
- (void)handleCaptureEvent:(id)arg1;
- (void)handleCaptureEvent:(id)arg1 subType:(id)arg2;
- (id)initWithCaptureSourceID:(int)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadCannedVideoReplay;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(int)arg3;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (unsigned int)removeSink:(id)arg1;
- (void)setCFAvailabilityChange:(bool)arg1;
- (void)setCameraZoomAvailable:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setCaptureSourceID:(int)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setupDataFormatWithConfiguration:(id)arg1;
- (bool)setupFormatWithConfiguration:(id)arg1;
- (bool)setupVideoFormatWithConfiguration:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (long long)streamInputID;

@end
