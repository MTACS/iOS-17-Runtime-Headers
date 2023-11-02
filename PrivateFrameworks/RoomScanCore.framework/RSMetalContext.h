
@interface RSMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandBuffer> * _currentCommandBuffer;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLCommandBuffer> *currentCommandBuffer;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLLibrary> *library;

- (void).cxx_destruct;
- (id)beginCommandBuffer;
- (id)beginCommandBufferWithError:(id*)arg1;
- (id)commandQueue;
- (void)commitCommandBuffer;
- (void)commitCommandBufferShouldWaitUntilCompleted:(bool)arg1;
- (id)currentCommandBuffer;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1 libraryURL:(id)arg2 error:(id*)arg3;
- (id)library;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (id)newTextureByBindingIOSurface:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 usage:(unsigned long long)arg5 plane:(unsigned long long)arg6 error:(id*)arg7;

@end
