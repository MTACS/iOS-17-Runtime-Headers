
@interface CDRichComplicationCornerGaugeTextView : CDRichComplicationCornerBaseGaugeView {
    CLKUICurvedColoringLabel * _outerLabel;
    NSArray * _outerLabelProviders;
}

@property (nonatomic, readonly) CLKUICurvedColoringLabel *outerLabel;
@property (nonatomic, retain) NSArray *outerLabelProviders;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)initWithFontFallback:(long long)arg1;
- (void)layoutSubviews;
- (id)outerLabel;
- (id)outerLabelProviders;
- (void)setFontStyle:(long long)arg1;
- (void)setOuterLabelProviders:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
