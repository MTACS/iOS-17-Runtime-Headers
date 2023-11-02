
@interface RSFloorPlanRender : NSObject {
    RSFloorPlan * _floorPlan;
    bool  _isChairBeautificationEnabled;
    bool  _isEstimateFloorPlanColorEnabled;
    bool  _isObjectBeautificationEnabled;
    bool  _isStandardizationEnabled;
    bool  _isUniformHeightPolygonEnabled;
    RSObjectAlign * _objAlign;
    struct Room_Standardization { 
        struct StandardFloorPlan { 
            struct Standard_Param { 
                float pixel_sz_dynamic; 
                int init_minimum_walls; 
                float shortest_wall_length; 
                float duplicate_point_thresh; 
                float unique_point_angle; 
                float tiny_small_wall_length; 
                float parallel_dis_thresh; 
                float parallel_angle_thresh; 
                float lbfgs_drift_angle_thresh; 
                float lbfgs_dist_thresh; 
                float lbfgs_optimize_min_length; 
                float lbfgs_move_region; 
                float lbfgs_move_region_rate; 
                float lbfgs_tm_score_diff_thresh; 
                float min_first_wall_length; 
                float manhattan_angle_offset; 
                float keep_connect_angle_thresh; 
                float keep_connect_intersection_distance; 
                float need_rotate_small_wall_length; 
                float need_rotate_wall_angle; 
                float need_rotate_small_wall_angle; 
                float standard_manhattan_angle; 
                float merge_cross_lines_dis_thresh; 
                float merge_cross_lines_angle_thresh; 
                float merge_cross_lines_split_dist_th; 
                float merge_cross_gap_dist_th; 
                float merge_cross_gap_angle_th; 
                float add_tiny_corner_dist_th; 
                float add_tiny_corner_vertical_angle_th; 
                float add_tiny_corner_parallel_angle_th; 
                float add_tiny_opening_dist_th; 
                float add_tiny_opening_parallel_angle_th; 
                float add_tiny_opening_parallel_dist_th; 
            } param_; 
            struct vector<roomscancore::Line<float __attribute__((ext_vector_type(2)))>, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<roomscancore::Line<float __attribute__((ext_vector_type(2)))> *, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__value_"^v {} walls; 
        } standardizer_; 
        struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} vertex; 
    }  _roomStandardizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
