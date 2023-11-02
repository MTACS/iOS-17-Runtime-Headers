
@interface CLKComplicationTemplateGraphicExtraLargeCircularStackViewTextBridge : CLKComplicationTemplateGraphicExtraLargeCircular {
    NSData * _contentData;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, retain) NSData *contentData;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)contentData;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setContentData:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
