
@interface CAMPanoramaPaintingStatus : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRectangle;
    double  _normalizedBaselineOffset;
    double  _speed;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRectangle;
@property (nonatomic, readonly) double normalizedBaselineOffset;
@property (nonatomic, readonly) double speed;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectangle;
- (id)initWithSpeed:(double)arg1 cropRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 normalizedBaselineOffset:(double)arg3;
- (double)normalizedBaselineOffset;
- (double)speed;

@end