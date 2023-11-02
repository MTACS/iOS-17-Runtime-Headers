
@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular {
    NSData * _bottomLabelData;
    CLKTextProvider * _centerTextProvider;
    CLKGaugeProvider * _gaugeProvider;
}

@property (nonatomic, retain) NSData *bottomLabelData;
@property (nonatomic, copy) CLKTextProvider *centerTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bottomLabelData;
- (id)centerTextProvider;
- (id)gaugeProvider;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setBottomLabelData:(id)arg1;
- (void)setCenterTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
