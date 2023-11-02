
@interface HMIVideoFrameAnalyzer : HMIVideoAnalyzerProcessingNode <HMFLogging, HMIVideoFrameSamplerDelegate> {
    MovingAverage * _analysisTime;
    <HMICameraVideoFrameAnalyzer> * _cameraVideoFrameAnalyzer;
    <HMIVideoFrameAnalyzerDelegate> * _delegate;
    HMIVideoFrameSampler * _frameSampler;
}

@property (readonly) double averageAnalysisTime;
@property (readonly) <HMICameraVideoFrameAnalyzer> *cameraVideoFrameAnalyzer;
@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoFrameAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoFrameSampler *frameSampler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (double)averageAnalysisTime;
- (id)cameraVideoFrameAnalyzer;
- (id)delegate;
- (void)flush;
- (id)frameSampler;
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (bool)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 background:(struct opaqueCMSampleBuffer { }*)arg2 motionDetections:(id)arg3 tracks:(id)arg4;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
