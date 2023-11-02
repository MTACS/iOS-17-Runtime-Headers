
@interface PNPPlatterContainerView : UIView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _animationTranslation;
    id /* block */  _autoDismissBlock;
    NSDate * _autoDismissDate;
    UIView * _contentView;
    UIView * _contentViewContainerView;
    long long  _dimmingState;
    UIView * _dimmingView;
    bool  _dismissUsingAlpha;
    unsigned long long  _edge;
    UIVisualEffectView * _effectView;
    double  _pencilOffset;
    double  _preferredCornerRadius;
    bool  _presented;
    PNPPlatterShadowView * _shadowView;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } animationTranslation;
@property (nonatomic, copy) id /* block */ autoDismissBlock;
@property (nonatomic, retain) NSDate *autoDismissDate;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) long long dimmingState;
@property (nonatomic) bool dismissUsingAlpha;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) double pencilOffset;
@property (nonatomic) double preferredCornerRadius;
@property (nonatomic) bool presented;

- (void).cxx_destruct;
- (double)_dismissedAlphaForEdge:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_dismissedTransformForEdge:(unsigned long long)arg1;
- (void)_updateShadowForCenteredPlatter:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })animationTranslation;
- (id /* block */)autoDismissBlock;
- (id)autoDismissDate;
- (id)contentView;
- (long long)dimmingState;
- (bool)dismissUsingAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissedFrameForViewWithSize:(struct CGSize { double x1; double x2; })arg1 edge:(unsigned long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (unsigned long long)edge;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)pencilOffset;
- (double)preferredCornerRadius;
- (bool)presented;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedFrameForViewWithSize:(struct CGSize { double x1; double x2; })arg1 edge:(unsigned long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setAnimationTranslation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAutoDismissBlock:(id /* block */)arg1;
- (void)setAutoDismissDate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDimmingState:(long long)arg1;
- (void)setDismissUsingAlpha:(bool)arg1;
- (void)setEdge:(unsigned long long)arg1;
- (void)setPencilOffset:(double)arg1;
- (void)setPreferredCornerRadius:(double)arg1;
- (void)setPresented:(bool)arg1;

@end
