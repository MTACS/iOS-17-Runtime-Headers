
@interface CLKComplicationTemplateGraphicRectangularStandardBodyViewBridge : CLKComplicationTemplate {
    CLKTextProvider * _body1TextProvider;
    CLKTextProvider * _body2TextProvider;
    NSData * _headerLabelData;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *body1TextProvider;
@property (nonatomic, copy) CLKTextProvider *body2TextProvider;
@property (nonatomic, retain) NSData *headerLabelData;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)body1TextProvider;
- (id)body2TextProvider;
- (long long)compatibleFamily;
- (id)headerLabelData;
- (id)headerTextProvider;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setBody1TextProvider:(id)arg1;
- (void)setBody2TextProvider:(id)arg1;
- (void)setHeaderLabelData:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
