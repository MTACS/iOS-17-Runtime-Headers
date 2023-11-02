
@interface CLKComplicationTemplateGraphicCornerSegmentedGaugeImage : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    CLKFullColorImageProvider * _imageProvider;
    CLKTextProvider * _leadingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1 gaugeProvider:(id)arg2 textProvider:(id)arg3;
- (id)leadingTextProvider;
- (void)setGaugeProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;

@end
