
@interface SKUIOffscreenRenderOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _createLayerBlock;
    UIImage * _outputImage;
}

@property (nonatomic, copy) id /* block */ createLayerBlock;
@property (nonatomic, readonly) UIImage *outputImage;

+ (void)preheatOffscreenRenderOperations;

- (void).cxx_destruct;
- (id /* block */)createLayerBlock;
- (id)init;
- (void)main;
- (id)outputImage;
- (void)setCreateLayerBlock:(id /* block */)arg1;

@end
