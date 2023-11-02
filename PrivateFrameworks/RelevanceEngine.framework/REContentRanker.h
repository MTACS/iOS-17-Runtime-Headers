
@interface REContentRanker : NSObject <REContentRankerProperties> {
    struct REContentFeatureExtractor { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } m_rwlock; 
        struct REFancyShrinkingDictionary { 
            struct unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>> { 
                struct __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned short>>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } m_mapDocumentFrequency; 
            unsigned long long m_maxSize; 
            unsigned long long m_shrinkSize; 
            int m_nVersion; 
            bool m_trimTop; 
            bool m_shinksOnTotalCount; 
        } m_trueTopTokens; 
        struct REFancyShrinkingDictionary { 
            struct unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>> { 
                struct __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned short>>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } m_mapDocumentFrequency; 
            unsigned long long m_maxSize; 
            unsigned long long m_shrinkSize; 
            int m_nVersion; 
            bool m_trimTop; 
            bool m_shinksOnTotalCount; 
        } m_falseTopTokens; 
    }  _extractor;
}

@property (nonatomic, readonly) NSString *negativeContent;
@property (nonatomic, readonly) NSString *positiveContent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)load:(id)arg1 error:(id*)arg2;
- (id)negativeContent;
- (long long)negativeMapSize;
- (id)positiveContent;
- (long long)positiveMapSize;
- (id)predict:(id)arg1;
- (bool)save:(id)arg1 error:(id*)arg2;
- (bool)train:(id)arg1 isPositive:(bool)arg2;

@end
