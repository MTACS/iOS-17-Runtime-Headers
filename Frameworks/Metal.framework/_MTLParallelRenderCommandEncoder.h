
@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder> {
    bool  _StatEnabled;
    _MTLCommandBuffer<MTLCommandBuffer> * _commandBuffer;
    id * _commandBuffers;
    unsigned long long  _commandBuffersCount;
    unsigned long long  _commandBuffersSize;
    NSMutableArray * _debugSignposts;
    <MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    unsigned long long  _labelTraceID;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    bool  _needsFrameworkAssistedErrorTracking;
    unsigned long long  _numThisEncoder;
    <MTLFence> * _progressFence;
    <MTLCommandQueue> * _queue;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    bool  _retainedReferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (getter=getType, nonatomic, readonly) unsigned long long type;

- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getDriverUniqueID;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)initializeEnhancedCommandBufferErrors;
- (void)insertDebugSignpost:(id)arg1;
- (bool)isMemorylessRender;
- (void)popDebugGroup;
- (void)preEndEncoding;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;

@end
