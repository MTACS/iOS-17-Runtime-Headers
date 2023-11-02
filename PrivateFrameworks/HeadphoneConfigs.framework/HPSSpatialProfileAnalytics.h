
@interface HPSSpatialProfileAnalytics : NSObject {
    double  _enrollmentStartTime;
    double  _faceEnrollmentStartTime;
    double  _faceEnrollmentTime;
    unsigned long long  _frameCount;
    double  _frameDetectionStartTime;
    double  _leftEarBackAngleTime;
    double  _leftEarEnrollmentStartTime;
    double  _leftEarEnrollmentTime;
    double  _leftEarFrontAngleTime;
    double  _leftEarMidAngleTime;
    unsigned char  _leftEarOcclusionDetectCount;
    NSString * _parentBundleID;
    NSString * _result;
    double  _rightEarBackAngleTime;
    double  _rightEarEnrollmentStartTime;
    double  _rightEarEnrollmentTime;
    double  _rightEarFrontAngleTime;
    double  _rightEarMidAngleTime;
    unsigned char  _rightEarOcclusionDetectCount;
    double  _soundProfileCreationStartTime;
    double  _soundProfileCreationTime;
    bool  _status;
    bool  _submitted;
}

+ (bool)isRBSProcessHandleAvailable;

- (void).cxx_destruct;
- (void)incrementFrameCount;
- (void)incrementLeftEarOcclusionCount;
- (void)incrementRightEarOcclusionCount;
- (id)init;
- (void)initFrameRateDetection;
- (void)submitHPSSpatialProfileEnrollAnalytics;
- (void)submitHPSSpatialProfileResetAnalytics;
- (void)updateFaceEnrollDuration;
- (void)updateFaceEnrollStart;
- (void)updateLeftEarBackAnglelDuration;
- (void)updateLeftEarEnrollDuration;
- (void)updateLeftEarEnrollStart;
- (void)updateLeftEarFrontAnglelDuration;
- (void)updateLeftEarMidAnglelDuration;
- (void)updateRightEarBackAnglelDuration;
- (void)updateRightEarEnrollDuration;
- (void)updateRightEarEnrollStart;
- (void)updateRightEarFrontAnglelDuration;
- (void)updateRightEarMidAnglelDuration;
- (void)updateSoundProfileCreationDuration;
- (void)updateSoundProfileCreationDurationStart;
- (void)updateStatus:(bool)arg1 EnrollmentResult:(id)arg2;

@end
