
@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    double  _alpha;
    double  _cornerRadius;
    double  _currentCornerRadius;
    long long  _style;
    UIVisualEffectView * backdropView;
    UIView * dimmingKnockoutView;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureViewsWithStyle:(long long)arg1;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2;
- (void)_updateCornerRadius;
- (id)_vibrancyEffectForStyle:(long long)arg1;
- (id)_visualEffectForStyle:(long long)arg1;
- (double)cornerRadius;
- (id)initWithStyle:(long long)arg1;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
