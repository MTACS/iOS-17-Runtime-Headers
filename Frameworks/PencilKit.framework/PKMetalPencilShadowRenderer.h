
@interface PKMetalPencilShadowRenderer : NSObject {
    <MTLRenderPipelineState> * _currentPipelineState;
    unsigned long long  _currentPixelFormat;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    <MTLTexture> * _maxBlurTexture;
    <MTLTexture> * _minBlurTexture;
    <MTLBuffer> * _vertexBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _vertexBufferBounds;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderInto:(id)arg1 commandBuffer:(id)arg2 position:(struct CGPoint { double x1; double x2; })arg3 azimuth:(double)arg4 altitude:(double)arg5 height:(double)arg6 alpha:(double)arg7 scale:(double)arg8 clearFramebuffer:(bool)arg9 grayscale:(double)arg10;
- (void)setupWithTexture:(id)arg1 minBlur:(double)arg2 maxBlur:(double)arg3;

@end
