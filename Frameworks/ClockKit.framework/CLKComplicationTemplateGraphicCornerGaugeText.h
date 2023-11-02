
@interface CLKComplicationTemplateGraphicCornerGaugeText : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    CLKTextProvider * _leadingTextProvider;
    CLKTextProvider * _outerTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKTextProvider *outerTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

+ (id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 outerTextProvider:(id)arg4;
+ (id)templateWithGaugeProvider:(id)arg1 outerTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 outerTextProvider:(id)arg4;
- (id)initWithGaugeProvider:(id)arg1 outerTextProvider:(id)arg2;
- (id)leadingTextProvider;
- (id)outerTextProvider;
- (void)setGaugeProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setOuterTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;

@end
