
@interface _VLStatistics : NSObject <NSSecureCoding> {
    struct { 
        double *points3d; 
        float *points2d; 
        int *inlier_indices; 
        short *inlier_number; 
        short *slam_pt3s_inlier_idx; 
        float gravity[3]; 
        int localized; 
        int status_ps; 
        float *solver_conf; 
        float *fused_conf; 
        int num_confs; 
        int num_inliers; 
        int num_keypoints; 
        int num_tracks; 
        int num_matches; 
        struct vl_tile_t {} *tile; 
        char *uuid; 
        struct { /* ? */ } *result_poses; 
        int *result_status; 
        int num_frame; 
        double slam_origin[6]; 
        float *slam_pt3s; 
        char *slam_pt3_desc; 
        int desc_dim; 
        float *slam_tracks; 
        short *slam_tracks_img_idx; 
        short *slam_tracks_len; 
        float *slam_poses; 
        double *slam_time_stamps; 
        int *vio_status; 
        float *vio_poses; 
        float *K; 
        float *distortion; 
        int slam_keyframe; 
        int num_slam_pt3s; 
        int start_frame; 
        double t_kpts; 
        double t_kpts_pyr; 
        double t_kpts_det; 
        double t_kpts_model; 
        double t_kpts_desc; 
        double t_load; 
        double t_index; 
        double t_pca; 
        double t_match; 
        double t_match_sss; 
        double t_match_filter; 
        double t_slam_tracker; 
        double t_pose; 
        double t_pose_score_filter; 
        double t_pose_score_vote; 
        double t_pose_score_find_peak; 
        double t_pose_score_refine; 
        double t_pose_score_other; 
        double t_pose_score; 
        double t_pose_ransac; 
        double t_pose_referee; 
        double t_pose_fuse; 
        double t_total; 
        long long tracks_file_size; 
        int peak_mem_usage; 
    }  _stats;
}

@property (nonatomic, readonly) struct { double *x1; float *x2; int *x3; short *x4; short *x5; float x6[3]; int x7; int x8; float *x9; float *x10; int x11; int x12; int x13; int x14; int x15; struct vl_tile_t {} *x16; char *x17; struct { /* ? */ } *x18; int *x19; int x20; double x21[6]; float *x22; char *x23; int x24; float *x25; short *x26; short *x27; float *x28; double *x29; int *x30; float *x31; float *x32; float *x33; int x34; int x35; int x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; long long x60; int x61; }*stats;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStats:(const struct { double *x1; float *x2; int *x3; short *x4; short *x5; float x6[3]; int x7; int x8; float *x9; float *x10; int x11; int x12; int x13; int x14; int x15; struct vl_tile_t {} *x16; char *x17; struct { /* ? */ } *x18; int *x19; int x20; double x21[6]; float *x22; char *x23; int x24; float *x25; short *x26; short *x27; float *x28; double *x29; int *x30; float *x31; float *x32; float *x33; int x34; int x35; int x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; long long x60; int x61; }*)arg1;
- (struct { double *x1; float *x2; int *x3; short *x4; short *x5; float x6[3]; int x7; int x8; float *x9; float *x10; int x11; int x12; int x13; int x14; int x15; struct vl_tile_t {} *x16; char *x17; struct { /* ? */ } *x18; int *x19; int x20; double x21[6]; float *x22; char *x23; int x24; float *x25; short *x26; short *x27; float *x28; double *x29; int *x30; float *x31; float *x32; float *x33; int x34; int x35; int x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; long long x60; int x61; }*)stats;

@end
