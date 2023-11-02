
@interface MTLLoader : NSObject {
    NSObject<OS_dispatch_queue> * _claimQueue;
    struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> { 
        struct __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _claims;
    void * _global;
}

+ (bool)ReadHashTable:(unsigned long long)arg1 begin:(unsigned int)arg2 end:(unsigned int)arg3 hashList:(void*)arg4 reader:(id /* block */)arg5 errorHandler:(id /* block */)arg6 handler:(id /* block */)arg7;
+ (bool)deserializeHashesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 singleHeaderExpected:(bool)arg3 reader:(id /* block */)arg4 errorHandler:(id /* block */)arg5 handler:(id /* block */)arg6;
+ (bool)deserializeObjectFromAIRNTHeaderAtSection:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; }*)arg1 reader:(id /* block */)arg2 errorHandler:(id /* block */)arg3 handler:(id /* block */)arg4;
+ (bool)deserializePipelinesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 singleHeaderExpected:(bool)arg3 reader:(id /* block */)arg4 errorHandler:(id /* block */)arg5 handler:(id /* block */)arg6;
+ (bool)isAIRHeaderExtLoadCommand:(const void*)arg1 headerOffset:(unsigned long long*)arg2 headerSize:(unsigned long long*)arg3 headerSection:(unsigned int*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (oneway void)dealloc;
- (id)init;

@end
