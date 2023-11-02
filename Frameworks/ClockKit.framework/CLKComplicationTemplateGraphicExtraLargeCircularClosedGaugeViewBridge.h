
@interface CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular {
    CLKGaugeProvider * _gaugeProvider;
    NSData * _labelData;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, retain) NSData *labelData;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (id)gaugeProvider;
- (id)labelData;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setLabelData:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
