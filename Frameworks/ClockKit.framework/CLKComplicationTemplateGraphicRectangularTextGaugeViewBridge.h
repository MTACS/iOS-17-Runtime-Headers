
@interface CLKComplicationTemplateGraphicRectangularTextGaugeViewBridge : CLKComplicationTemplate {
    CLKTextProvider * _bodyTextProvider;
    CLKGaugeProvider * _gaugeProvider;
    NSData * _headerLabelData;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *bodyTextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, retain) NSData *headerLabelData;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bodyTextProvider;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)headerLabelData;
- (id)headerTextProvider;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setBodyTextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setHeaderLabelData:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
