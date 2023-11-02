
@interface VCPSpillmapMetalSession : NSObject {
    MPSImageBilinearScale * _bilinearScale;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    MPSImageGaussianBlur * _gaussianBlur;
    MTLTextureDescriptor * _intermediateImageDescriptor;
    NSDictionary * _readAttributes;
    NSDictionary * _readWriteAttributes;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _spillBufferPoolHDCPType0;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _spillBufferPoolHDCPType1;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _spillBufferPoolScreenScrapingProtected;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _spillBufferPoolUnprotected;
    struct CF<__CFDictionary *> { 
        struct __CFDictionary {} *value_; 
    }  _spillmapBufferProperties;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheBGRA;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheSpillmap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer { }*)arg1 emitSpillmap:(struct __CVBuffer {}**)arg2 setLayout:(int)arg3;
- (int)configureGPU;
- (int)configureIntermediateTextureProcessing:(int)arg1 setHeight:(int)arg2 setSigma:(float)arg3;
- (int)configureSession:(struct __IOSurface { }*)arg1 setWidth:(int)arg2 setHeight:(int)arg3;
- (id)init;
- (id)loadTexture:(struct __CVBuffer { }*)arg1 withAttributes:(id)arg2 forPlane:(unsigned int)arg3 withCache:(struct __CVMetalTextureCache { }*)arg4 withFormat:(unsigned long long)arg5;

@end
