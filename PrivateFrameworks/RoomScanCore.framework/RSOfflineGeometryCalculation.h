
@interface RSOfflineGeometryCalculation : NSObject {
    RSGeometryMeta * _geoMeta;
    struct { 
        int margin; 
        int img_sz; 
        bool use_pw_center; 
        int pw_center_update_rate; 
        bool use_global_center; 
        bool use_dynamic_pixel_sz; 
        float pixel_sz; 
        bool hist_norm; 
        int z_slice; 
        float z_slice_pixel; 
    }  _initParam;
}

- (void).cxx_destruct;
- (id)init;

@end
