
@interface ANSTBaseNetworkEspresso : NSObject {
    void * _context;
    NSSet * _disabledOutputSet;
    bool  _enablePreprocess;
    long long  _engineType;
    struct unordered_map<std::string, std::vector<unsigned long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::vector<unsigned long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::vector<unsigned long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _expectedDimensions;
    struct unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> { 
        struct __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _input_espresso_buffer;
    bool  _isPrepared;
    NSString * _netFileName;
    NSString * _netPath;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    NSString * _networkResolution;
    struct unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> { 
        struct __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _outputBufferMap;
    struct unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> { 
        struct __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _outputPixelBufMap;
    void * _plan;
    int  _planPriority;
    struct { 
        float bias_r; 
        float bias_g; 
        float bias_b; 
        float scale; 
        bool network_wants_bgr; 
    }  _preprocessor;
    bool  _useManagedBuffers;
}

@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) NSSet *disabledOutputSet;
@property (nonatomic, readonly) bool enablePreprocess;
@property (nonatomic, readonly) long long engineType;
@property (nonatomic, readonly) struct { void *x1; int x2; } network;
@property (nonatomic, readonly) NSString *networkResolution;
@property (nonatomic, readonly) void*plan;
@property (nonatomic, readonly) int planPriority;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; bool x5; } preprocessor;
@property (nonatomic, readonly) bool useManagedBuffers;

+ (bool)supportsANE;
+ (id)tracingEntryFormat;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithNetworkEngine:(long long)arg1 qualityOfService:(unsigned int)arg2 networkName:(id)arg3 networkFileName:(id)arg4 networkResolution:(id)arg5;
- (bool)bindNetworkInputWithEspressoBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 withInputName:(id)arg2;
- (bool)bindNetworkInputWithImage:(struct __CVBuffer { }*)arg1 withInputName:(id)arg2;
- (bool)bindNetworkOutput:(const char *)arg1;
- (bool)buildPlan;
- (void)cleanUpOutputPixelBufferMap;
- (void*)context;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)createEsressoTensorDimension:(unsigned long long*)arg1 dtype:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)disabledOutputSet;
- (bool)enablePreprocess;
- (long long)engineType;
- (bool)getBlobDimensionByName:(const char *)arg1 andDestination:(unsigned long long*)arg2;
- (unsigned long long)getInputChannels:(id)arg1;
- (unsigned long long)getInputHeight:(id)arg1;
- (unsigned long long)getInputLength:(id)arg1;
- (unsigned long long)getInputWidth:(id)arg1;
- (id)getOpsForLibrary;
- (struct __CVBuffer { }*)getOutPixelBufferByName:(const char *)arg1;
- (unsigned long long)getOutputChannels:(id)arg1;
- (unsigned long long)getOutputHeight:(id)arg1;
- (unsigned long long)getOutputLength:(id)arg1;
- (unsigned long long)getOutputRowElements:(id)arg1;
- (unsigned long long)getOutputWidth:(id)arg1;
- (void*)getRawOutput:(id)arg1;
- (struct CGSize { double x1; double x2; })getResolutionByBlobName:(const char *)arg1;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)getTensorByName:(const char *)arg1;
- (bool)initContext;
- (bool)initMLNetwork;
- (bool)initNetwork;
- (bool)initNetworkOutput;
- (bool)initPlan;
- (void)initPreprocess;
- (id)initWithNetworkEngine:(long long)arg1 qualityOfService:(unsigned int)arg2 networkName:(id)arg3;
- (id)initWithNetworkEngine:(long long)arg1 qualityOfService:(unsigned int)arg2 networkName:(id)arg3 networkFileName:(id)arg4;
- (id)initWithNetworkEngine:(long long)arg1 qualityOfService:(unsigned int)arg2 networkName:(id)arg3 networkResolution:(id)arg4;
- (id)initWithNetworkPath:(id)arg1 engine:(long long)arg2 networkMode:(id)arg3 directAccessOutputBuffer:(bool)arg4;
- (bool)isUsingANE;
- (struct { void *x1; int x2; })network;
- (id)networkResolution;
- (id)networkVersion;
- (void*)plan;
- (int)planPriority;
- (void)postSetup;
- (void)preSetup;
- (bool)prepare;
- (struct { float x1; float x2; float x3; float x4; bool x5; })preprocessor;
- (bool)runNetwork;
- (void)setExpectedDimension:(const char *)arg1 andDimension:(unsigned long long*)arg2;
- (bool)setInput:(id)arg1 fromCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (bool)setInput:(id)arg1 fromRawPointer:(const void*)arg2;
- (bool)supportFloat16IO;
- (bool)supportZeroCopyOutput;
- (bool)switchConfiguration:(id)arg1;
- (id)tracingEntry;
- (void)updateOutputBlobMap;
- (bool)useManagedBuffers;
- (bool)validateNetworkOutputDimension;

@end
