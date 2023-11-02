
@interface RSNonUniformHeightEstimation : NSObject {
    struct HeightCoreEspV2 { 
        int (**_vptr$HeightCoreBase)(); 
        RSSemanticImage *_height_model_input; 
        struct LineGeneration { 
            int (**_vptr$LineGeneration)(); 
            struct HeightLineFit { 
                int (**_vptr$HeightLineFit)(); 
                float edge_score_thr; 
                int noise_thr; 
                float pixel_sz; 
                float valid_length_thr; 
            } height_fit; 
            int gt_width; 
        } _line_generator; 
        struct GlobalOptimization { 
            int (**_vptr$GlobalOptimization)(); 
            float small_wall_len_thr; 
            float small_wall_score_thr; 
            float corner_dis_thr; 
            float noise_small_wall_len_thr; 
            float occlusion_thr; 
            float ceiling_visible_thr; 
            float gap_to_ceiling_thr; 
            float window_upper_thr; 
            float window_lower_thr; 
            float window_len_thr; 
            float mirror_thr; 
            float stair_thr; 
            float occlusion_score_thr; 
            float edge_score_thr; 
            float uniform_height_merge_thr; 
            float uniform_and_slanted_height_refine_thr; 
            float neighbor_height_align_thr; 
        } _global_optimization; 
        unsigned int flt_type; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } _inputs_name; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } _outputs_name; 
        struct vector<roomscancore::nuh_model::post_type::Path3D, std::allocator<roomscancore::nuh_model::post_type::Path3D>> { 
            struct Path3D {} *__begin_; 
            struct Path3D {} *__end_; 
            struct __compressed_pair<roomscancore::nuh_model::post_type::Path3D *, std::allocator<roomscancore::nuh_model::post_type::Path3D>> { 
                struct Path3D {} *__value_; 
            } __end_cap_; 
        } _path_pool; 
        struct PathFusion { 
            int (**_vptr$PathFusion)(); 
            float height_diff_thr; 
            float slanted_seg_len_thr; 
            struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
                struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _skip_stat_dict; 
        } _path_fusion; 
        struct Simplification {} *_simplification_online; 
        struct Simplification {} *_simplification_offline; 
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
    }  _height_estimator;
    bool  _isNonUniformHeightEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
