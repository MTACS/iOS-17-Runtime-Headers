
@interface GEOStorefrontView : NSObject {
    unsigned long long  _identifier;
    GEOStorefrontImagery * _imageryInfo;
    struct GEOOrientedPosition { 
        struct { 
            double x; 
            double y; 
            double z; 
        } position; 
        float yaw; 
        float pitch; 
        float roll; 
    }  _lookAt;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) GEOStorefrontImagery *imageryInfo;
@property (nonatomic, readonly) struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; } lookAt;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)imageryInfo;
- (id)init;
- (id)initWithStorefrontView:(id)arg1;
- (struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; })lookAt;

@end
