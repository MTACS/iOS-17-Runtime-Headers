
@interface PXGPixelBufferMetalRenderDestination : NSObject <PXGMetalRenderDestination> {
    unsigned long long  _colorPixelFormat;
    struct CGColorSpace { } * _colorspace;
    MTLRenderPassDescriptor * _currentRenderPassDescriptor;
    struct __CVBuffer { } * _cvMetalTexture;
    <PXGMetalRenderDestinationDelegate> * _delegate;
    <MTLTexture> * _depthStencilTexture;
    struct CGColorSpace { } * _destinationColorSpace;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    bool  _lowMemoryMode;
    struct __CVBuffer { } * _pixelBuffer;
    unsigned int  _pixelBufferFormatType;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _renderBoundsInPoints;
    id /* block */  _renderCompletionBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
    <MTLTexture> * _renderTexture;
    double  _scale;
    struct __CVMetalTextureCache { } * _textureCache;
}

@property (nonatomic, readonly) bool canSetColorSpace;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic) struct CGColorSpace { }*colorspace;
@property (nonatomic, retain) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGMetalRenderDestinationDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthStencilPixelFormat;
@property (nonatomic, retain) <MTLTexture> *depthStencilTexture;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, retain) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) unsigned int pixelBufferFormatType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderBoundsInPoints;
@property (nonatomic, copy) id /* block */ renderCompletionBlock;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic, retain) <MTLTexture> *renderTexture;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createRenderPassDescriptor;
- (void)_createResourceForRenderingFrame;
- (void)_initializeDepthStencilTexture;
- (void)_initializeMetalProperties;
- (void)_initializePixelBufferProperties;
- (void)_releaseResourcesForRenderingFrame;
- (bool)canSetColorSpace;
- (unsigned long long)colorPixelFormat;
- (struct CGColorSpace { }*)colorspace;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)depthStencilPixelFormat;
- (id)depthStencilTexture;
- (struct CGColorSpace { }*)destinationColorSpace;
- (unsigned long long)destinationColorSpaceName;
- (id)device;
- (id)initWithCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 scale:(double)arg2;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (void)notifyDidCompleteRenderForFrameID:(long long)arg1;
- (unsigned int)pixelBufferFormatType;
- (void)releaseCachedResources;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBoundsInPoints;
- (id /* block */)renderCompletionBlock;
- (void)renderImmediately;
- (struct CGSize { double x1; double x2; })renderSize;
- (id)renderTexture;
- (long long)sampleCount;
- (double)scale;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setCurrentRenderPassDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthStencilTexture:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;
- (void)setRenderCompletionBlock:(id /* block */)arg1;
- (void)setRenderTexture:(id)arg1;

@end
