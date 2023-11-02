
@interface PNCropVariant : NSObject {
    double  _aspectRatio;
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
    double  _cropScore;
    long long  _cropType;
    double  _scaleFactor;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) double cropScore;
@property (nonatomic, readonly) long long cropType;
@property (nonatomic, readonly) double scaleFactor;

- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (double)cropScore;
- (long long)cropType;
- (id)initWithAspectRatio:(double)arg1 scaleFactor:(double)arg2 cropScore:(double)arg3 cropType:(long long)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (double)scaleFactor;

@end
