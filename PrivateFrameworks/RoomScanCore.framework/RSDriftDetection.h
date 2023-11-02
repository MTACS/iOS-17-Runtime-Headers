
@interface RSDriftDetection : NSObject {
    struct RSDriftDetectionCore { 
        int (**_vptr$RSDriftDetectionCore)(); 
        bool _is_arTrackingStable; 
        bool _is_vioTrackingStable; 
        bool _is_first_wall_generated; 
        bool _is_first_keyframe_generated; 
        bool _enable_sample_colors; 
        struct vector<rs_drift_detection::DriftFrameInternalWraper, std::allocator<rs_drift_detection::DriftFrameInternalWraper>> { 
            struct DriftFrameInternalWraper {} *__begin_; 
            struct DriftFrameInternalWraper {} *__end_; 
            struct __compressed_pair<rs_drift_detection::DriftFrameInternalWraper *, std::allocator<rs_drift_detection::DriftFrameInternalWraper>> { 
                struct DriftFrameInternalWraper {} *__value_; 
            } __end_cap_; 
        } _ar_frames; 
        struct DRIFT_DETECTION_CONFIG { 
            float xyz_speed_drift_thres; 
            float view_speed_drift_thres; 
            float feature_pts_match_thres; 
            float feature_pts_similarity_thres; 
            float flying_away_frames; 
            float flying_away_angle_thres; 
            float flying_away_xyz_speed_drift_thres; 
            float flying_away_view_speed_drift_thres; 
            float big_align_gap_wall_len_thres; 
            float big_align_gap_thres; 
            float big_align_gap_search_thres; 
            float big_align_area_thres; 
            float pose_get_stuck_eps; 
            int n_lost_track_thr; 
        } _drift_detection_config; 
        unsigned long long _count_idx; 
        unsigned long long _ignore_idx; 
        unsigned long long _keep_frame_size; 
        unsigned long long _n_lost_track; 
    }  _detector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
