
@interface MTLGPUDebugHeap : MTLToolsHeap {
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _accelerationStructureIndices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accelerationStructureLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _bufferIndices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferLock;
    bool  _enableResourceUsageValidation;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _textureIndices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _textureLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_newGPUDebugAccelerationStructure:(id)arg1;
- (void)enumerateBufferIndices:(id /* block */)arg1;
- (void)enumerateTextureIndices:(id /* block */)arg1;
- (id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (void)notifyResourceReleasing:(id)arg1;

@end
