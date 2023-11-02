
@interface VGFaceMetadata : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _faceID;
    double  _rollAngle;
    double  _yawAngle;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long faceID;
@property (nonatomic, readonly) double rollAngle;
@property (nonatomic, readonly) double yawAngle;

+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)encodeWithCoder:(id)arg1;
- (long long)faceID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceId:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 yawAngle:(double)arg3 rollAngle:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)rollAngle;
- (double)yawAngle;

@end
