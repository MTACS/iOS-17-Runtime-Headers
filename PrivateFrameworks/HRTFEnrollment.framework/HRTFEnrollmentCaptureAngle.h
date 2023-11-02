
@interface HRTFEnrollmentCaptureAngle : NSObject <NSSecureCoding> {
    double  _angle;
    bool  _captured;
}

@property (readonly) double angle;
@property (readonly) bool captured;

+ (bool)supportsSecureCoding;

- (double)angle;
- (bool)captured;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAngle:(double)arg1 captured:(bool)arg2;
- (id)initWithCoder:(id)arg1;

@end
