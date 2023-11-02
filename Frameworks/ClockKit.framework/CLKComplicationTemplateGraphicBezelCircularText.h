
@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate {
    CLKComplicationTemplateGraphicCircular * _circularTemplate;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKComplicationTemplateGraphicCircular *circularTemplate;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithCircularTemplate:(id)arg1;
+ (id)templateWithCircularTemplate:(id)arg1 textProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)_validEmbeddedTemplateClassNamesForKey:(id)arg1;
- (id)circularTemplate;
- (long long)compatibleFamily;
- (id)initWithCircularTemplate:(id)arg1;
- (id)initWithCircularTemplate:(id)arg1 textProvider:(id)arg2;
- (bool)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (void)setCircularTemplate:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
