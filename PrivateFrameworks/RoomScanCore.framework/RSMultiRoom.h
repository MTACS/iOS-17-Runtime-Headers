
@interface RSMultiRoom : NSObject {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _all_orig_wall_length;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _all_orig_wall_normals;
    struct unordered_map<std::pair<int, int>, std::vector<std::pair<int, int>>, (anonymous namespace)::pair_hash, std::equal_to<std::pair<int, int>>, std::allocator<std::pair<const std::pair<int, int>, std::vector<std::pair<int, int>>>>>="__table_"{__hash_table<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, std::__unordered_map_hasher<std::pair<int, int>, std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, (anonymous namespace)::pair_hash, std::equal_to<std::pair<int, int>>>, std::__unordered_map_equal<std::pair<int, int>, std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, std::equal_to<std::pair<int, int>>, (anonymous namespace)::pair_hash>, std::allocator<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<int, int>, std::vector<std::pair<int, int>>>, void *> *> *>>="__value_"Q {}  _corner_relation_map;
    struct unordered_map<rs_ol::Relation_Type, std::vector<std::pair<int, int>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>, std::allocator<std::pair<const rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
        struct __hash_table<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>, std::allocator<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _door_relation_dict;
    float  _internal_wall_thickness;
    NSMutableDictionary * _merged_wall_association_map;
    struct MULTI_ROOM_CONFIG { 
        float dist_thres; 
        float iou_thres; 
        float angle_thres; 
        float angle_thres_for_small_walls; 
        float small_wall_length_thres; 
        float corner_dist_thres; 
        float overlap_angle_thres; 
        float overlap_dist_thres; 
        float overlap_iou_thres; 
        float overlap_min_line_length; 
        float acute_angle_thres; 
        float shorten_len_thr; 
        float one_vs_two_shorten_len_thr; 
        float line_equation_thres; 
        float parallel_angle_thres; 
        float identical_length_eps; 
        float identical_dist_eps; 
        float identical_overlap_iou_thres; 
        float identical_length_eps_door; 
        float identical_dist_eps_door; 
        float identical_overlap_iou_thres_door; 
        float overlap_iou_thres_door; 
        float overlap_dist_thres_door; 
        float identical_length_eps_window; 
        float identical_dist_eps_windor; 
        float identical_overlap_iou_thres_window; 
        float overlap_angle_thres_window; 
        float overlap_iou_thres_window; 
        float overlap_dist_thres_window; 
        float overlap_height_thres_window; 
        float clustering_dist_threshold; 
        float manhattan_wall_diff_threshold; 
        float normal_shift_threshold; 
        float internal_wall_thickness_threshold; 
        float internal_wall_min_thickness_threshold; 
        float z_shape_anchor_wall_threshold; 
        float z_shape_wall_angle_diff_threshold; 
        float merged_normal_angle_difference_threshold; 
        float global_wall_height_ceiling_threshold; 
        float global_wall_height_floor_threshold; 
        float polygon_quads_iou_clear_threshold; 
        float polygon_quads_corner_xy_dist_threshold; 
        float polygon_quads_corner_z_dist_threshold; 
        float polygon_corner_z_diff_threshold; 
        float floor_clustering_update_ratio_threshold; 
        float room_type_polygon_iou_merge_threshold; 
        float max_height_diff_to_upper_level_floor; 
        float height_gap_to_upper_level_floor; 
        float min_length_for_principal_direction; 
        float max_wall_angle_diff_for_principal_direction; 
        float max_room_angle_diff_for_principal_direction; 
        float max_length_for_non_connected_tiny_wall; 
        float max_outlier_room_xy_distance; 
        float max_outlier_room_height_distance; 
        float min_ratio_for_outlier_room; 
        float max_angle_for_rooms_with_overlap; 
        float min_ratio_for_different_angle_in_same_level_room; 
        float min_overlap_threshold_for_different_angle_rooms; 
        float min_room_intersection_ratio_in_same_level; 
        float min_room_polygon_overlap_ratio_in_same_level; 
        float min_room_wall_merge_ratio_in_same_level; 
    }  _multi_room_config;
    RSMultiRoomFloorEstimation * _multi_room_floor_estimator;
    struct vector<std::unordered_map<std::pair<int, int>, std::vector<std::pair<int, int>>, (anonymous namespace)::pair_hash>, std::allocator<std::unordered_map<std::pair<int, int>, std::vector<std::pair<int, int>>, (anonymous namespace)::pair_hash>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::unordered_map<std::pair<int, int>, std::vector<std::pair<int, int>>, (anonymous namespace)::pair_hash> *, std::allocator<std::unordered_map<std::pair<int, int>, std::vector<std::pair<int, int>>, (anonymous namespace)::pair_hash>>>="__value_"^v {}  _orig_room_corner_relation_maps;
    NSMutableDictionary * _original_wall_association_map;
    NSArray * _room_all_doors;
    NSArray * _room_all_walls;
    NSArray * _room_all_windows;
    struct vector<std::unordered_set<int>, std::allocator<std::unordered_set<int>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::unordered_set<int> *, std::allocator<std::unordered_set<int>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _wall_group_clustering;
    struct vector<(anonymous namespace)::RelationItem, std::allocator<(anonymous namespace)::RelationItem>>="__begin_"^{RelationItem {}  _wall_relation_all;
    struct unordered_map<rs_ol::Relation_Type, std::vector<std::pair<int, int>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>, std::allocator<std::pair<const rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
        struct __hash_table<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>, std::allocator<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _wall_relation_dict;
    struct unordered_set<std::pair<int, int>, (anonymous namespace)::pair_hash, std::equal_to<std::pair<int, int>>, std::allocator<std::pair<int, int>>>="__table_"{__hash_table<std::pair<int, int>, (anonymous namespace)::pair_hash, std::equal_to<std::pair<int, int>>, std::allocator<std::pair<int, int>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::pair<int, int>, void *> *> *>>="__value_"Q {}  _walls_in_group_set;
    struct unordered_map<rs_ol::Relation_Type, std::vector<std::pair<int, int>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>, std::allocator<std::pair<const rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
        struct __hash_table<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>, std::allocator<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::hash<rs_ol::Relation_Type>, std::equal_to<rs_ol::Relation_Type>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<rs_ol::Relation_Type, std::__hash_value_type<rs_ol::Relation_Type, std::vector<std::pair<int, int>>>, std::equal_to<rs_ol::Relation_Type>, std::hash<rs_ol::Relation_Type>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _window_relation_dict;
    struct unordered_map<int, int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int>>> { 
        struct __hash_table<std::__hash_value_type<int, int>, std::__unordered_map_hasher<int, std::__hash_value_type<int, int>, std::hash<int>, std::equal_to<int>>, std::__unordered_map_equal<int, std::__hash_value_type<int, int>, std::equal_to<int>, std::hash<int>>, std::allocator<std::__hash_value_type<int, int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, int>, std::hash<int>, std::equal_to<int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, int>, std::equal_to<int>, std::hash<int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _z_shape_map;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
