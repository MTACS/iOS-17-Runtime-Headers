
@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> { 
        struct __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *>, std::allocator<std::__hash_node<AttachmentDescriptorSimple, void *>>> { 
                struct __hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, AttachmentDescriptorSimple::equal_t> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _attachmentSet;
    struct array<AttachmentDescriptorSimple, 8UL> { 
        struct AttachmentDescriptorSimple { 
            void *texture; 
            unsigned long long level; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } sliceRange; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } depthPlaneRange; 
            unsigned long long storeAction; 
        } __elems_[8]; 
    }  _currAttachments;
    _MTLCommandEncoder * _currentEncoder;
    bool  _didAddRenderTargetAttachments;
    struct unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> { 
        struct __hash_table<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>, std::allocator<std::__hash_node<MTLToolsObject *, void *>>> { 
                struct __hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<MTLToolsObject *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<MTLToolsObject *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _externallyRetainedObjects;
    struct unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> { 
        struct __hash_table<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>, std::allocator<std::__hash_node<MTLToolsObject *, void *>>> { 
                struct __hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<MTLToolsObject *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<MTLToolsObject *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _internallyRetainedObjects;
    struct array<AttachmentDescriptorSimple, 8UL> { 
        struct AttachmentDescriptorSimple { 
            void *texture; 
            unsigned long long level; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } sliceRange; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } depthPlaneRange; 
            unsigned long long storeAction; 
        } __elems_[8]; 
    }  _prevAttachments;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _purgeableObjectsLock;
    MTLToolsObject * _referencedDeadObject;
    struct unordered_set<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> { 
        struct __hash_table<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>, std::allocator<std::__hash_node<id<MTLDebugResourcePurgeable>, void *>>> { 
                struct __hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<id<MTLDebugResourcePurgeable>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<id<MTLDebugResourcePurgeable>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _referencedPurgeableObjects;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderTargetAttachmentLock;
    NSMutableSet * _renderTargetAttachments;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _retainedObjectsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeUsedRenderTargetsExcept:(id)arg1;
- (id)accelerationStructureCommandEncoder;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)arg1;
- (void)addActiveRenderTargets:(id)arg1;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)addObject:(id)arg1 retained:(bool)arg2 purgeable:(bool)arg3;
- (void)addPurgeableObject:(id)arg1;
- (void)addReferencedObject:(id)arg1 internallyRetained:(bool)arg2;
- (void)addScheduledHandler:(id /* block */)arg1;
- (void)addSynchronizationNotification:(id /* block */)arg1;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (void)commitWithDeadline:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long*)arg3 indices:(const unsigned long long*)arg4 count:(unsigned long long)arg5;
- (void)encodeDashboardTagForResourceGroup:(id)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 descriptor:(id)arg3;
- (void)lockPurgeableObjects;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)postCompletionHandlers;
- (void)preCommit;
- (void)preCompletionHandlers;
- (void)removeAllReferencedObjects:(bool)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (bool)testObjectReferenced:(id)arg1 wasInternallyRetained:(bool*)arg2;
- (void)unlockPurgeableObjects;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
