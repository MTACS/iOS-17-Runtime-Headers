
@interface CLKComplicationTemplateGraphicCircularClosedGaugeImage : CLKComplicationTemplateGraphicCircular {
    CLKGaugeProvider * _gaugeProvider;
    CLKFullColorImageProvider * _imageProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (id)gaugeProvider;
- (id)imageProvider;
- (id)initWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;
- (void)setGaugeProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;

@end
