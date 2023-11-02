
@interface _SUICCheckGlyphLayer : CALayer {
    CAShapeLayer * _checkPackageLayer;
    bool  _covered;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _coveredTransform;
    CAGradientLayer * _maskLayer;
    UIColor * _primaryColor;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _uncoveredTransform;
}

@property (nonatomic, copy) UIColor *primaryColor;
@property (getter=isRevealed, nonatomic) bool revealed;

- (void).cxx_destruct;
- (void)_createMask;
- (double)_pointScaleToMatchBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_updateCovered:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRevealed;
- (void)layoutSublayers;
- (id)primaryColor;
- (double)setCovered:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setRevealed:(bool)arg1;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
