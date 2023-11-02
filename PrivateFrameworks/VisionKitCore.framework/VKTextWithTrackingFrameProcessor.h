
@interface VKTextWithTrackingFrameProcessor : VKFrameProcessor {
    VKTextFrameProcessorConfiguration * _config;
    VKTextFrameProcessorConfiguration * _currentConfig;
    unsigned long long  _dataType;
    NSMutableOrderedSet * _recognizedItems;
    VNRecognizeDocumentsRequest * _request;
    id /* block */  _resultHandler;
    bool  _wantsThrottling;
}

@property (nonatomic, copy) VKTextFrameProcessorConfiguration *configuration;
@property (nonatomic, copy) id /* block */ resultHandler;

+ (id)supportedRecognitionLanguages;

- (void).cxx_destruct;
- (id)configuration;
- (id)init;
- (void)processFrame:(id)arg1;
- (void)reset;
- (id /* block */)resultHandler;
- (void)setConfiguration:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (bool)wantsThrottling;

@end
