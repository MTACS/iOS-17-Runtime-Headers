
@interface RSGeometryCalculation : NSObject {
    RSGeometryMeta * _geoMeta;
    int  _img_sz_step;
    struct { 
        int margin; 
        int img_sz; 
        bool use_dynamic_img_sz; 
        int img_sz0; 
        int img_sz_step; 
        bool use_pw_center; 
        int pw_center_update_rate; 
        bool use_global_center; 
        bool use_dynamic_pixel_sz; 
        float pixel_sz; 
        bool hist_norm; 
        int z_slice; 
        float z_slice_pixel; 
    }  _initParam;
    int  _output_count;
}

- (void).cxx_destruct;
- (id)init;

@end
