
@interface SIBoxBlurFilter : NSObject {
    <MTLTexture> * _1DBlur;
    <MTLBuffer> * _configBuffer;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _executionThreadgroup;
    <MTLComputePipelineState> * _horizontal;
    unsigned long long  _radius;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _size;
    <MTLComputePipelineState> * _vertical;
}

@property (nonatomic) unsigned long long radius;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 blurred:(id)arg3;
- (id)initWithFactory:(id)arg1 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 pixelFormat:(unsigned long long)arg3 andRadius:(unsigned long long)arg4;
- (unsigned long long)radius;
- (void)setRadius:(unsigned long long)arg1;

@end
