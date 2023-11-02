
@interface DYJSScriptingContext : NSObject {
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> { 
        struct __hash_table<std::__hash_value_type<const char *, OpaqueJSValue *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, OpaqueJSValue *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _cache;
    JSContext * _context;
    id /* block */  _exceptionHandler;
    NSString * _filename;
    struct OpaqueJSValue { } * _globalObject;
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> { 
        struct __hash_table<std::__hash_value_type<const char *, OpaqueJSString *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, OpaqueJSString *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _stringCache;
    JSVirtualMachine * _virtualMachine;
}

@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, copy) id /* block */ exceptionHandler;
@property (nonatomic, readonly) JSVirtualMachine *virtualMachine;

+ (id)sharedContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSString { }*)_cachedStringFromString:(const char *)arg1;
- (void)_clearCache;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })_jsStringToString:(struct OpaqueJSString { }*)arg1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })_jsValueToString:(struct OpaqueJSValue { }*)arg1;
- (void)allocNewContext;
- (double)callFunction:(id)arg1 withArguments:(id)arg2;
- (double)callGlobalFunction:(const char *)arg1;
- (id)context;
- (struct OpaqueJSValue { }*)createArrayRef:(id)arg1;
- (void)dealloc;
- (bool)evaluteScript:(id)arg1 scriptURL:(id)arg2;
- (id /* block */)exceptionHandler;
- (double)getGlobalDouble:(const char *)arg1;
- (id)getGlobalJSONObject:(const char *)arg1;
- (id)getValue:(id)arg1;
- (id)init;
- (void)setExceptionHandler:(id /* block */)arg1;
- (void)setGlobalDouble:(const char *)arg1 value:(double)arg2;
- (bool)setGlobalJSONObject:(const char *)arg1 value:(id)arg2;
- (void)setRawArrayValues:(id)arg1 withUint32Values:(unsigned int*)arg2 andNumCounters:(unsigned long long)arg3;
- (void)setRawArrayValues:(id)arg1 withUint64Values:(unsigned long long*)arg2 andNumCounters:(unsigned long long)arg3;
- (id)setValue:(id)arg1 value:(id)arg2;
- (void)setValues:(id)arg1;
- (id)virtualMachine;

@end
