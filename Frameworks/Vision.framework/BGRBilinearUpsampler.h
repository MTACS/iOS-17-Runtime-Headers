
@interface BGRBilinearUpsampler : NSObject <BGRPostProcessing> {
    MPSImageBilinearScale * _bilinearScale;
    MPSImageGaussianBlur * _blurFilter;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    double  _featheringSigma;
    <MTLLibrary> * _library;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CVMetalTextureCache { } * _metalTextureCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double featheringSigma;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyEspressoMask:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 toImage:(struct __CVBuffer { }*)arg2 highResMaskBuffer:(struct __CVBuffer { }*)arg3;
- (bool)applyPixelBufferMask:(struct __CVBuffer { }*)arg1 toImage:(struct __CVBuffer { }*)arg2 highResMaskBuffer:(struct __CVBuffer { }*)arg3;
- (bool)applyTextureMask:(id)arg1 toImage:(struct __CVBuffer { }*)arg2 highResMaskBuffer:(struct __CVBuffer { }*)arg3;
- (id)computePipelineStateFor:(id)arg1;
- (id)createTextureOfSize:(struct CGSize { double x1; double x2; })arg1 withFormat:(unsigned long long)arg2;
- (void)dealloc;
- (double)featheringSigma;
- (bool)handlePostProcessingRequest:(struct { struct __CVBuffer {} *x1; struct { /* ? */ } *x2; struct __CVBuffer {} *x3; }*)arg1;
- (id)init;
- (id)initWithMetalDevice:(id)arg1;
- (id)libraryReturnError:(id*)arg1;
- (void)setFeatheringSigma:(double)arg1;
- (id)textureFromPixelBuffer:(struct __CVBuffer { }*)arg1 format:(unsigned long long)arg2;

@end
