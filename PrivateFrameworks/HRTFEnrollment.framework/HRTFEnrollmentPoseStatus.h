
@interface HRTFEnrollmentPoseStatus : NSObject <NSSecureCoding> {
    double  _currentPitchAngle;
    double  _currentYawAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    unsigned char  _hasPitchAngle;
    unsigned char  _hasYawAngle;
    NSArray * _pitchAngles;
    NSArray * _yawAngles;
}

@property (readonly) double currentPitchAngle;
@property (readonly) double currentYawAngle;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (readonly) unsigned char hasPitchAngle;
@property (readonly) unsigned char hasYawAngle;
@property (readonly) NSArray *pitchAngles;
@property (readonly) NSArray *remainingPitchAngles;
@property (readonly) NSArray *remainingYawAngles;
@property (readonly) NSArray *yawAngles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)currentPitchAngle;
- (double)currentYawAngle;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (unsigned char)hasPitchAngle;
- (unsigned char)hasYawAngle;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentYawAngleArray:(double*)arg1 yawCapturedArray:(char *)arg2 yawCount:(unsigned long long)arg3 pitchAngleArray:(double*)arg4 pitchCapturedArray:(char *)arg5 pitchCount:(unsigned long long)arg6 yawAngle:(double)arg7 pitchAngle:(double)arg8 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9;
- (id)initWithYawAngleArray:(double*)arg1 yawCapturedArray:(char *)arg2 yawCount:(unsigned long long)arg3 pitchAngleArray:(double*)arg4 pitchCapturedArray:(char *)arg5 pitchCount:(unsigned long long)arg6 isEarTracking:(unsigned char)arg7 yawAngle:(double)arg8 pitchAngle:(double)arg9;
- (id)pitchAngles;
- (id)remainingPitchAngles;
- (id)remainingYawAngles;
- (id)yawAngles;

@end
