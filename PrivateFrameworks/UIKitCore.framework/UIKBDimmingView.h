
@interface UIKBDimmingView : UIView {
    UIKBTree * _keyplane;
    UIKBScreenTraits * _screenTraits;
}

@property (nonatomic, retain) UIKBScreenTraits *screenTraits;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)refreshStyleForKeyplane:(id)arg1;
- (id)screenTraits;
- (void)setScreenTraits:(id)arg1;

@end
