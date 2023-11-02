
@interface _UIPrototypingMenuSlider : UISlider {
    UILabel * _currentValueLabel;
    bool  _didBringKnobToFront;
    UIImageView * _knobBGView;
    _UIPortalView * _knobPortal;
    UIView * _knobView;
    double  _stepSize;
}

@property (nonatomic, retain) UILabel *currentValueLabel;
@property (nonatomic, retain) UIImageView *knobBGView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } knobCenter;
@property (nonatomic, retain) _UIPortalView *knobPortal;
@property (nonatomic, retain) UIView *knobView;
@property (nonatomic) double stepSize;

- (void).cxx_destruct;
- (void)_setKnobViewProminent:(bool)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (id)currentValueLabel;
- (void)decrement;
- (void)increment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)knobBGView;
- (struct CGPoint { double x1; double x2; })knobCenter;
- (id)knobPortal;
- (id)knobView;
- (void)layoutSubviews;
- (void)setCurrentValueLabel:(id)arg1;
- (void)setKnobBGView:(id)arg1;
- (void)setKnobPortal:(id)arg1;
- (void)setKnobView:(id)arg1;
- (void)setStepSize:(double)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (double)stepSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (float)value;

@end
