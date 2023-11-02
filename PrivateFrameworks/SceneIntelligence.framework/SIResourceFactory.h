
@interface SIResourceFactory : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandQueueSPI> * _commandQueueSPI;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    <MTLSharedEvent> * _sharedEvent;
}

@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLLibrary> *library;

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)commandBufferOnCustomQueue;
- (id)commandBufferOnCustomQueueWithoutComputePreemption;
- (id)customCommandQueue;
- (id)device;
- (id)dictionaryFromTexture:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)library;
- (id)newComputePipelineStateWithName:(id)arg1;
- (id)newComputePipelineStateWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (id)newCubemapWithFormat:(struct SIImageFormat_struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; })arg1;
- (id)newFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (id)newIOSurfaceBackedTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3;
- (id)newTextureFromIOSurface:(struct __IOSurface { }*)arg1;
- (id)newTextureFromPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; })arg1;
- (id)newTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3;
- (id)sharedEvent;

@end
