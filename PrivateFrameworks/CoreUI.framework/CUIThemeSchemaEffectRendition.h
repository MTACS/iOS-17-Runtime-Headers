
@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {
    NSDictionary * _cuiInfo;
    CUIShapeEffectPreset * _effectPreset;
    CUIImage * _referenceImage;
}

- (bool)_generateReferenceImage;
- (void)_initializeCoreUIOptions:(id)arg1;
- (id)_rendererInitializationDictionary;
- (id)coreUIOptions;
- (void)dealloc;
- (id)effectPreset;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (id)referenceImage;

@end
