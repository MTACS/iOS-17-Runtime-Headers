
@interface SBFButton : UIButton

- (bool)_drawingAsSelected;
- (void)_touchUpInside;
- (void)_updateForStateChange;
- (void)_updateSelected:(bool)arg1 highlighted:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
