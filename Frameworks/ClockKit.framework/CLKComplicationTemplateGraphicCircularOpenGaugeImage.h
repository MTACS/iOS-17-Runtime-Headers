
@interface CLKComplicationTemplateGraphicCircularOpenGaugeImage : CLKComplicationTemplateGraphicCircular {
    CLKFullColorImageProvider * _bottomImageProvider;
    CLKTextProvider * _centerTextProvider;
    CLKGaugeProvider * _gaugeProvider;
}

@property (nonatomic, copy) CLKFullColorImageProvider *bottomImageProvider;
@property (nonatomic, copy) CLKTextProvider *centerTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;

+ (id)templateWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bottomImageProvider;
- (id)centerTextProvider;
- (id)gaugeProvider;
- (id)initWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3;
- (void)setBottomImageProvider:(id)arg1;
- (void)setCenterTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;

@end
