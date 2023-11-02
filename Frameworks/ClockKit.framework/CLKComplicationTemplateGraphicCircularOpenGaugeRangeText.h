
@interface CLKComplicationTemplateGraphicCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicCircular {
    CLKTextProvider * _centerTextProvider;
    CLKGaugeProvider * _gaugeProvider;
    CLKTextProvider * _leadingTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *centerTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

+ (id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 centerTextProvider:(id)arg4;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)centerTextProvider;
- (id)gaugeProvider;
- (id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 centerTextProvider:(id)arg4;
- (id)leadingTextProvider;
- (void)setCenterTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;

@end
