
@interface PUReviewScreenBarsSnapshot : UIView {
    double  _zRotation;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) double zRotation;

+ (Class)layerClass;

- (void)setZRotation:(double)arg1;
- (id)snapshotLayer;
- (double)zRotation;

@end
