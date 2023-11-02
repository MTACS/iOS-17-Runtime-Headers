
@interface SCMLVideoAnalyzer : NSObject {
    SCMLVideoDecoder * _decoder;
    SCMLVideoFrameProcessor * _frameProcessor;
    SCMLHandler * _handler;
    SCMLImageAnalyzer * _imageAnalyzer;
}

@property (nonatomic, retain) SCMLVideoDecoder *decoder;
@property (nonatomic, retain) SCMLVideoFrameProcessor *frameProcessor;
@property (nonatomic, readonly, retain) SCMLHandler *handler;
@property (nonatomic, readonly, retain) SCMLImageAnalyzer *imageAnalyzer;

- (void).cxx_destruct;
- (bool)addFrameBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)analyze:(id*)arg1;
- (id)analyzeVideoURL:(id)arg1 config:(id)arg2 error:(id*)arg3;
- (id)decoder;
- (id)finalizeAnalysis:(id*)arg1;
- (id)frameProcessor;
- (id)handler;
- (id)imageAnalyzer;
- (id)initWithMLHandler:(id)arg1;
- (void)setDecoder:(id)arg1;
- (void)setFrameProcessor:(id)arg1;
- (void)startAnalysisWithConfig:(id)arg1;

@end
