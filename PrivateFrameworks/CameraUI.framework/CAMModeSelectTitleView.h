
@interface CAMModeSelectTitleView : UIView {
    UILabel * __titleLabel;
    UIColor * _textColor;
}

@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end
