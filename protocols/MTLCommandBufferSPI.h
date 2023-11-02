
@protocol MTLCommandBufferSPI <MTLCommandBuffer>

@required

- (void)addPurgedHeap:(id <MTLHeap>)arg1;
- (void)addPurgedResource:(id <MTLResource>)arg1;
- (bool)commitAndWaitUntilSubmittedWithDeadline:(unsigned long long)arg1;
- (void)commitWithDeadline:(unsigned long long)arg1;
- (<MTLDeadlineProfile> *)deadlineProfile;
- (void)encodeConditionalAbortEvent:(id <MTLSharedEvent>)arg1;
- (void)encodeDashboardFinalizeForResourceGroup:(id <MTLResourceGroupSPI>)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;
- (void)encodeDashboardFinalizeForResourceGroup:(id <MTLResourceGroupSPI>)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long*)arg3 indices:(const unsigned long long*)arg4 count:(unsigned long long)arg5;
- (void)encodeDashboardTagForResourceGroup:(id <MTLResourceGroupSPI>)arg1;
- (void)encodeSignalEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (bool)isProfilingEnabled;
- (void)presentDrawable:(id <MTLDrawable>)arg1 options:(NSDictionary *)arg2;
- (NSDictionary *)profilingResults;
- (void)setLogs:(NSArray *)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (NSMutableDictionary *)userDictionary;

@optional

- (void)commitAndHold;
- (bool)commitAndWaitUntilSubmitted;
- (<MTLComputeCommandEncoder> *)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 substreamCount:(unsigned int)arg2;
- (void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
- (<MTLDebugCommandEncoder> *)debugCommandEncoder;
- (void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
- (void)encodeSignalEventScheduled:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (unsigned long long)getListIndex;
- (unsigned long long)globalTraceObjectID;
- (unsigned long long)protectionOptions;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (<MTLRenderCommandEncoder> *)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;

@end
