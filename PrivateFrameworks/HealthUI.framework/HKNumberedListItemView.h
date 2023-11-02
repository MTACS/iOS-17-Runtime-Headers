
@interface HKNumberedListItemView : UIView {
    unsigned long long  _number;
    UILabel * _numberLabel;
    UIView * _numberLabelBackground;
}

@property (nonatomic) unsigned long long number;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UIView *numberLabelBackground;

+ (id)createNumberedViewWithInteger:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })listItemSize;
+ (id)numberFont;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)initWithInteger:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)number;
- (id)numberLabel;
- (id)numberLabelBackground;
- (void)setNumber:(unsigned long long)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setNumberLabelBackground:(id)arg1;
- (void)setTintColor:(id)arg1;

@end
