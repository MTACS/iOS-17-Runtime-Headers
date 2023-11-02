
@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenSegmentedGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular {
    CLKGaugeProvider * _gaugeProvider;
    CLKFullColorImageProvider * _imageProvider;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)gaugeProvider;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1 gaugeProvider:(id)arg2 textProvider:(id)arg3;
- (void)setGaugeProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
