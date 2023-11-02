
@interface CaptureMTLAccelerationStructureCommandEncoder : NSObject <CaptureMTLObject, MTLAccelerationStructureCommandEncoder> {
    <MTLAccelerationStructureCommandEncoderSPI> * _baseObject;
    NSMutableArray * _blitOperations;
    CaptureMTLCommandBuffer * _captureCommandBuffer;
    CaptureMTLDevice * _captureDevice;
    unsigned long long  _copyEventValue;
    NSMutableDictionary * _retainedDescriptorObjectsByStreamRef;
    NSMutableSet * _retainedObjects;
    struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; } * _traceContext;
    struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; } * _traceStream;
}

@property (readonly) <MTLAccelerationStructureCommandEncoder> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; }*traceContext;
@property (readonly) struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;
- (bool)conformsToProtocol:(id)arg1;
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;
- (id)device;
- (void)endEncoding;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2 copyEventValue:(unsigned long long)arg3;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (id)originalObject;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (bool)respondsToSelector:(SEL)arg1;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)setLabel:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; }*)traceContext;
- (struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; }*)traceStream;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id)arg1;
- (void)writeAccelerationStructureSerializationData:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeAccelerationStructureTraversalDepth:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;
- (void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;
- (bool)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 into:(id)arg2;
- (bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 into:(id)arg2;
- (void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;

@end
