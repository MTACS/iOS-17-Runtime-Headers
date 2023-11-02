
@interface ASCredentialRequestInfoLabelSubPane : ASCredentialRequestSubPane {
    UILabel * _infoLabel;
    double  _marginInset;
}

@property (nonatomic) double marginInset;
@property (nonatomic, retain) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyTextColor;
+ (id)_boldTitleFont;
+ (id)_boldTitleTextColor;
+ (id)_fontForLabelStyle:(long long)arg1;
+ (double)_infoLabelMarginInset;
+ (id)_infoLabelWithString:(id)arg1 labelStyle:(long long)arg2;
+ (id)_textColorForLabelStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)addToStackView:(id)arg1 withCustomSpacingAfter:(double)arg2 context:(id)arg3;
- (id)initWithString:(id)arg1 labelStyle:(long long)arg2;
- (id)initWithString:(id)arg1 labelType:(unsigned long long)arg2;
- (double)marginInset;
- (void)setMarginInset:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
