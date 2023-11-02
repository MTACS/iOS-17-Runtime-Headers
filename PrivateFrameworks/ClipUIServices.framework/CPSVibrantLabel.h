
@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting> {
    UILabel * _label;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (id)initWithTextStyle:(id)arg1 textVariant:(long long)arg2 vibrancyEffectStyle:(long long)arg3;
- (bool)isUserInteractionEnabled;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
