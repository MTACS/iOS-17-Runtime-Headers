
@interface AKMarkupButtonContainerView : UIView {
    UIButton * _button;
    bool  _selected;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)selected;
- (void)setButton:(id)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForMiniBarState:(bool)arg1;

@end
