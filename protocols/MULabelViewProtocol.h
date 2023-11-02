
@protocol MULabelViewProtocol <NSObject>

@required

- (float)_hyphenationFactor;
- (void)_setHyphenationFactor:(float)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)allowsDefaultTighteningForTruncation;
- (NSAttributedString *)attributedText;
- (UIFont *)font;
- (double)idealWidth;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setFont:(UIFont *)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (NSString *)text;
- (long long)textAlignment;
- (UIColor *)textColor;

@end
