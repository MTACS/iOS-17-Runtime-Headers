
@interface CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeText : CLKComplicationTemplateGraphicExtraLargeCircular {
    CLKTextProvider * _centerTextProvider;
    CLKGaugeProvider * _gaugeProvider;
}

@property (nonatomic, copy) CLKTextProvider *centerTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;

+ (id)templateWithGaugeProvider:(id)arg1 centerTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)centerTextProvider;
- (id)gaugeProvider;
- (id)initWithGaugeProvider:(id)arg1 centerTextProvider:(id)arg2;
- (void)setCenterTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;

@end
