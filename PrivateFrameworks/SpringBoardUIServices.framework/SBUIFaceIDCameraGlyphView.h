
@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView {
    MTMaterialView * _arrowBackgroundView;
    UIView * _arrowContainer;
    _UILegibilityView * _arrowHead;
    _UILegibilityView * _arrowTail;
    SBUILegibilityLabel * _callToActionLabel;
    _UILegibilitySettings * _legibilitySettings;
    UIView * _localRotationView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _localTransform;
    CALayer * _maskContainerLayer;
    CALayer * _maskLeftLayer;
    CALayer * _maskRightLayer;
    CALayer * _maskTopLayer;
    unsigned long long  _state;
}

@property (nonatomic, retain) MTMaterialView *arrowBackgroundView;
@property (nonatomic, retain) UIView *arrowContainer;
@property (nonatomic, retain) _UILegibilityView *arrowHead;
@property (nonatomic, retain) _UILegibilityView *arrowTail;
@property (nonatomic, retain) SBUILegibilityLabel *callToActionLabel;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIView *localRotationView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } localTransform;
@property (nonatomic, retain) CALayer *maskContainerLayer;
@property (nonatomic, retain) CALayer *maskLeftLayer;
@property (nonatomic, retain) CALayer *maskRightLayer;
@property (nonatomic, retain) CALayer *maskTopLayer;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_fadeComponentsIn:(id)arg1 completion:(id /* block */)arg2;
- (void)_fadeComponentsOut:(id)arg1 completion:(id /* block */)arg2;
- (void)_flyInWithText:(bool)arg1 delay:(double)arg2;
- (void)_installMask;
- (void)_removeAnimations;
- (void)_setAlpha:(double)arg1 onComponents:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateCallToActionLabelFont;
- (id)arrowBackgroundView;
- (id)arrowContainer;
- (id)arrowHead;
- (id)arrowTail;
- (id)callToActionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)localRotationView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })localTransform;
- (id)maskContainerLayer;
- (id)maskLeftLayer;
- (id)maskRightLayer;
- (id)maskTopLayer;
- (void)setArrowBackgroundView:(id)arg1;
- (void)setArrowContainer:(id)arg1;
- (void)setArrowHead:(id)arg1;
- (void)setArrowTail:(id)arg1;
- (void)setCallToActionLabel:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLocalRotationView:(id)arg1;
- (void)setLocalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMaskContainerLayer:(id)arg1;
- (void)setMaskLeftLayer:(id)arg1;
- (void)setMaskRightLayer:(id)arg1;
- (void)setMaskTopLayer:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 delay:(double)arg2;
- (unsigned long long)state;

@end