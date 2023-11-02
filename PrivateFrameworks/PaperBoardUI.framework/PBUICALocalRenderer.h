
@interface PBUICALocalRenderer : NSObject <PBUIRenderer> {
    CIContext * _ciContext;
    struct CGColorSpace { } * _colorSpace;
    <MTLCommandQueue> * _commandQueue;
    struct PBUIRenderState { 
        struct CGSize { 
            double width; 
            double height; 
        } outputPixelSize; 
        double scale; 
        CALayer *layer; 
        CIImage *image; 
    }  _currentRenderState;
    <MTLDevice> * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _encodingLock;
    NSString * _identifier;
    NSObject<OS_os_log> * _logger;
    CARenderer * _renderer;
    PBUIViewportLayer * _viewportLayer;
}

@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_os_log> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CIContext;
- (bool)archiveRenderingOfRequest:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;
- (struct CGColorSpace { }*)colorSpace;
- (id)commandQueue;
- (void)configureWithTransaction:(id /* block */)arg1;
- (void)dealloc;
- (id)device;
- (id)identifier;
- (id)init;
- (id)initWithColorSpace:(struct CGColorSpace { }*)arg1;
- (id)initWithDevice:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3;
- (id)logger;
- (id)newCommandBufferWithCompletion:(id /* block */)arg1;
- (id)newSurfaceWithSize:(struct CGSize { double x1; double x2; })arg1 colorSpace:(struct CGColorSpace { }*)arg2 outOptions:(unsigned long long*)arg3;
- (id)newTextureWithSize:(struct CGSize { double x1; double x2; })arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (id)nextFrameHandlerWithCompletion:(id /* block */)arg1;
- (unsigned long long)pixelFormatForBSIOSurfaceOptions:(unsigned long long)arg1;
- (id)renderCIImage:(id)arg1 toSurface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)renderFrameToTexture:(id)arg1 configureWithTransaction:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)renderRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)renderRequest:(id)arg1 error:(out id*)arg2;
- (void)renderState:(struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; })arg1 completionHandler:(id /* block */)arg2;
- (id)renderState:(struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; })arg1 error:(out id*)arg2;
- (id)rendererForDestination:(id)arg1;
- (void)resetState;
- (void)setIdentifier:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setRenderState:(struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; })arg1;
- (void)updateStateWithTransaction:(struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; })arg1;
- (bool)usesCoreImageForState:(struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; })arg1;

@end
