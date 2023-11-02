
@interface LSOpenStagingDirectoryManager : NSObject {
    <LSOpenStagingDirectoryManagerIOPersonality> * _ioPersonality;
    struct optional<unsigned long long> { 
        union { 
            BOOL __null_state_; 
            unsigned long long __val_; 
        } ; 
        bool __engaged_; 
    }  _mainStagingDirectoryKey;
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mutex;
    unsigned long long  _personaGeneration;
    struct unordered_map<unsigned long long, LaunchServices::StagingDirectoryInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, LaunchServices::StagingDirectoryInfo>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _stagingDirectoryInfoMap;
}

+ (id)sharedServerInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_locked_stagingDirectoryForKey:(unsigned long long)arg1;
- (void)_locked_updatePersonaStagingDirectories;
- (id)_stagingDirectoryForKeyRefreshingIfNecessary:(unsigned long long)arg1;
- (struct optional<unsigned long long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })bootstrapBaseStagingDirectoryNode:(id)arg1 error:(id*)arg2;
- (id)initWithIOPersonality:(id)arg1;
- (id)mainDataVolumeStagingURLWithError:(id*)arg1;
- (id)stagingDirectoryForCloningFileHandle:(id)arg1 error:(id*)arg2;
- (id)stagingDirectoryForCloningURL:(id)arg1 error:(id*)arg2;

@end
