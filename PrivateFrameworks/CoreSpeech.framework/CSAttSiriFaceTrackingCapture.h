
@interface CSAttSiriFaceTrackingCapture : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    bool  _captureReady;
    AVCaptureSession * _captureSession;
    AVCaptureDataOutputSynchronizer * _dataOutputSynchronizer;
    <CSAttSiriFaceTrackingCaptureDelegate> * _delegate;
    AVCaptureDepthDataOutput * _depthOutput;
    CSAttSiriGazeEstimator * _gazeEstimator;
    bool  _hasReceivedFirstFrame;
    NSObject<OS_dispatch_queue> * _metadataObjectsQueue;
    AVCaptureMetadataOutput * _metadataOutput;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    bool  _shouldStart;
    NSObject<OS_dispatch_queue> * _videoDataObjectsQueue;
    AVCaptureVideoDataOutput * _videoOutput;
}

@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic, retain) AVCaptureDataOutputSynchronizer *dataOutputSynchronizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAttSiriFaceTrackingCaptureDelegate> *delegate;
@property (nonatomic, retain) AVCaptureDepthDataOutput *depthOutput;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSAttSiriGazeEstimator *gazeEstimator;
@property (nonatomic) bool hasReceivedFirstFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metadataObjectsQueue;
@property (nonatomic, retain) AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *videoDataObjectsQueue;
@property (nonatomic, retain) AVCaptureVideoDataOutput *videoOutput;

+ (id)sharedInstance:(bool)arg1;

- (void).cxx_destruct;
- (unsigned int)_getPixelFormatType:(id)arg1;
- (void)_prewarmFaceTracking;
- (void)_prewarmFaceTrackingLegacy;
- (void)_prewarmFaceTrackingWithouMetaData;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (id)dataOutputSynchronizer;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (id)delegate;
- (id)depthOutput;
- (id)gazeEstimator;
- (id)getGazeEstimator;
- (bool)hasReceivedFirstFrame;
- (void)logImageBufferStats:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)metadataObjectsQueue;
- (id)metadataOutput;
- (id)sessionQueue;
- (void)setCaptureSession:(id)arg1;
- (void)setDataOutputSynchronizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthOutput:(id)arg1;
- (void)setGazeEstimator:(id)arg1;
- (void)setHasReceivedFirstFrame:(bool)arg1;
- (void)setMetadataObjectsQueue:(id)arg1;
- (void)setMetadataOutput:(id)arg1;
- (void)setSessionQueue:(id)arg1;
- (void)setVideoDataObjectsQueue:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (void)startFaceTracking;
- (void)stopFaceTracking;
- (id)videoDataObjectsQueue;
- (id)videoOutput;

@end
