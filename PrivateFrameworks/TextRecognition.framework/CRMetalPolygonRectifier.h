
@interface CRMetalPolygonRectifier : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    int  _ioColorSpace;
    <MTLTexture> * _managedBlitTexture;
    unsigned long long  _numVertices;
    <MTLRenderPipelineState> * _pipelineState;
    unsigned long long  _pixelFormat;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    <MTLTexture> * _renderDestination;
    NSObject<OS_dispatch_semaphore> * _renderDestinationSem;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    <MTLTexture> * _texture;
    NSObject<OS_dispatch_group> * _textureCreationGroup;
    <MTLBuffer> * _vertices;
    void _viewportSize;
}

- (void).cxx_destruct;
- (void)_createRenderTargetWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_createTextureForInputCRImage:(id)arg1;
- (void)_setSourceImage:(id)arg1;
- (id)imageByRectifyingPolygon:(id)arg1 imageHeight:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 sourceImage:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceImage:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)rectifyPolygonAsync:(id)arg1 imageHeight:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
