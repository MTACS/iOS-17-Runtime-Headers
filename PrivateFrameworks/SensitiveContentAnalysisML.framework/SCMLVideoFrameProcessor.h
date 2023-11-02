
@interface SCMLVideoFrameProcessor : NSObject {
    SCMLVideoAnalysisConfiguration * _config;
    unsigned long long  _frameCount;
    NSMutableArray * _frameQueue;
    SCMLImageAnalyzer * _imageAnalyzer;
    SCMLVideoAnalysisResult * _result;
    unsigned long long  _sensitiveFrameCount;
}

@property (nonatomic, retain) SCMLVideoAnalysisConfiguration *config;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic, retain) NSMutableArray *frameQueue;
@property (nonatomic, retain) SCMLImageAnalyzer *imageAnalyzer;
@property (nonatomic, retain) SCMLVideoAnalysisResult *result;
@property (nonatomic) unsigned long long sensitiveFrameCount;

- (void).cxx_destruct;
- (bool)addFrameBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)analyze:(id*)arg1;
- (id)config;
- (void)dealloc;
- (id)finalizeAnalysis:(id*)arg1;
- (unsigned long long)frameCount;
- (id)frameQueue;
- (id)imageAnalyzer;
- (id)initWithImageAnalyzer:(id)arg1;
- (void)outputDebugInfoForFrame:(id)arg1 isSensitive:(bool)arg2 sensitivityScore:(id)arg3;
- (id)popFrame;
- (void)pushFrame:(id)arg1;
- (void)reset;
- (id)result;
- (unsigned long long)sensitiveFrameCount;
- (void)setConfig:(id)arg1;
- (void)setFrameCount:(unsigned long long)arg1;
- (void)setFrameQueue:(id)arg1;
- (void)setImageAnalyzer:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSensitiveFrameCount:(unsigned long long)arg1;
- (void)startAnalysisWithConfig:(id)arg1;

@end
