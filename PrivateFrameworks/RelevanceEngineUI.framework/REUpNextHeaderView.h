
@interface REUpNextHeaderView : UICollectionReusableView {
    NSAttributedString * _attributedText;
    UILabel * _label;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

+ (void)initialize;

- (void).cxx_destruct;
- (id)attributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAttributedText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (long long)textAlignment;
- (id)textColor;

@end
