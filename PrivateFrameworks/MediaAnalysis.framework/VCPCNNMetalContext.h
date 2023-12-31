
@interface VCPCNNMetalContext : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
}

@property (retain) <MTLCommandBuffer> *commandBuffer;
@property (retain) <MTLCommandQueue> *commandQueue;
@property (retain) <MTLDevice> *device;

+ (id)sharedCommandQueue;
+ (bool)supportGPU;
+ (bool)supportVectorForward;

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)commandQueue;
- (id)device;
- (int)execute;
- (id)initNewContext:(bool)arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;

@end
