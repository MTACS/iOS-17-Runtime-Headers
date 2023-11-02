
@interface VKBarcodeFrameProcessor : VKFrameProcessor {
    VKBarcodeFrameProcessorConfiguration * _config;
    VKBarcodeFrameProcessorConfiguration * _currentConfig;
    NSMutableArray * _recognizedItems;
    id /* block */  _resultHandler;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _warpTransform;
}

@property (nonatomic, copy) VKBarcodeFrameProcessorConfiguration *configuration;
@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)applyWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)configuration;
- (id)init;
- (void)processFrame:(id)arg1;
- (void)reset;
- (id /* block */)resultHandler;
- (void)setConfiguration:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (bool)wantsThrottling;

@end
