
@interface FRCMetalBase : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _mtlLibrary;
}

- (void).cxx_destruct;
- (id)createKernel:(id)arg1;
- (id)createKernel:(id)arg1 constantValues:(id)arg2;
- (id)createRenderKernel:(id)arg1 renderTargetFormat:(unsigned long long)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2;
- (id)newTextureCoordinateBufferWithWidth:(double)arg1 height:(double)arg2;
- (id)newVertexBuffer;

@end
