
@interface MADVIRemoveBackgroundResult : MADResult {
    float  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CF<CGImage *> { 
        struct CGImage {} *value_; 
    }  _image;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    IOSurface * _surface;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)confidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1;
- (id)initWithSurface:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3;
- (struct __CVBuffer { }*)pixelBuffer;

@end
