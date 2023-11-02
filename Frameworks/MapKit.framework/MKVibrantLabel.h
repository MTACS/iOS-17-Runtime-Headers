
@interface MKVibrantLabel : MKVibrantView {
    UILabel * _label;
}

@property (setter=_setHyphenationFactor:, nonatomic) float _hyphenationFactor;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) double idealWidth;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (float)_hyphenationFactor;
- (void)_setHyphenationFactor:(float)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)allowsDefaultTighteningForTruncation;
- (id)attributedText;
- (id)font;
- (double)idealWidth;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
