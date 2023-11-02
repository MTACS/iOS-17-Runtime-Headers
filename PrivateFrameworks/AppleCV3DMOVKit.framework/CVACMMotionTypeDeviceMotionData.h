
@interface CVACMMotionTypeDeviceMotionData : NSObject {
    bool  _doingBiasEstimation;
    bool  _doingYawCorrection;
    CVACLMotionTypeVector3 * _gravity;
    bool  _isInitialized;
    CVACLMotionTypeVector3 * _magneticField;
    int  _magneticFieldCalibrationLevel;
    CVACLMotionTypeDoubleVector4 * _quaternion;
    CVACLMotionTypeVector3 * _rotationRate;
    CVACLMotionTypeVector3 * _userAcceleration;
}

@property (nonatomic) bool doingBiasEstimation;
@property (nonatomic) bool doingYawCorrection;
@property (nonatomic, retain) CVACLMotionTypeVector3 *gravity;
@property (nonatomic) bool isInitialized;
@property (nonatomic, retain) CVACLMotionTypeVector3 *magneticField;
@property (nonatomic) int magneticFieldCalibrationLevel;
@property (nonatomic, retain) CVACLMotionTypeDoubleVector4 *quaternion;
@property (nonatomic, retain) CVACLMotionTypeVector3 *rotationRate;
@property (nonatomic, retain) CVACLMotionTypeVector3 *userAcceleration;

- (void).cxx_destruct;
- (bool)doingBiasEstimation;
- (bool)doingYawCorrection;
- (id)gravity;
- (id)init;
- (bool)isInitialized;
- (id)magneticField;
- (int)magneticFieldCalibrationLevel;
- (id)quaternion;
- (id)rotationRate;
- (void)setDoingBiasEstimation:(bool)arg1;
- (void)setDoingYawCorrection:(bool)arg1;
- (void)setGravity:(id)arg1;
- (void)setIsInitialized:(bool)arg1;
- (void)setMagneticField:(id)arg1;
- (void)setMagneticFieldCalibrationLevel:(int)arg1;
- (void)setQuaternion:(id)arg1;
- (void)setRotationRate:(id)arg1;
- (void)setUserAcceleration:(id)arg1;
- (id)userAcceleration;

@end
