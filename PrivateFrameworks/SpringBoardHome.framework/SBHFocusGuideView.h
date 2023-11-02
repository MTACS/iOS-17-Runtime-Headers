
@interface SBHFocusGuideView : UIView {
    UIFocusGuide * _focusGuide;
    UIView * _targetView;
}

@property (nonatomic, retain) UIView *targetView;

- (void).cxx_destruct;
- (void)_updateTargetedView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;

@end
