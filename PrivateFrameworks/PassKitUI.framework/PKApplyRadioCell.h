
@interface PKApplyRadioCell : UICollectionViewCell {
    id /* block */  _action;
    UIButton * _button;
    bool  _isTemplateLayout;
    bool  _radioButtonSelected;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) bool radioButtonSelected;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)action;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)radioButtonSelected;
- (void)setAction:(id /* block */)arg1;
- (void)setRadioButtonSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
