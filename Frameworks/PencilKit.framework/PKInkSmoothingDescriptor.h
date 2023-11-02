
@interface PKInkSmoothingDescriptor : NSObject {
    double  _angleSmoothing;
    double  _radiusSmoothing;
    double  _stylusSmoothing;
    double  _touchSmoothing;
    double  _velocitySmoothing;
}

@property (nonatomic, readonly) double angleSmoothing;
@property (nonatomic, readonly) double radiusSmoothing;
@property (nonatomic, readonly) double stylusSmoothing;
@property (nonatomic, readonly) double touchSmoothing;
@property (nonatomic, readonly) double velocitySmoothing;

- (double)angleSmoothing;
- (id)initWithStylusSmoothing:(double)arg1 touch:(double)arg2 velocity:(double)arg3 angle:(double)arg4 radius:(double)arg5;
- (id)mutableCopy;
- (double)radiusSmoothing;
- (double)stylusSmoothing;
- (double)touchSmoothing;
- (double)velocitySmoothing;

@end
