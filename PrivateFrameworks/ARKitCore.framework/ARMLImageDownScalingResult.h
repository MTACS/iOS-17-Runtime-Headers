
@interface ARMLImageDownScalingResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRegion;
    struct __CVBuffer { } * _pixelBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _regionOfInterest;
    struct __CVBuffer { } * _undistortedPixelBuffer;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRegion;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } regionOfInterest;
@property (nonatomic) struct __CVBuffer { }*undistortedPixelBuffer;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRegion;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGSize { double x1; double x2; })arg2 cropRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct CGSize { double x1; double x2; })regionOfInterest;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setUndistortedPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)undistortedPixelBuffer;

@end
