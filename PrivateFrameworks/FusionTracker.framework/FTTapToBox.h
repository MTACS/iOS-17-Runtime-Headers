
@interface FTTapToBox : NSObject {
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
    }  _inputImageTensor;
    struct unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>> { 
        struct __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _inputMap;
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
    }  _inputTapTensor;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _net;
    struct EspressoTensor { 
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
    }  _outputTensor;
}

+ (double)defaultConfidenceThreshold;
+ (id)networkDescriptor;
+ (struct CGSize { double x1; double x2; })networkInputImageSize;
+ (struct CGSize { double x1; double x2; })networkInputTapImageSize;
+ (id)networkPath;
+ (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })postProcessNetworkOutput:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
+ (bool)preprocessForTap:(struct CGPoint { double x1; double x2; })arg1 inSourceImageBuffer:(struct __CVBuffer { }*)arg2 destinationImageBuffer:(struct __CVBuffer { }*)arg3 tapBuffer:(struct __CVBuffer { }*)arg4 scaler:(id)arg5;
+ (bool)renderTap:(struct CGPoint { double x1; double x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })predictBoxForTap:(struct CGPoint { double x1; double x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 scaler:(id)arg3;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })predictionForTap:(struct CGPoint { double x1; double x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 scaler:(id)arg3;

@end
