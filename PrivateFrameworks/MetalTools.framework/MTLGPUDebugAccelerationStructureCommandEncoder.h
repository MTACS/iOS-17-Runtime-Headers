
@interface MTLGPUDebugAccelerationStructureCommandEncoder : MTLToolsAccelerationStructureCommandEncoder {
    MTLAccelerationStructurePassDescriptor * _accelerationStructurePassDescriptor;
    <MTLLibrary> * _accelerationStructureSupportLibrary;
    MTLGPUDebugCommandBuffer * _commandBuffer;
    struct list<id<MTLHeap>, std::allocator<id<MTLHeap>>> { 
        struct __list_node_base<id<MTLHeap>, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<id<MTLHeap>, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _heapList;
    struct list<resourceAndUsage, std::allocator<resourceAndUsage>> { 
        struct __list_node_base<resourceAndUsage, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<resourceAndUsage, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _resourceAndUsageList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)blitAccelerationStructureType:(unsigned long long)arg1 toAccelerationStructure:(id)arg2;
- (void)blitChildrenWrappersBufferAddress:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)blitChildrenWrappersBufferFromAcceleratrionStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)blitInstanceTypetoAccelerationStructure:(id)arg1;
- (void)blitPrimitiveTypetoAccelerationStructure:(id)arg1;
- (void)blitTypeFromAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)blitTypeFromAccelerationStructureDescriptor:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (id)createChildrenWrappersBufferWithASDescriptor:(id)arg1;
- (id)createChildrenWrappersBufferWithIASDescriptor:(id)arg1;
- (id)createChildrenWrappersBufferWithIndirectIASDescriptor:(id)arg1;
- (id)createChildrenWrappersBufferWithInstanceDescriptorBuffer:(id)arg1 maxInstanceCount:(unsigned long long)arg2 instanceCountBuffer:(id)arg3 instanceCountBufferOffset:(unsigned long long)arg4 instanceDescriptorStride:(unsigned long long)arg5 instanceDescriptorBufferOffset:(unsigned long long)arg6 instanceDescriptorType:(unsigned long long)arg7 accelerationStructureIDs:(id)arg8;
- (void)dealloc;
- (void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;
- (void)destroyBaseAccelerationStructureCommandEncoder;
- (id)encodeUnwrapAccelerationStructureDescriptor:(id)arg1;
- (void)endEncoding;
- (id)initWithAccelerationStructureCommandEncoder:(id)arg1 parent:(id)arg2 accelerationStructurePassDescriptor:(id)arg3;
- (void)newBaseAccelerationStructureCommandEncoder;
- (id)psoWithFunctionName:(id)arg1;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id)arg1;
- (void)writeAccelerationStructureSerializationData:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;
- (void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;
- (void)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 headerBuffer:(id)arg2 headerBufferOffset:(unsigned long long)arg3 innerNodeBuffer:(id)arg4 innerNodeBufferOffset:(unsigned long long)arg5 leafNodeBuffer:(id)arg6 leafNodeBufferOffset:(unsigned long long)arg7 primitiveBuffer:(id)arg8 primitiveBufferOffset:(unsigned long long)arg9 geometryBuffer:(id)arg10 geometryOffset:(unsigned long long)arg11 instanceTransformBuffer:(id)arg12 instanceTransformOffset:(unsigned long long)arg13;
- (bool)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 into:(id)arg2;
- (bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 into:(id)arg2;
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizesBufferOffset:(unsigned long long)arg3;
- (void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3;
- (void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;
- (void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;

@end
