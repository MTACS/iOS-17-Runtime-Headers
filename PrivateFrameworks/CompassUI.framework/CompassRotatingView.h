
@interface CompassRotatingView : UIView {
    double  _angle;
    double  _compassHeading;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic) double compassHeading;

- (double)angle;
- (double)compassHeading;
- (void)setCompassHeading:(double)arg1;

@end
