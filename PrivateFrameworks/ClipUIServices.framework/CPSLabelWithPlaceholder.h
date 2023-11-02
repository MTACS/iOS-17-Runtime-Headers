
@interface CPSLabelWithPlaceholder : UILabel {
    UIColor * _placeholderColor;
    UIView * _placeholderView;
    double  _placeholderWidth;
    NSString * _text;
}

@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic) double placeholderWidth;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize { double x1; double x2; })_desiredPlaceholderSize;
- (void)_placeholderInputsDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderColor;
- (double)placeholderWidth;
- (void)setAttributedText:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderWidth:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
