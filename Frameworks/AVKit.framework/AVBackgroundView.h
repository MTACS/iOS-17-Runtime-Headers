
@interface AVBackgroundView : UIView {
    bool  _automaticallyDrawsRoundedCorners;
    bool  _circular;
    AVLayoutView * _layoutView;
    bool  _prefersLowQualityEffects;
}

@property (nonatomic) bool automaticallyDrawsRoundedCorners;
@property (getter=isCircular, nonatomic) bool circular;
@property (nonatomic, retain) AVLayoutView *layoutView;
@property (nonatomic) bool prefersLowQualityEffects;

- (void).cxx_destruct;
- (void)_ensureOrRemoveLayoutView;
- (bool)_isContainedInOverlappingBackgroundView;
- (void)_updateBackdropShape;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (bool)automaticallyDrawsRoundedCorners;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircular;
- (void)layoutSubviews;
- (id)layoutView;
- (bool)prefersLowQualityEffects;
- (void)setAutomaticallyDrawsRoundedCorners:(bool)arg1;
- (void)setCircular:(bool)arg1;
- (void)setLayoutView:(id)arg1;
- (void)setPrefersLowQualityEffects:(bool)arg1;

@end
