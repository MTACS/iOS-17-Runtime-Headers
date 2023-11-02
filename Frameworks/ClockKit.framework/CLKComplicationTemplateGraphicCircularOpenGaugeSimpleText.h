
@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular {
    CLKTextProvider * _bottomTextProvider;
    CLKTextProvider * _centerTextProvider;
    CLKGaugeProvider * _gaugeProvider;
}

@property (nonatomic, copy) CLKTextProvider *bottomTextProvider;
@property (nonatomic, copy) CLKTextProvider *centerTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;

+ (id)templateWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bottomTextProvider;
- (id)centerTextProvider;
- (id)gaugeProvider;
- (id)initWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;
- (void)setBottomTextProvider:(id)arg1;
- (void)setCenterTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;

@end
