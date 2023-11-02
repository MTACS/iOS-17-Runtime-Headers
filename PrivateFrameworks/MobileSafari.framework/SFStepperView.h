
@interface SFStepperView : UIView {
    NSMapTable * _buttonToLongestStringMap;
    UIView * _controlsContainer;
    _SFDimmingButton * _decrementButton;
    _SFDimmingButton * _doneButton;
    _SFDimmingButton * _incrementButton;
    _SFDimmingButton * _resetButton;
    MTShadowView * _shadowView;
}

@property (nonatomic, readonly) _SFDimmingButton *decrementButton;
@property (nonatomic, readonly) _SFDimmingButton *doneButton;
@property (nonatomic, readonly) _SFDimmingButton *incrementButton;
@property (nonatomic, readonly) _SFDimmingButton *resetButton;

+ (id)_buttonsFont;

- (void).cxx_destruct;
- (id)decrementButton;
- (id)doneButton;
- (id)incrementButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 includingResetButton:(bool)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)resetButton;
- (void)setLongestTitle:(id)arg1 forButton:(id)arg2;

@end
