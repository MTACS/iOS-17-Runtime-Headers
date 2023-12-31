
@interface BiometricKitEnrollProgressCoordinates : NSObject {
    double  _angle;
    double  _x;
    double  _y;
}

@property (nonatomic) double angle;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (double)angle;
- (void)setAngle:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)x;
- (double)y;

@end
