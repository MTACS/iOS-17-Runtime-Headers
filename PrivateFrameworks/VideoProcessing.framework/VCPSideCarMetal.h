
@interface VCPSideCarMetal : NSObject {
    <MTLComputePipelineState> * _blitKernel;
    struct MetalBufferPool { 
        NSMutableArray *pool_; 
        <MTLDevice> *device_; 
        unsigned long long allocSize_; 
        unsigned long long storageMode_; 
    }  _blockDist;
    <MTLCommandQueue> * _commandQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    int  _deblockBitdepth;
    <MTLComputePipelineState> * _deblockChromaH;
    <MTLComputePipelineState> * _deblockLumaH;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    struct MetalBufferPool { 
        NSMutableArray *pool_; 
        <MTLDevice> *device_; 
        unsigned long long allocSize_; 
        unsigned long long storageMode_; 
    }  _packetPool;
    unsigned int  _planeBytesPerRow;
    unsigned int  _planeOffset;
    NSDictionary * _readAttributes;
    NSDictionary * _readWriteAttributes;
    NSObject<OS_dispatch_queue> * _submissionQueue;
    bool  _supportsQuadPermute;
    bool  _supportsSIMDPermute;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheRGBAChroma;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheRGBALuma;
    <MTLComputePipelineState> * _transitionDetection;
    <MTLComputePipelineState> * _transitionDetectionUnorm;
    NSDictionary * _writeAttributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)compileDeblockForFrame:(struct __CVBuffer { }*)arg1;
- (id)compileFunction:(id)arg1;
- (id)compileFunction:(id)arg1 constantValues:(id)arg2;
- (void)compileTransitionDetection;
- (int)copyFromFrame:(struct __CVBuffer { }*)arg1 toTile:(struct __CVBuffer { }*)arg2 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 withFence:(void*)arg5;
- (int)copySubframe:(struct __CVBuffer { }*)arg1 toFrame:(struct __CVBuffer { }*)arg2 atOffset:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (struct future<CF<const __CFData *>> { void *x1; })createEncodePacket:(struct __CVBuffer { }*)arg1 forRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 instance:(unsigned int)arg3 sequenceNumber:(unsigned int)arg4 frameIndex:(unsigned int)arg5 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 frameProperties:(struct __CFDictionary { }*)arg8;
- (id)rgbaUintTextureForChroma:(struct __CVBuffer { }*)arg1 withAttributes:(id)arg2;
- (id)rgbaUintTextureForLuma:(struct __CVBuffer { }*)arg1 withAttributes:(id)arg2;
- (id)rgbaUnormTextureForLuma:(struct __CVBuffer { }*)arg1 withAttributes:(id)arg2;
- (int)selectGPUForFrame:(struct __CVBuffer { }*)arg1;
- (void)setPacketLayout:(id)arg1;
- (int)subframeDeblock:(struct __CVBuffer { }*)arg1 withOffsetsY:(unsigned int*)arg2 numEdges:(int)arg3;
- (struct future<unsigned long long> { void *x1; })temporalTransitionScore:(struct __CVBuffer { }*)arg1 previousFrame:(struct __CVBuffer { }*)arg2 forRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3;
- (id)uintTexture:(struct __CVBuffer { }*)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;
- (id)unormTexture:(struct __CVBuffer { }*)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;

@end
