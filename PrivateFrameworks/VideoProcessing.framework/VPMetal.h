
@interface VPMetal : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    struct MetalBufferPool { 
        NSMutableArray *pool_; 
        <MTLDevice> *device_; 
        unsigned long long allocSize_; 
        unsigned long long storageMode_; 
    }  _histogramBufferPool;
    MPSImageHistogram * _histogramKernel;
    NSDictionary * _readAttributes;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheRGBALuma;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct future<CF<const __CFData *>> { void *x1; })generateHistogramMetal:(struct __CVBuffer { }*)arg1 forRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 validate:(bool)arg3;
- (id)init;
- (int)initWithDevice:(struct __CVBuffer { }*)arg1;
- (id)loadTextureRGBAUnorm:(struct __CVBuffer { }*)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;

@end
