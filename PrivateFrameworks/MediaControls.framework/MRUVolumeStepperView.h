
@interface MRUVolumeStepperView : UIView {
    double  _continuousButtonCornerRadius;
    CCUIButtonModuleView * _decreaseButton;
    UIView * _decreaseMaterialView;
    CCUIButtonModuleView * _increaseButton;
    UIView * _increaseMaterialView;
}

@property (nonatomic) double continuousButtonCornerRadius;
@property (nonatomic, readonly) CCUIButtonModuleView *decreaseButton;
@property (nonatomic, retain) UIView *decreaseMaterialView;
@property (nonatomic, readonly) CCUIButtonModuleView *increaseButton;
@property (nonatomic, retain) UIView *increaseMaterialView;

- (void).cxx_destruct;
- (double)continuousButtonCornerRadius;
- (id)decreaseButton;
- (id)decreaseMaterialView;
- (id)increaseButton;
- (id)increaseMaterialView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContinuousButtonCornerRadius:(double)arg1;
- (void)setDecreaseMaterialView:(id)arg1;
- (void)setIncreaseMaterialView:(id)arg1;

@end
