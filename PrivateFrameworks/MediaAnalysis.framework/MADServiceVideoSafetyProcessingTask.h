
@interface MADServiceVideoSafetyProcessingTask : MADServiceVideoProcessingSubtask {
    MADServiceVideoAsset * _asset;
    id /* block */  _completionHandler;
    bool  _enablePowerLog;
    SCMLHandler * _handler;
    bool  _isSensitive;
    NSError * _processError;
    id /* block */  _progressHandler;
    MADVideoSafetyClassificationRequest * _request;
    NSDictionary * _scoresForLabels;
    SCMLVideoAnalyzer * _videoAnalyzer;
    NSObject<VCPBlockBasedVideoProcessorProtocol> * _videoProcessor;
}

@property (nonatomic) bool enablePowerLog;

- (void).cxx_destruct;
- (void)_processFrameBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stop:(bool*)arg2;
- (bool)configureVideoProcessorWithError:(id*)arg1;
- (bool)enablePowerLog;
- (id)finalizeSafetyResultsWithError:(id*)arg1;
- (id)initWithRequest:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (bool)run:(id*)arg1;
- (void)setEnablePowerLog:(bool)arg1;

@end
