
@interface MTLToolsIOCommandQueue : MTLToolsObject <MTLIOCommandQueueSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)barrier;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)dealloc;
- (void)enqueueBarrier;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (void)setLabel:(id)arg1;

@end
