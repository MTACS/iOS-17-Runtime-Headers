
@interface RSBayWindowFPRemoval : NSObject {
    float  _angle_thr_back;
    float  _angle_thr_side;
    float  _bay_window_depth_thr;
    float  _overlap_thr;
    float  _projection_distance_thr_back;
    float  _projection_distance_thr_side;
}

- (id)init;

@end
