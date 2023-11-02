
@interface PXGMetalViewRenderDestination : NSObject <MTKViewDelegate, PXGPresentableMetalRenderDestination> {
    <PXGMetalRenderDestinationDelegate> * _delegate;
    bool  _disableDisplayCompositing;
    unsigned long long  _lastSizeChangeTime;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    bool  _lowMemoryMode;
    MTKView * _metalView;
    id /* block */  _test_renderSnapshotHandler;
}

@property (nonatomic, readonly) bool canSetColorSpace;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic) struct CGColorSpace { }*colorspace;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGMetalRenderDestinationDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) bool disableDisplayCompositing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) MTKView *metalView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderBoundsInPoints;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic, readonly) <MTLTexture> *renderTexture;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ test_renderSnapshotHandler;

- (void).cxx_destruct;
- (void)_setupMetalIfNeeded;
- (bool)canSetColorSpace;
- (unsigned long long)colorPixelFormat;
- (struct CGColorSpace { }*)colorspace;
- (id)currentRenderPassDescriptor;
- (id)delegate;
- (unsigned long long)depthStencilPixelFormat;
- (unsigned long long)destinationColorSpaceName;
- (id)device;
- (bool)disableDisplayCompositing;
- (void)drawInMTKView:(id)arg1;
- (id)init;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (id)metalView;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)present;
- (void)releaseCachedResources;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBoundsInPoints;
- (void)renderImmediately;
- (struct CGSize { double x1; double x2; })renderSize;
- (id)renderTexture;
- (long long)sampleCount;
- (double)scale;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableDisplayCompositing:(bool)arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;
- (void)setTest_renderSnapshotHandler:(id /* block */)arg1;
- (void)test_configureForRenderSnapshot;
- (id /* block */)test_renderSnapshotHandler;

@end
