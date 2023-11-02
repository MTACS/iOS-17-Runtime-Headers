
@interface CIRenderDestination : NSObject {
    void * _priv;
}

@property unsigned long long alphaMode;
@property (nonatomic, retain) CIBlendKernel *blendKernel;
@property bool blendsInDestinationColorSpace;
@property (getter=isClamped) bool clamped;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (getter=isDithered) bool dithered;
@property (getter=isFlipped) bool flipped;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;

- (id)_initWithInternalRenderDestination:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace { }*)arg5;
- (void*)_internalRenderDestination;
- (struct CIRenderDestinationInternal { struct RenderDestination {} *x1; unsigned long long x2; unsigned long long x3; int x4; int x5; struct { double x_6_1_1[3]; double x_6_1_2[3]; double x_6_1_3[3]; double x_6_1_4; double x_6_1_5; } x6; unsigned long long x7; bool x8; bool x9; int x10; bool x11; bool x12; bool x13; id x14; }*)_internalRepresentation;
- (void*)_render:(void*)arg1 withContext:(void*)arg2;
- (void)_set_YCC_matrix:(int)arg1 fullRange:(bool)arg2 depth:(int)arg3 isFloat:(float)arg4;
- (unsigned long long)alphaMode;
- (id)blendKernel;
- (bool)blendsInDestinationColorSpace;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (int)ditherDepth;
- (int)format;
- (unsigned long long)height;
- (id)imageRepresentation;
- (id)init;
- (id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 pixelBufferProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 surfaceProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(id /* block */)arg5;
- (bool)isClamped;
- (bool)isCompressed;
- (bool)isDithered;
- (bool)isFlipped;
- (id)label;
- (void)setAlphaMode:(unsigned long long)arg1;
- (void)setBlendKernel:(id)arg1;
- (void)setBlendsInDestinationColorSpace:(bool)arg1;
- (void)setClamped:(bool)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDithered:(bool)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setLabel:(id)arg1;
- (id)surface;
- (unsigned long long)width;

@end
