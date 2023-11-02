
@interface SBHShadowedWidgetView : UIView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    UIView * _contentView;
    double  _cornerRadius;
    bool  _perspectiveEnabled;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _shadowSupplementalTransform;
    UIView * _shadowView;
    bool  _supportsShadowViewFrameProviding;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (getter=isPerspectiveEnabled, nonatomic) bool perspectiveEnabled;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } shadowSupplementalTransform;
@property (nonatomic, retain) UIView *shadowView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_layoutShadowView;
- (void)_updateShadowView;
- (void)_updateZPositions;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (id)contentView;
- (double)cornerRadius;
- (id)initWithContentView:(id)arg1 shadowView:(id)arg2 perspectiveEnabled:(bool)arg3;
- (bool)isPerspectiveEnabled;
- (void)layoutSubviews;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setPerspectiveEnabled:(bool)arg1;
- (void)setShadowSupplementalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setShadowView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })shadowSupplementalTransform;
- (id)shadowView;

@end
