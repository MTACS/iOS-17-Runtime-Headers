
@interface HUControllableCollectionViewLayoutOverrideAttributes : NSObject {
    double  _alpha;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    long long  _zIndex;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) long long zIndex;

- (double)alpha;
- (id)init;
- (void)setAlpha:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setZIndex:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (long long)zIndex;

@end
