
@interface STSController : NSObject {
    struct STSActiveIndices { 
        unsigned long long m_activeLabels; 
    }  _activeIndices;
    struct stack<unsigned long, std::deque<unsigned long>> { 
        struct deque<unsigned long, std::allocator<unsigned long>> { 
            struct __split_buffer<unsigned long *, std::allocator<unsigned long *>> { 
                unsigned long long **__first_; 
                unsigned long long **__begin_; 
                unsigned long long **__end_; 
                struct __compressed_pair<unsigned long **, std::allocator<unsigned long *>> { 
                    unsigned long long **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _availableIndicesWithinSharedStorage;
    struct semaphore { 
        unsigned int mMachSem; 
        bool mOwned; 
    }  _controlSemaphore;
    unsigned long long  _globalGeneration;
    struct STSGlobalState { 
        unsigned long long hostTime; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } listenerTransform; 
    }  _globalState;
    struct unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> { 
        struct __hash_table<std::__hash_value_type<std::string, STSPerLabelControllerState>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, STSPerLabelControllerState>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _perLabelState;
    void * _sharedStorage;
    unsigned long long  _shmemSize;
    struct OpaqueFigSTS { } * _sts;
}

+ (unsigned long long)maxLabelLength;
+ (long long)maxNumberOfPerLabelStates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_updateGlobalState:(const struct STSGlobalState { unsigned long long x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; }*)arg1 didChange:(bool*)arg2 error:(id*)arg3;
- (void)cleanupAllLabels;
- (void)cleanupLabel:(struct __CFString { }*)arg1;
- (void)dealloc;
- (struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>> { struct __hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> { void *x_1_1_1; } x1; })ensureResourcesAllocatedForLabel:(struct __CFString { }*)arg1 error:(id*)arg2;
- (id)initWithSTSObject:(struct OpaqueFigSTS { }*)arg1 error:(id*)arg2;
- (bool)signalChangeWithError:(id*)arg1;
- (bool)updateGlobalState:(struct STSGlobalState { unsigned long long x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; }*)arg1 didChange:(bool*)arg2 error:(id*)arg3;
- (bool)updateGlobalState:(const struct STSGlobalState { unsigned long long x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; }*)arg1 labelStates:(const void*)arg2 additionalLabelInfo:(id)arg3 error:(id*)arg4;
- (bool)updateGlobalState:(const struct STSGlobalState { unsigned long long x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; }*)arg1 labelStates:(const void*)arg2 error:(id*)arg3;
- (bool)updateLabel:(struct __CFString { }*)arg1 state:(const struct STSPerLabelState { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; }*)arg2 didChange:(bool*)arg3 additionalInfo:(id)arg4 error:(id*)arg5;
- (bool)updateLabel:(struct __CFString { }*)arg1 state:(struct STSPerLabelState { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; }*)arg2 didChange:(bool*)arg3 error:(id*)arg4;

@end
