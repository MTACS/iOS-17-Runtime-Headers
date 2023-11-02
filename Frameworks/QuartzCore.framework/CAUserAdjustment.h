
@interface CAUserAdjustment : NSObject {
    double  _luminanceScale;
    double  _timestamp;
    double  _xDelta;
    double  _yDelta;
}

@property (readonly) double luminanceScale;
@property (readonly) double timestamp;
@property (readonly) double xDelta;
@property (readonly) double yDelta;

- (id)initWithXDelta:(double)arg1 yDelta:(double)arg2 luminanceScale:(double)arg3;
- (id)initWithXDelta:(double)arg1 yDelta:(double)arg2 luminanceScale:(double)arg3 timestamp:(double)arg4;
- (double)luminanceScale;
- (double)timestamp;
- (double)xDelta;
- (double)yDelta;

@end
