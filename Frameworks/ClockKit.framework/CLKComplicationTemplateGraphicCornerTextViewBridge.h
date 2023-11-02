
@interface CLKComplicationTemplateGraphicCornerTextViewBridge : CLKComplicationTemplate {
    NSData * _labelData;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, retain) NSData *labelData;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)labelData;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setLabelData:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
