
@protocol PXGMetalRenderDestination <NSObject>

@required

- (bool)canSetColorSpace;
- (unsigned long long)colorPixelFormat;
- (struct CGColorSpace { }*)colorspace;
- (MTLRenderPassDescriptor *)currentRenderPassDescriptor;
- (<PXGMetalRenderDestinationDelegate> *)delegate;
- (unsigned long long)depthStencilPixelFormat;
- (unsigned long long)destinationColorSpaceName;
- (<MTLDevice> *)device;
- (NSObject<OS_dispatch_queue> *)layoutQueue;
- (bool)lowMemoryMode;
- (void)releaseCachedResources;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBoundsInPoints;
- (void)renderImmediately;
- (struct CGSize { double x1; double x2; })renderSize;
- (<MTLTexture> *)renderTexture;
- (long long)sampleCount;
- (double)scale;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setDelegate:(id <PXGMetalRenderDestinationDelegate>)arg1;
- (void)setLayoutQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;

@optional

- (void)notifyDidCompleteRenderForFrameID:(long long)arg1;

@end
