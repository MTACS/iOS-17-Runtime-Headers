
@interface VNPersonSegmentationGeneratorInstanceBased4People : VNSegmentationGenerator {
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
    }  _espressoConfidencesOutputBuffer;
}

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (bool)inputMaskRequired;
+ (id)outputConfidenceBlobNames;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (bool)rotateImageToMatchNetworkOrientation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)bindOutputConfidenceBuffersAndReturnError:(id*)arg1;
- (void)initializeOutputConfidenceBuffers:(void*)arg1;
- (bool)validateMaskForBlobName:(id)arg1 options:(id)arg2 maskConfidence:(float*)arg3 maskAcceptable:(bool*)arg4 error:(id*)arg5;

@end
