
@interface VNSegmentationGenerator : VNEspressoModelFileBasedDetector {
    struct BufferSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _espressoInputImageSize;
    struct BufferSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _espressoInputMaskSize;
    struct BufferSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _espressoMaskInputBufferSize;
    struct unordered_map<NSString *, apple::vision::BufferSize, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, apple::vision::BufferSize>>> { 
        struct __hash_table<std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, apple::vision::BufferSize>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::hash<NSString *>, std::equal_to<NSString *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::equal_to<NSString *>, std::hash<NSString *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _espressoMaskOutputBufferSizes;
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> { 
        struct __hash_table<std::__hash_value_type<NSString *, espresso_buffer_t>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, espresso_buffer_t>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _espressoMaskOutputBuffers;
}

@property (readonly) const struct BufferSize { unsigned long long x1; unsigned long long x2; }*espressoInputImageSize;
@property (readonly) const struct BufferSize { unsigned long long x1; unsigned long long x2; }*espressoInputMaskSize;
@property (readonly) const void*espressoMaskOutputBufferSizes;
@property (readonly) const void*espressoMaskOutputBuffers;
@property (nonatomic, readonly) struct BufferSize { unsigned long long x1; unsigned long long x2; } outputMaskSize;

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)outputConfidenceBlobNames;
+ (id)outputMaskBlobNameToFeatureName;
+ (id)requestInfoForRequest:(id)arg1;
+ (id)requestKeyToRequestInfo;
+ (bool)supportsTiling;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)bindOutputConfidenceBuffersAndReturnError:(id*)arg1;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (const struct BufferSize { unsigned long long x1; unsigned long long x2; }*)espressoInputImageSize;
- (const struct BufferSize { unsigned long long x1; unsigned long long x2; }*)espressoInputMaskSize;
- (const void*)espressoMaskOutputBufferSizes;
- (const void*)espressoMaskOutputBuffers;
- (void)initializeOutputConfidenceBuffers:(void*)arg1;
- (struct BufferSize { unsigned long long x1; unsigned long long x2; })outputMaskSize;
- (struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> { union { BOOL x_1_1_1; struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct __tuple_impl<std::__tuple_indices<0, 1>, std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct unordered_map<NSString *, __CVBuffer *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, __CVBuffer *>>> { struct __hash_table<std::__hash_value_type<NSString *, __CVBuffer *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, __CVBuffer *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { void **x_1_7_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { unsigned long long x_1_9_1; } x_2_8_1; } x_1_7_2; } x_1_6_1; } x_1_5_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> { void *x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })processLockedImageBuffer:(struct __CVBuffer { }*)arg1 inputMaskObservation:(id)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (struct __CVBuffer { }*)renderCIImage:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned int)arg4 computeDevice:(id)arg5 session:(id)arg6 error:(id*)arg7;
- (bool)validateMaskForBlobName:(id)arg1 options:(id)arg2 maskConfidence:(float*)arg3 maskAcceptable:(bool*)arg4 error:(id*)arg5;

@end
