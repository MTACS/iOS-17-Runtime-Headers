
@interface ML3SpotlightMatchingNameCache : NSObject {
    bool  _idle;
    ML3MusicLibrary * _library;
    NSString * _matchString;
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { 
        struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _matchingSet;
}

+ (void)initialize;
+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(id /* block */)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(id /* block */)arg3;
- (void)dealloc;

@end
