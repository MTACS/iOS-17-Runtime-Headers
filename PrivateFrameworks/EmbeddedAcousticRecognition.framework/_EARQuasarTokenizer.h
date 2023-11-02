
@interface _EARQuasarTokenizer : _EARTokenizer {
    struct BasicTextSanitizer { 
        int (**_vptr$TextSanitizer)(); 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mUnicodeOutliers; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mSpecialChars; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mDupSpacePattern; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mCtrlCharsPattern; 
        int state; 
        struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
            struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } UTF8_MAP; 
        struct unordered_map<char32_t, char32_t, std::hash<char32_t>, std::equal_to<char32_t>, std::allocator<std::pair<const char32_t, char32_t>>> { 
            struct __hash_table<std::__hash_value_type<char32_t, char32_t>, std::__unordered_map_hasher<char32_t, std::__hash_value_type<char32_t, char32_t>, std::hash<char32_t>, std::equal_to<char32_t>>, std::__unordered_map_equal<char32_t, std::__hash_value_type<char32_t, char32_t>, std::equal_to<char32_t>, std::hash<char32_t>>, std::allocator<std::__hash_value_type<char32_t, char32_t>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<char32_t, std::__hash_value_type<char32_t, char32_t>, std::hash<char32_t>, std::equal_to<char32_t>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<char32_t, std::__hash_value_type<char32_t, char32_t>, std::equal_to<char32_t>, std::hash<char32_t>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } unicode_map; 
    }  _sanitizer;
    struct shared_ptr<quasar::TextTokenizer> { 
        struct TextTokenizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tokenizer;
}

+ (id)extractModelRootFromNcsResourcePaths:(id)arg1 lexiconEnh:(id)arg2 tokenEnh:(id)arg3 itnEnh:(id)arg4;
+ (id)extractModelRootFromNcsRoot:(id)arg1;
+ (struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { struct TextTokenizer {} *x_1_1_1; } x1; })tokenizerWithModelRoot:(id)arg1;
+ (struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { struct TextTokenizer {} *x_1_1_1; } x1; })tokenizerWithNcsRoot:(id)arg1;
+ (struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { struct TextTokenizer {} *x_1_1_1; } x1; })tokenizerWithRecognizerConfigPath:(id)arg1;
+ (struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { struct TextTokenizer {} *x_1_1_1; } x1; })tokenizerWithTokenizerModelRoot:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelRoot:(id)arg1;
- (id)initWithNcsRoot:(id)arg1;
- (id)initWithTokenizerModelRoot:(id)arg1;
- (id)tokenize:(id)arg1;
- (id)tokenize:(id)arg1 limit:(unsigned long long)arg2;

@end
