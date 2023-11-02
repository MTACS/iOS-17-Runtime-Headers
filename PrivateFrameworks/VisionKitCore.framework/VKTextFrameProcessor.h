
@interface VKTextFrameProcessor : VKFrameProcessor {
    VKTextFrameProcessorConfiguration * _config;
    VKTextFrameProcessorConfiguration * _currentConfig;
    unsigned long long  _dataType;
    NSMutableArray * _recognizedItems;
    id /* block */  _resultHandler;
    bool  _wantsThrottling;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _warpTransform;
}

@property (nonatomic, copy) VKTextFrameProcessorConfiguration *configuration;
@property (nonatomic, copy) id /* block */ resultHandler;

+ (id)supportedRecognitionLanguages;

- (void).cxx_destruct;
- (void)applyHomographyWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)configuration;
- (id)init;
- (void)processFrame:(id)arg1;
- (void)reset;
- (id /* block */)resultHandler;
- (void)setConfiguration:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setWantsThrottling:(bool)arg1;
- (bool)wantsThrottling;

@end
