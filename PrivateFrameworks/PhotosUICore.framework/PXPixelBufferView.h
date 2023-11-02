
@interface PXPixelBufferView : UIView

+ (Class)layerClass;

- (void)didMoveToWindow;
- (void)enqueuePixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)imageQueueLayer;

@end
