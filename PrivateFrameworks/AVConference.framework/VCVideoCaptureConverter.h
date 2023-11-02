
@interface VCVideoCaptureConverter : NSObject <VCVideoCaptureClient, VCVideoSink> {
    int (* _convertedFrameHandler;
    id  _convertedFrameHandlerContext;
    unsigned int  _destinationFramerate;
    bool  _isThrottling;
    unsigned int  _lastDestinationFrameCount;
    unsigned int  _sourceFrameCount;
    unsigned int  _sourceFramerate;
    double  _throttleRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int destinationFramerate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int sourceFramerate;
@property (readonly) Class superclass;

- (void)avConferencePreviewError:(id)arg1;
- (void)cameraAvailabilityDidChange:(bool)arg1;
- (id)clientCaptureRule;
- (void)dealloc;
- (unsigned int)destinationFramerate;
- (id)initWithConvertedFrameHandler:(int (*)arg1 context:(id)arg2;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (bool)processFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)reactionDidStart:(id)arg1;
- (void)setDestinationFramerate:(unsigned int)arg1;
- (void)setSourceFramerate:(unsigned int)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (unsigned int)sourceFramerate;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateThrottleRate;

@end
