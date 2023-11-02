
@protocol MTLAccelerationStructureCommandEncoderSPI <MTLCommandEncoderSPI, MTLAccelerationStructureCommandEncoder>

@required

- (void)deserializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 primitiveAccelerationStructures:(NSArray *)arg2 fromBuffer:(id <MTLBuffer>)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id <MTLAccelerationStructure>)arg1 primitiveAccelerationStructures:(NSArray *)arg2 fromBuffer:(id <MTLBuffer>)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializePrimitiveAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)serializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)serializeInstanceAccelerationStructure:(id <MTLAccelerationStructure>)arg1 primitiveAccelerationStructures:(NSArray *)arg2 toBuffer:(id <MTLBuffer>)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)serializePrimitiveAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)writeDeserializedAccelerationStructureSize:(id <MTLBuffer>)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 sizeBufferOffset:(unsigned long long)arg4;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id <MTLBuffer>)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 sizesBufferOffset:(unsigned long long)arg4;
- (void)writeGeometryOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 geometryBufferOffset:(unsigned long long)arg3;
- (void)writeGeometrySizeOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 sizeBufferOffset:(unsigned long long)arg3;
- (void)writeSerializedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 sizeBufferOffset:(unsigned long long)arg3;

@optional

- (void)deserializeInstanceAccelerationStructure:(id <MTLAccelerationStructure>)arg1 primitiveAccelerationStructures:(NSArray *)arg2 fromBuffer:(id <MTLBuffer>)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(MTLAccelerationStructureDescriptor *)arg5;
- (void)deserializePrimitiveAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(MTLAccelerationStructureDescriptor *)arg4;
- (void)writeAccelerationStructureSerializationData:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3;
- (void)writeAccelerationStructureTraversalDepth:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3;
- (void)writeGenericBVHStructureOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 headerBuffer:(id <MTLBuffer>)arg2 headerBufferOffset:(unsigned long long)arg3 innerNodeBuffer:(id <MTLBuffer>)arg4 innerNodeBufferOffset:(unsigned long long)arg5 leafNodeBuffer:(id <MTLBuffer>)arg6 leafNodeBufferOffset:(unsigned long long)arg7 primitiveBuffer:(id <MTLBuffer>)arg8 primitiveBufferOffset:(unsigned long long)arg9 geometryBuffer:(id <MTLBuffer>)arg10 geometryOffset:(unsigned long long)arg11 instanceTransformBuffer:(id <MTLBuffer>)arg12 instanceTransformOffset:(unsigned long long)arg13;
- (bool)writeGenericBVHStructureOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 into:(MTLGenericBVHBuffersSPI *)arg2;
- (bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 into:(MTLGenericBVHBufferSizesSPI *)arg2;
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 sizesBufferOffset:(unsigned long long)arg3;

@end
