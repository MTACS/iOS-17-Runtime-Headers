
@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate, AXMAVCaptureSessionNodeFrameDelegate> {
    AXMVisionAnalysisOptions * _analysisOptions;
    NSObject<OS_dispatch_queue> * _autotrigger_queue;
    AXMCaptureVideoDataOutput * _axVideoDataOutput;
    AVCaptureSession * _captureSession;
    <AXMAVCaptureSessionNodeDelegate> * _captureSessionNodeDelegate;
    <AXMAVCaptureSessionNodeFrameDelegate> * _frameDelegate;
}

@property (nonatomic, retain) AXMVisionAnalysisOptions *analysisOptions;
@property (nonatomic, retain) AXMCaptureVideoDataOutput *axVideoDataOutput;
@property (nonatomic) AVCaptureSession *captureSession;
@property (nonatomic) <AXMAVCaptureSessionNodeDelegate> *captureSessionNodeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AXMAVCaptureSessionNodeFrameDelegate> *frameDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)addVideoDataOutputWithAVCaptureSession:(id)arg1 queue:(id)arg2;
- (id)analysisOptions;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)axVideoDataOutput;
- (void)beginFrameEventsWithAVCaptureSession:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)captureSessionNode:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSessionNodeDelegate;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)endVideoFrameEvents;
- (id)frameDelegate;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)setAnalysisOptions:(id)arg1;
- (void)setAxVideoDataOutput:(id)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setCaptureSessionNodeDelegate:(id)arg1;
- (void)setFrameDelegate:(id)arg1;
- (void)setShouldProcessRemotely:(bool)arg1;
- (void)triggerWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 interfaceOrientation:(long long)arg2 mirrored:(bool)arg3 options:(id)arg4 userContext:(id)arg5;

@end
