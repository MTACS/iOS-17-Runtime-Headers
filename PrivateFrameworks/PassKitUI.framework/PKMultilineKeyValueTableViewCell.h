
@interface PKMultilineKeyValueTableViewCell : PKTableViewCell {
    UILabel * _keyLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) UILabel *keyLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)keyLabel;
- (void)layoutSubviews;
- (void)setKeyLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;

@end
