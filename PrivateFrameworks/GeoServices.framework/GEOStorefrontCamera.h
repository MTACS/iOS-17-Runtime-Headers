
@interface GEOStorefrontCamera : NSObject {
    int  _cameraNumber;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned char  _lensType;
    struct GEOOrientedPosition { 
        struct { 
            double x; 
            double y; 
            double z; 
        } position; 
        float yaw; 
        float pitch; 
        float roll; 
    }  _position;
    struct GEOLensModel { 
        float fovS; 
        float fovH; 
        float k2; 
        float k3; 
        float k4; 
        float cx; 
        float cy; 
        float lx; 
        float ly; 
    }  _projection;
    NSArray * _textureIds;
}

@property (nonatomic, readonly) int cameraNumber;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) unsigned char lensType;
@property (nonatomic, readonly) struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; } position;
@property (nonatomic, readonly) struct GEOLensModel { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } projection;
@property (nonatomic, readonly) NSArray *textureIds;

- (void).cxx_destruct;
- (int)cameraNumber;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithCameraMetadata:(id)arg1;
- (unsigned char)lensType;
- (struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; })position;
- (struct GEOLensModel { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })projection;
- (id)textureIds;

@end
