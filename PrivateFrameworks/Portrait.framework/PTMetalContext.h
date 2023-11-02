
@interface PTMetalContext : NSObject <NSCopying> {
    bool  _allowCommandbufferAllocation;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
}

@property (nonatomic) bool allowCommandbufferAllocation;
@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic, retain) <MTLLibrary> *library;
@property (nonatomic, retain) <MTLPipelineLibrarySPI> *pipelineLibrary;

- (void).cxx_destruct;
- (bool)allowCommandbufferAllocation;
- (void)checkCurrentThreadEqualsCommandBufferThread;
- (id)commandBuffer;
- (id)commandQueue;
- (void)commit;
- (void)commitAndWaitUntilCompleted;
- (void)commitAndWaitUntilScheduled;
- (id)computePipelineStateFor:(id)arg1 withConstants:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (id)functionWithName:(id)arg1 withConstants:(id)arg2;
- (id)initWithCommandQueue:(id)arg1 bundleClass:(Class)arg2;
- (id)initWithDevice:(id)arg1 bundleClass:(Class)arg2;
- (bool)isCommandBufferCommitted;
- (id)library;
- (id)pipelineLibrary;
- (void)setAllowCommandbufferAllocation:(bool)arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)waitForIdle;

@end
