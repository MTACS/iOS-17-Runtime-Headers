
@interface CLKComplicationTemplateGraphicRectangularFullViewBridge : CLKComplicationTemplate {
    NSData * _contentData;
}

@property (nonatomic, retain) NSData *contentData;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)contentData;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setContentData:(id)arg1;
- (bool)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end
