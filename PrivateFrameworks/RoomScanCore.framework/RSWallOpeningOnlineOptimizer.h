
@interface RSWallOpeningOnlineOptimizer : NSObject {
    struct Tensor<__fp16, 2UL> { 
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
        struct shared_ptr<wt::Storage<__fp16>> { 
            void *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } _storage; 
        bool _is_contiguous; 
        bool _is_empty; 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**_buffer_head; 
    }  _density_map;
    bool  _isActiveWallEnabled;
    bool  _isCurvedWallEnabled;
    struct ONLINE_CONFIG { 
        float major_fov_angle_thres; 
        float major_fov_angle_thres_buffer; 
        float dist_thres; 
        float iou_thres; 
        float angle_thres; 
        float angle_thres_for_small_walls; 
        float small_wall_length_thres; 
        float corner_dist_thres; 
        float overlap_angle_thres; 
        float overlap_dist_thres; 
        float overlap_iou_thres; 
        float acute_angle_thres; 
        float shorten_len_thr; 
        float one_vs_two_shorten_len_thr; 
        int shorten_non_match_thr; 
        float iou_thres_opening; 
        int standalone_opening_thr; 
        float hold_score_thres; 
        float hold_small_wall_length_thres; 
        float opening_checking_range; 
        float opening_checking_thres; 
        float opening_checking_occlusion_range; 
        float min_length_thres; 
        float parallel_angle_epsilon; 
        float dup_dist_thr; 
        float dup_angle_thr; 
        float dup_iou_thr; 
        float curved_wall_early_stop_score_thr; 
        float low_conf_wall_score_thr; 
        int low_conf_wall_non_match_thr; 
    }  _online_config;
    struct RSOnlineFusion { 
        int (**_vptr$RSOnlineFusion)(); 
        struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {} _camera_positions; 
    }  _online_fusion;
    struct RSOnlineRefinement { 
        int (**_vptr$RSOnlineRefinement)(); 
        struct Tensor<int, 3UL> { 
            int (**_vptr$Tensor)(); 
            struct Inside_View<3UL> { 
                struct Shape<3UL> { 
                    unsigned long long _sp[6]; 
                } _shape_of_view; 
                struct Shape<3UL> { 
                    unsigned long long _sp[6]; 
                } _stride_of_view; 
                unsigned long long _length_of_view; 
                unsigned long long _offset_of_view; 
            } _view; 
            struct shared_ptr<wt::Storage<int>> { 
                void *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } _storage; 
            bool _is_contiguous; 
            bool _is_empty; 
            int *_buffer_head; 
        } _search_range_7; 
        struct Tensor<int, 3UL> { 
            int (**_vptr$Tensor)(); 
            struct Inside_View<3UL> { 
                struct Shape<3UL> { 
                    unsigned long long _sp[6]; 
                } _shape_of_view; 
                struct Shape<3UL> { 
                    unsigned long long _sp[6]; 
                } _stride_of_view; 
                unsigned long long _length_of_view; 
                unsigned long long _offset_of_view; 
            } _view; 
            struct shared_ptr<wt::Storage<int>> { 
                void *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } _storage; 
            bool _is_contiguous; 
            bool _is_empty; 
            int *_buffer_head; 
        } _search_range_3; 
        struct optional<rs_ol::RS3DSurfaceOnline> { 
            union { 
                BOOL __null_state_; 
                struct RS3DSurfaceOnline { 
                    int (**_vptr$RS3DSurfaceOnline)(); 
                    RS3DSurface *surface; 
                    struct Line<float __attribute__((ext_vector_type(2)))>="corners"[2] {} line_2d; 
                    struct Line<float __attribute__((ext_vector_type(3)))>="corners"[2] {} line_3d; 
                    float floor_height; 
                    float ceiling_height; 
                    float height; 
                    bool visible; 
                    bool visible_buffer; 
                    float major_dist; 
                    float major_angle; 
                    int transition_status; 
                    int first_appear_frame; 
                    int last_appear_frame; 
                    int non_match_count; 
                    int non_match_shorten_count; 
                    int debug_idx; 
                    int wall_type; 
                    int standalone_opening_count; 
                    bool is_bay_window_wall; 
                    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                            struct __rep { 
                                union { 
                                    struct __long { 
                                        char *__data_; 
                                        unsigned long long __size_; 
                                        unsigned int __cap_ : 63; 
                                        unsigned int __is_long_ : 1; 
                                    } __l; 
                                    struct __short { 
                                        BOOL __data_[23]; 
                                        unsigned char __padding_[0]; 
                                        unsigned int __size_ : 7; 
                                        unsigned int __is_long_ : 1; 
                                    } __s; 
                                    struct __raw { 
                                        unsigned long long __words[3]; 
                                    } __r; 
                                } ; 
                            } __value_; 
                        } __r_; 
                    } _uuid; 
                    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                            struct __rep { 
                                union { 
                                    struct __long { 
                                        char *__data_; 
                                        unsigned long long __size_; 
                                        unsigned int __cap_ : 63; 
                                        unsigned int __is_long_ : 1; 
                                    } __l; 
                                    struct __short { 
                                        BOOL __data_[23]; 
                                        unsigned char __padding_[0]; 
                                        unsigned int __size_ : 7; 
                                        unsigned int __is_long_ : 1; 
                                    } __s; 
                                    struct __raw { 
                                        unsigned long long __words[3]; 
                                    } __r; 
                                } ; 
                            } __value_; 
                        } __r_; 
                    } _parrent_uuid; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } _fitting_lines; 
        struct ONLINE_REFINE_CONFIG { 
            int density_index; 
            float slice_threshold; 
            float min_slice_num; 
            float min_wall_length; 
            float min_density; 
            float zslice_density_threshold; 
            float major_small_wall_length_th; 
        } _config; 
        struct ONLINE_CONFIG { 
            float major_fov_angle_thres; 
            float major_fov_angle_thres_buffer; 
            float dist_thres; 
            float iou_thres; 
            float angle_thres; 
            float angle_thres_for_small_walls; 
            float small_wall_length_thres; 
            float corner_dist_thres; 
            float overlap_angle_thres; 
            float overlap_dist_thres; 
            float overlap_iou_thres; 
            float acute_angle_thres; 
            float shorten_len_thr; 
            float one_vs_two_shorten_len_thr; 
            int shorten_non_match_thr; 
            float iou_thres_opening; 
            int standalone_opening_thr; 
            float hold_score_thres; 
            float hold_small_wall_length_thres; 
            float opening_checking_range; 
            float opening_checking_thres; 
            float opening_checking_occlusion_range; 
            float min_length_thres; 
            float parallel_angle_epsilon; 
            float dup_dist_thr; 
            float dup_angle_thr; 
            float dup_iou_thr; 
            float curved_wall_early_stop_score_thr; 
            float low_conf_wall_score_thr; 
            int low_conf_wall_non_match_thr; 
        } _online_config; 
    }  _online_refinement;
    RSFloorPlan * _prevFloorPlan;
    struct TracingMap { 
        int (**_vptr$TracingMap)(); 
        float _voxel_sz; 
        struct unordered_map<unsigned long long, bool, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, bool>>> { 
            struct __hash_table<std::__hash_value_type<unsigned long long, bool>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, bool>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, bool>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, bool>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _values; 
    }  _tracing_map;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
