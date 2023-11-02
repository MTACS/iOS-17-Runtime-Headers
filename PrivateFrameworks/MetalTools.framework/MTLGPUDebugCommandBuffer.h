
@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _allocationLock;
    struct BufferUsageTable { 
        <MTLBuffer> *_backingMemory; 
    }  _bufferUsageTables;
    unsigned int  _currentEncoderID;
    struct MetalBuffer { 
        struct MetalBufferHeap {} *heap; 
        unsigned int index; 
    }  _currentPooledBuffer;
    unsigned long long  _currentPooledBufferOffset;
    unsigned int  _currentReportID;
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::allocator<NSString *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString **, std::allocator<NSString *>>="__value_"^@}}' */ struct vector<NSString *, std::allocator<NSString *>> { 
        __end_ **__begin_; 
    }  _encoderLabels;
    <MTLBuffer> * _fragmentReportBuffer;
    unsigned long long  _fragmentReportOffset;
    bool  _hasDeferredBindingObjectAndMeshReportBuffers;
    struct HeapUsageTable { 
        struct vector<std::pair<MTLGPUDebugHeap *, unsigned long>, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::pair<MTLGPUDebugHeap *, unsigned long> *, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> { 
                void *__value_; 
            } __end_cap_; 
        } _heapStages; 
    }  _heapUsageTable;
    bool  _initialized;
    struct Options { unsigned int x1; int x2; int x3; int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; unsigned int x_6_1_6 : 1; unsigned int x_6_1_7 : 1; unsigned int x_6_1_8 : 1; unsigned int x_6_1_9 : 1; unsigned int x_6_1_10 : 1; unsigned int x_6_1_11 : 1; unsigned int x_6_1_12 : 1; unsigned int x_6_1_13 : 1; unsigned int x_6_1_14 : 1; unsigned int x_6_1_15 : 1; unsigned int x_6_1_16 : 1; unsigned int x_6_1_17 : 1; unsigned int x_6_1_18 : 1; unsigned int x_6_1_19 : 1; unsigned int x_6_1_20 : 1; unsigned int x_6_1_21 : 1; unsigned int x_6_1_22 : 1; unsigned int x_6_1_23 : 1; unsigned int x_6_1_24 : 1; unsigned int x_6_1_25 : 1; unsigned int x_6_1_26 : 1; unsigned int x_6_1_27 : 1; unsigned int x_6_1_28 : 1; unsigned int x_6_1_29 : 1; unsigned int x_6_1_30 : 1; unsigned int x_6_1_31 : 1; unsigned int x_6_1_32 : 1; unsigned int x_6_1_33 : 1; unsigned int x_6_1_34 : 1; unsigned int x_6_1_35 : 1; } x6; } * _options;
    /* Warning: unhandled struct encoding: '{vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>>="__value_"^@}}' */ struct vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> { 
        __end_ **__begin_; 
    }  _reportBufferList;
    struct vector<ReportBufferEntry, std::allocator<ReportBufferEntry>> { 
        struct ReportBufferEntry {} *__begin_; 
        struct ReportBufferEntry {} *__end_; 
        struct __compressed_pair<ReportBufferEntry *, std::allocator<ReportBufferEntry>> { 
            struct ReportBufferEntry {} *__value_; 
        } __end_cap_; 
    }  _reportEntryList;
    <MTLArgumentEncoder> * _stageArgumentEncoder;
    bool  _supportsMeshStage;
    bool  _supportsTileStage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tempBufLock;
    struct TextureUsageTable { 
        <MTLBuffer> *_backingMemory; 
    }  _textureUsageTables;
    struct vector<MetalBuffer, std::allocator<MetalBuffer>> { 
        struct MetalBuffer {} *__begin_; 
        struct MetalBuffer {} *__end_; 
        struct __compressed_pair<MetalBuffer *, std::allocator<MetalBuffer>> { 
            struct MetalBuffer {} *__value_; 
        } __end_cap_; 
    }  _usedBuffers;
    <MTLBuffer> * _vertexComputeReportBuffer;
    unsigned long long  _vertexComputeReportOffset;
}

@property (readonly) MTLGPUDebugDevice *device;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ReportBufferEntry { unsigned long long x1; id x2; unsigned long long x3; })_allocReportEntryStorageForType:(unsigned long long)arg1;
- (void)_checkReportBuffers;
- (void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2;
- (void)_lateInit;
- (id)_newReportBuffer;
- (struct pair<id<MTLBuffer>, unsigned long> { id x1; unsigned long long x2; })_temporaryBufferWithLength:(unsigned long long)arg1;
- (id)accelerationStructureCommandEncoder;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)arg1;
- (void)beginUseOfMeshShadersInEncoder:(id)arg1;
- (void)beginingEncoder:(id)arg1 type:(unsigned long long)arg2;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (id)encodeBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 resultOffset:(unsigned long long*)arg4;
- (void)encodeResourceTableBuffers:(id)arg1 type:(unsigned long long)arg2;
- (id)encoderIdentifierForEncoderIndex:(unsigned int)arg1;
- (void)endingEncoder:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 descriptor:(id)arg3;
- (void)markAccelerationStructure:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)markBuffer:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)markHeap:(id)arg1 stages:(unsigned long long)arg2;
- (void)markTexture:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)preCommit;
- (void)preCompletionHandlers;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (int)resourceUsageForBuffer:(id)arg1 stage:(unsigned long long)arg2;
- (int)resourceUsageForTexture:(id)arg1 stage:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;

@end
