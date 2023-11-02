
@interface NTKUpNextCurvedMetadata : NSObject <NSCopying, NSSecureCoding> {
    double  _angle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    UIImage * _maskImage;
    double  _radius;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) UIImage *maskImage;
@property (nonatomic, readonly) double radius;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)angle;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadius:(double)arg1 angle:(double)arg2 center:(struct CGPoint { double x1; double x2; })arg3 maskImage:(id)arg4;
- (id)maskImage;
- (double)radius;

@end
