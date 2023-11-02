
@interface HRTFEnrollmentEarPoseStatus : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _earBoundingBox;
    int  _earCaptureStatus;
    HRTFEnrollmentPoseStatus * _leftStatus;
    HRTFEnrollmentPoseStatus * _rightStatus;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } earBoundingBox;
@property (readonly) int earCaptureStatus;
@property (readonly) HRTFEnrollmentPoseStatus *leftStatus;
@property (readonly) HRTFEnrollmentPoseStatus *rightStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })earBoundingBox;
- (int)earCaptureStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftYawAngleArray:(double*)arg1 leftTracking:(unsigned char)arg2 leftYawCapturedArray:(char *)arg3 rightYawAngleArray:(double*)arg4 rightTracking:(unsigned char)arg5 rightYawCapturedArray:(char *)arg6 yawCount:(unsigned long long)arg7 yawAngle:(double)arg8 pitchAngle:(double)arg9 leftPitchAngleArray:(double*)arg10 leftPitchCapturedArray:(char *)arg11 rightPitchAngleArray:(double*)arg12 rightPitchCapturedArray:(char *)arg13 pitchCount:(unsigned long long)arg14 earBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg15 earCaptureStatus:(int)arg16;
- (id)leftStatus;
- (id)rightStatus;

@end
