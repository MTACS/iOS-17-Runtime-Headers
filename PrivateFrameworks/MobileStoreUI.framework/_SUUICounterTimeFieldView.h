
@interface _SUUICounterTimeFieldView : UIView {
    UILabel * _labelLabel;
    UILabel * _valueLabel;
    unsigned long long  _visibilityField;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (nonatomic) unsigned long long visibilityField;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelLabel;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisibilityField:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;
- (unsigned long long)visibilityField;

@end