
@interface JDCloudColorCalibrationResultOutcome : NSObject {
    float  _rotationX;
    float  _rotationY;
    float  _rotationZ;
    float  _stdX;
    float  _stdY;
    float  _stdZ;
}

@property (nonatomic, readonly) float rotationX;
@property (nonatomic, readonly) float rotationY;
@property (nonatomic, readonly) float rotationZ;
@property (nonatomic, readonly) float stdX;
@property (nonatomic, readonly) float stdY;
@property (nonatomic, readonly) float stdZ;

- (void)applyFactorToResults:(float)arg1;
- (id)initWithRotX:(float)arg1 rotY:(float)arg2 rotZ:(float)arg3 stdX:(float)arg4 stdY:(float)arg5 stdZ:(float)arg6;
- (float)rotationX;
- (float)rotationY;
- (float)rotationZ;
- (float)stdX;
- (float)stdY;
- (float)stdZ;

@end
