
@interface CLKComplicationTemplateGraphicCornerGaugeViewBridge : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    NSData * _labelData;
    CLKTextProvider * _leadingTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, retain) NSData *labelData;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)labelData;
- (id)leadingTextProvider;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setLabelData:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
