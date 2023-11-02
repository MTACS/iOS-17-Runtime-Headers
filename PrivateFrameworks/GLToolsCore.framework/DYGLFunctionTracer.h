
@interface DYGLFunctionTracer : DYFunctionTracer {
    struct unordered_set<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { 
        struct __hash_table<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *>, std::allocator<std::__hash_node<unsigned int, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned int, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned int>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned int>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _programNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendTraceLine:(id)arg1 withFunction:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg2 iterArgument:(struct array_iterator<const GPUTools::FD::Argument> { struct Argument {} *x1; })arg3 argumentStrings:(id)arg4 returnVariable:(id)arg5;
- (void)_emitErrors:(id)arg1 function:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg2;
- (unsigned int)_objectNameFromVariable:(const char *)arg1;
- (void)_prependReceiver:(id)arg1 function:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg2;
- (void)_setCurrentReceiver:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg1;
- (bool)_skipFirstArgumentForFunction:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg1;
- (id)_stringForScalar1DArrayArgument:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 usingBlock:(id /* block */)arg2;
- (id)_stringWithNumber:(id)arg1 argument:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg2;
- (id)init;
- (id)typeStringForArgument:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1;
- (id)variableForGLSyncID:(unsigned long long)arg1;
- (id)variableForGLSyncIDNumber:(id)arg1;
- (id)variableForPBufferID:(unsigned long long)arg1;
- (id)variableForPBufferIDNumber:(id)arg1;
- (id)variableForPixelFormatID:(unsigned long long)arg1;
- (id)variableForPixelFormatIDNumber:(id)arg1;
- (id)variableForReceiverID:(unsigned long long)arg1;
- (id)variableForReceiverIDNumber:(id)arg1;

@end
