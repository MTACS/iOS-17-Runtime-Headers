
@interface FTCinematicTapToTrack : NSObject {
    <MTLCommandQueue> * _commandQueue;
    struct PixelBufferTensor { 
        int (**_vptr$Tensor)(); 
        int type_; 
        struct TensorShape { 
            struct vector<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } sizes_; 
        } shape_; 
        struct shared_ptr<ik::TensorStorage> { 
            struct TensorStorage {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } storage_; 
    }  _exemplarCrop;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _exemplarNet;
    FTNetworkDescriptor * _exemplarNetDesc;
    struct PixelBufferTensor { 
        int (**_vptr$Tensor)(); 
        int type_; 
        struct TensorShape { 
            struct vector<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } sizes_; 
        } shape_; 
        struct shared_ptr<ik::TensorStorage> { 
            struct TensorStorage {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } storage_; 
    }  _instanceCrop;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _instanceNet;
    FTNetworkDescriptor * _instanceNetDesc;
    FTTapToTrackPreprocessor * _preprocessor;
    <FTScaling> * _scaler;
    FTTapToBox * _tapToBox;
    FTCinematicTracker * _tracker;
}

+ (id)tracker;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct EspressoConfig { struct vector<std::string, std::allocator<std::string>> { void *x_1_1_1; void *x_1_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_1_1_3; } x1; struct optional<espresso_engine_t> { union { BOOL x_1_2_1; int x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2; int x3; int x4; int x5; struct optional<espresso_plan_priority_t> { union { BOOL x_1_2_1; int x_1_2_2; } x_6_1_1; bool x_6_1_2; } x6; struct optional<void *> { union { BOOL x_1_2_1; void *x_1_2_2; } x_7_1_1; bool x_7_1_2; } x7; struct unordered_map<std::string, espresso_simple_image_preprocessing_params_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_simple_image_preprocessing_params_t>>> { struct __hash_table<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> { void **x_1_4_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; })_espressoConfigFromDescriptor:(id)arg1 engine:(const void*)arg2;
- (id)_maybeFetchTrackByCommittingState:(id)arg1;
- (void)_preprocessBuffer:(struct __CVBuffer { }*)arg1 andValidateState:(id)arg2 isOp:(long long)arg3;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })_resolveNetworkPath:(id)arg1;
- (void)_setupNetworksWithEngine:(const void*)arg1;
- (void)_setupScalerWithBackend:(int)arg1;
- (bool)_unsafeStartTrackingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 colorBuffer:(struct __CVBuffer { }*)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })_unsafeStepTrackingWithFrame:(struct __CVBuffer { }*)arg1;
- (id)initWithEspressoEngine:(int)arg1 scalingBackend:(int)arg2 commandQueue:(id)arg3;
- (bool)isTrackingActive;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })predictRectForPoint:(struct CGPoint { double x1; double x2; })arg1 inColorBuffer:(struct __CVBuffer { }*)arg2;
- (bool)reset;
- (bool)startTrackingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 colorBuffer:(struct __CVBuffer { }*)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })stepTrackingWithFrame:(struct __CVBuffer { }*)arg1;

@end
