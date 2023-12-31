
@interface _MKSmallCalloutPassthroughButton : UIControl {
    UIView * _highlightView;
    UIControl * _targetControl;
}

@property (nonatomic, retain) UIControl *targetControl;

- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTargetControl:(id)arg1;
- (id)targetControl;

@end
