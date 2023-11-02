
@protocol MTLAccelerationStructureCommandEncoder <MTLCommandEncoder>

@required

- (void)buildAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 scratchBuffer:(id <MTLBuffer>)arg3 scratchBufferOffset:(unsigned long long)arg4;
- (void)copyAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toAccelerationStructure:(id <MTLAccelerationStructure>)arg2;
- (void)copyAndCompactAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toAccelerationStructure:(id <MTLAccelerationStructure>)arg2;
- (void)refitAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 destination:(id <MTLAccelerationStructure>)arg3 scratchBuffer:(id <MTLBuffer>)arg4 scratchBufferOffset:(unsigned long long)arg5;
- (void)refitAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 destination:(id <MTLAccelerationStructure>)arg3 scratchBuffer:(id <MTLBuffer>)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)sampleCountersInBuffer:(id <MTLCounterSampleBuffer>)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)useHeap:(id <MTLHeap>)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)writeCompactedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3;
- (void)writeCompactedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;

@end
