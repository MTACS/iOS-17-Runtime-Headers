
@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge : CLKComplicationTemplate {
    NSData * _contentData;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, retain) NSData *contentData;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)contentData;
- (id)headerTextProvider;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setContentData:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
