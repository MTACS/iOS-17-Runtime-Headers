
@interface MTLDebugAccelerationStructureCommandEncoder : MTLToolsAccelerationStructureCommandEncoder {
    bool  canDealloc;
    bool  canEndEncoding;
    bool  hasEndedEncoding;
}

- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;
- (bool)checkEncoderState;
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;
- (id)initWithAccelerationStructureCommandEncoder:(id)arg1 parent:(id)arg2;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)validateRefit:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)writeAccelerationStructureSerializationData:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeAccelerationStructureTraversalDepth:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
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
