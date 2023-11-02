
@interface _UIDragPreviewShadowProperties : NSObject <NSCopying, NSSecureCoding> {
    UIView * __localShadowView;
    double  _liftedAlpha;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _liftedTransform;
    double  _radiosityBlurRadius;
    long long  _shadowType;
}

@property (nonatomic, retain) UIView *_localShadowView;
@property (nonatomic) double liftedAlpha;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } liftedTransform;
@property (nonatomic) double radiosityBlurRadius;
@property (nonatomic) long long shadowType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localShadowView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)liftedAlpha;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })liftedTransform;
- (double)radiosityBlurRadius;
- (void)setLiftedAlpha:(double)arg1;
- (void)setLiftedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRadiosityBlurRadius:(double)arg1;
- (void)setShadowType:(long long)arg1;
- (void)set_localShadowView:(id)arg1;
- (long long)shadowType;

@end
