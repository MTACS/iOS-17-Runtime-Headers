
@interface RSWallOpeningOfflineDetector : NSObject {
    struct Lcnn_floorplan_detector { 
        int (**_vptr$Lcnn_floorplan_detector)(); 
        struct Unet_fpn_backbone_v2 { 
            int (**_vptr$Unet_fpn_backbone_v2)(); 
            struct IEspresso_Interface_v2 { 
                int (**_vptr$IEspresso_Interface_v2)(); 
                struct e5rt_execution_stream_operation {} *_main_esop; 
                struct e5rt_execution_stream {} *_stream; 
                struct map<std::string, wlw::StaticDescripter, std::less<std::string>, std::allocator<std::pair<const std::string, wlw::StaticDescripter>>> { 
                    struct __tree<std::__value_type<std::string, wlw::StaticDescripter>, std::__map_value_compare<std::string, std::__value_type<std::string, wlw::StaticDescripter>, std::less<std::string>>, std::allocator<std::__value_type<std::string, wlw::StaticDescripter>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, wlw::StaticDescripter>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, wlw::StaticDescripter>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } _input_des; 
                struct map<std::string, wlw::StaticDescripter, std::less<std::string>, std::allocator<std::pair<const std::string, wlw::StaticDescripter>>> { 
                    struct __tree<std::__value_type<std::string, wlw::StaticDescripter>, std::__map_value_compare<std::string, std::__value_type<std::string, wlw::StaticDescripter>, std::less<std::string>>, std::allocator<std::__value_type<std::string, wlw::StaticDescripter>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, wlw::StaticDescripter>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, wlw::StaticDescripter>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } _output_des; 
            } _net; 
            struct Lcnn_FC2 { 
                int (**_vptr$Lcnn_FC2)(); 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_0_weight; 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_1_weight; 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_2_weight; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_0_bias; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_1_bias; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_2_bias; 
                int _fc_dim; 
                int _fc_dim1; 
            } _lcnn_fc2; 
            struct Tensor<float, 2UL> { 
                int (**_vptr$Tensor)(); 
                struct Inside_View<2UL> { 
                    struct Shape<2UL> { 
                        unsigned long long _sp[6]; 
                    } _shape_of_view; 
                    struct Shape<2UL> { 
                        unsigned long long _sp[6]; 
                    } _stride_of_view; 
                    unsigned long long _length_of_view; 
                    unsigned long long _offset_of_view; 
                } _view; 
                struct shared_ptr<wt::Storage<float>> { 
                    void *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } _storage; 
                bool _is_contiguous; 
                bool _is_empty; 
                float *_buffer_head; 
            } _lambda; 
            struct BackBone_Param { 
                bool single_resolution; 
                struct vector<unsigned long, std::allocator<unsigned long>> { 
                    unsigned long long *__begin_; 
                    unsigned long long *__end_; 
                    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                        unsigned long long *__value_; 
                    } __end_cap_; 
                } fixed_input_shape; 
                struct map<std::vector<unsigned long>, std::string, std::less<std::vector<unsigned long>>, std::allocator<std::pair<const std::vector<unsigned long>, std::string>>> { 
                    struct __tree<std::__value_type<std::vector<unsigned long>, std::string>, std::__map_value_compare<std::vector<unsigned long>, std::__value_type<std::vector<unsigned long>, std::string>, std::less<std::vector<unsigned long>>>, std::allocator<std::__value_type<std::vector<unsigned long>, std::string>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned long>, std::string>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::vector<unsigned long>, std::__value_type<std::vector<unsigned long>, std::string>, std::less<std::vector<unsigned long>>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } dynamic_input_shape; 
                unsigned long long max_K; 
                float junc_score_thres; 
                float fpn_len_range_max; 
                float fpn_len_range_min; 
                unsigned long long n_pts0; 
                unsigned long long n_pts1; 
                unsigned long long dim_fc; 
                unsigned long long dim_loi; 
                float cls_score_thres; 
                bool filter_line_proposal; 
            } _backbone_param; 
            struct map<std::string, __CVBuffer *, std::less<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> { 
                struct __tree<std::__value_type<std::string, __CVBuffer *>, std::__map_value_compare<std::string, std::__value_type<std::string, __CVBuffer *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, __CVBuffer *>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, __CVBuffer *>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, __CVBuffer *>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _output_buffer_refs; 
            struct map<std::string, wt::Tensor<float, 3>, std::less<std::string>, std::allocator<std::pair<const std::string, wt::Tensor<float, 3>>>> { 
                struct __tree<std::__value_type<std::string, wt::Tensor<float, 3>>, std::__map_value_compare<std::string, std::__value_type<std::string, wt::Tensor<float, 3>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, wt::Tensor<float, 3>>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, wt::Tensor<float, 3>>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, wt::Tensor<float, 3>>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _output_buffer_tensors; 
        } _unet_fpn_backbone; 
        struct Lcnn_Floorplan_Post { 
            float *density_buffer; 
            struct lcnn_lines { 
                struct vector<roomscancore::Line<float __attribute__((ext_vector_type(2)))>, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<roomscancore::Line<float __attribute__((ext_vector_type(2)))> *, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__value_"^v {} lines; 
            } lcnn_lines; 
            struct vector<float, std::allocator<float>> { 
                float *__begin_; 
                float *__end_; 
                struct __compressed_pair<float *, std::allocator<float>> { 
                    float *__value_; 
                } __end_cap_; 
            } scores; 
            unsigned long long num_lines; 
        } _wall_postprocess; 
        struct lcnn_juncs { 
            struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} juncs; 
        } lcnn_juncs; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } junc_scores; 
        unsigned long long num_juncs; 
    }  _lcnnDetector;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
