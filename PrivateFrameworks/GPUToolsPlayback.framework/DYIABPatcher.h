
@interface DYIABPatcher : NSObject {
    struct DYCommandBufferUID { 
        unsigned long long objectId; 
        unsigned int functionIndex; 
    }  _lastProcessedCommandBufferUid;
    struct unordered_map<unsigned long long, std::vector<PatchingRequest>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<PatchingRequest>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<PatchingRequest>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _optimizedPatchingMap;
    int  _patchingMode;
    struct unordered_map<DYCommandBufferUID, std::set<BufferEntry>, DYCommandBufferUIDHash, std::equal_to<DYCommandBufferUID>, std::allocator<std::pair<const DYCommandBufferUID, std::set<BufferEntry>>>> { 
        struct __hash_table<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, std::__unordered_map_hasher<DYCommandBufferUID, std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, DYCommandBufferUIDHash, std::equal_to<DYCommandBufferUID>>, std::__unordered_map_equal<DYCommandBufferUID, std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, std::equal_to<DYCommandBufferUID>, DYCommandBufferUIDHash>, std::allocator<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<DYCommandBufferUID, std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, DYCommandBufferUIDHash, std::equal_to<DYCommandBufferUID>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<DYCommandBufferUID, std::__hash_value_type<DYCommandBufferUID, std::set<BufferEntry>>, std::equal_to<DYCommandBufferUID>, DYCommandBufferUIDHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _perfectPatchingTable;
}

@property (nonatomic, readonly) int patchingMode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)findPatchingRequest:(struct DYCommandBufferUID { unsigned long long x1; unsigned int x2; })arg1;
- (id)initWithPatchingMode:(int)arg1;
- (void)insertPatchingOp:(struct DYIABPatchingOp { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg1 commandBufferUid:(struct DYCommandBufferUID { unsigned long long x1; unsigned int x2; })arg2;
- (bool)patchBuffer:(unsigned long long)arg1 bufferData:(void*)arg2 bufferLength:(unsigned long long)arg3 objectMap:(const void*)arg4;
- (bool)patchBuffers:(struct DYCommandBufferUID { unsigned long long x1; unsigned int x2; })arg1 objectMap:(const void*)arg2 commandQueue:(id)arg3;
- (int)patchingMode;
- (bool)readPatchingTable:(id)arg1;
- (bool)writePatchingTableAsJson:(id)arg1;

@end
