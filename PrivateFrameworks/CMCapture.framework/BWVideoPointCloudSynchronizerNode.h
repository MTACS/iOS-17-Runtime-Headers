
@interface BWVideoPointCloudSynchronizerNode : BWNode <BWFigVideoCaptureDeviceMaxDepthFrameRateChangedDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    BWFigVideoCaptureDevice * _captureDevice;
    float  _depthMaxFrameRate;
    bool  _depthMaxFrameRateAdjustmentPending;
    BWNodeInput * _imageInput;
    int  _indexForLatestReceivedPointCloudFrame;
    NSMutableArray * _latestPointCloudBuffers;
    int  _latestPointCloudBuffersCapacity;
    bool  _multiplePointCloudAttachmentsEnabled;
    unsigned long long  _numberOfReceivedPointCloudFramesBeforeEmitted;
    short  _numberOfReceivedRGBFramesBeforeEmittingDepthFrame;
    short  _numberOfReceivedRGBFramesSinceLastDepthFrameEmission;
    BWNodeInput * _pointCloudInput;
    bool  _shouldLetThroughFrames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeInput *imageInput;
@property (nonatomic, readonly) BWNodeInput *pointCloudInput;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)_attachPointCloudDataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setUpPointCloudMediaConfigurationForOutput:(id)arg1 inputAttachedMediaKey:(id)arg2 outputAttachedMediaKey:(id)arg3;
- (bool)_shouldEmitBuffer;
- (void)_tryToEmitBuffersWithRGBBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateNumberOfReceivedRGBFramesBeforeEmittingDepthFrameWithDepthMaxFrameRate:(float)arg1 rgbMaxFrameRate:(float)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didChangeDepthMaxFrameRate:(float)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)imageInput;
- (id)initWithCaptureDevice:(id)arg1 timeOfFlightCameraType:(int)arg2;
- (id)pointCloudInput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
