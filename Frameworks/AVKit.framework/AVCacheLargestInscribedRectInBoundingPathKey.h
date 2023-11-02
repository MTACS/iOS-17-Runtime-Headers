
@interface AVCacheLargestInscribedRectInBoundingPathKey : NSObject {
    double  _aspectRatio;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;

- (double)aspectRatio;
- (struct CGPoint { double x1; double x2; })center;
- (id)initWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;

@end
