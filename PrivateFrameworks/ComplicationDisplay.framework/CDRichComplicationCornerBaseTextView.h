
@interface CDRichComplicationCornerBaseTextView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel * _innerLabel;
    NSArray * _innerLabelProviders;
}

@property (nonatomic, retain) NSArray *innerLabelProviders;

- (void).cxx_destruct;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)initWithFontFallback:(long long)arg1;
- (id)innerLabel;
- (id)innerLabelProviders;
- (void)layoutSubviews;
- (void)setInnerLabelProviders:(id)arg1;

@end
