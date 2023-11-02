
@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    CLKTextProvider * _leadingTextProvider;
    CLKFullColorImageProvider * _outerImageProvider;
    CLKTextProvider * _outerTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *outerImageProvider;
@property (nonatomic, copy) CLKTextProvider *outerTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)leadingTextProvider;
- (id)outerImageProvider;
- (id)outerTextProvider;
- (void)setGaugeProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setOuterImageProvider:(id)arg1;
- (void)setOuterTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;

@end
