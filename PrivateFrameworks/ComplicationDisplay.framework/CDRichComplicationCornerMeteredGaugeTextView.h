
@interface CDRichComplicationCornerMeteredGaugeTextView : CDRichComplicationCornerGaugeTextView {
    CDRichComplicationImageView * _outerImageView;
}

@property (nonatomic, readonly) CDRichComplicationImageView *outerImageView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)initWithFontFallback:(long long)arg1;
- (void)layoutSubviews;
- (id)outerImageView;
- (long long)tritiumUpdateMode;

@end
