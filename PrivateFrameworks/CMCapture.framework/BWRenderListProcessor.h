
@interface BWRenderListProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _configurationMutexQueue;
    bool  _configurationQueueAlwaysEmitsOriginalResult;
    struct opaqueCMFormatDescription { } * _mostRecentFormatDescription;
    NSObject<OS_dispatch_group> * _renderingGroup;
    BWPixelBufferPool * _renderingPool;
}

@property (nonatomic) bool alwaysEmitsOriginalResult;
@property (nonatomic, readonly) BWPixelBufferPool *renderingPool;

+ (id)filterRendererResultToString:(unsigned long long)arg1;
+ (void)initialize;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingRenderList:(id)arg2;
- (bool)alwaysEmitsOriginalResult;
- (void)dealloc;
- (id)initWithRenderingPool:(id)arg1;
- (void)processRenderList:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resultHandler:(id /* block */)arg4;
- (void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(struct __CVBuffer { }*)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 resultHandler:(id /* block */)arg5;
- (id)renderingPool;
- (void)setAlwaysEmitsOriginalResult:(bool)arg1;
- (void)waitForAllProcessingToComplete;

@end
