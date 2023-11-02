
@interface CAUserAdjustmentCommand : NSObject {
    double  _maxLuminanceScale;
    double  _maxXDelta;
    double  _maxYDelta;
    double  _minLuminanceScale;
    double  _minXDelta;
    double  _minYDelta;
    CAUserAdjustment * _userAdjustment;
}

@property (readonly) double maxLuminanceScale;
@property (readonly) double maxXDelta;
@property (readonly) double maxYDelta;
@property (readonly) double minLuminanceScale;
@property (readonly) double minXDelta;
@property (readonly) double minYDelta;
@property (readonly) CAUserAdjustment *userAdjustment;

- (void)dealloc;
- (id)initWithUserAdjustment:(id)arg1;
- (double)maxLuminanceScale;
- (double)maxXDelta;
- (double)maxYDelta;
- (double)minLuminanceScale;
- (double)minXDelta;
- (double)minYDelta;
- (bool)transformWhitePointByXDelta:(double)arg1 yDelta:(double)arg2 luminanceScale:(double)arg3;
- (id)userAdjustment;

@end
