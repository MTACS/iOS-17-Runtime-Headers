
@interface _UIImageViewUncommonProperties : NSObject {
    _UIImageCIImageRenderer * _CIRenderer;
    long long  _defaultRenderingMode;
    unsigned int  _drawMode;
    UIImageSymbolConfiguration * _overridingSymbolConfiguration;
    unsigned long long  _templateImageRenderingEffects;
}

@property (nonatomic, retain) _UIImageCIImageRenderer *CIRenderer;
@property (nonatomic) long long defaultRenderingMode;
@property (nonatomic) unsigned int drawMode;
@property (nonatomic, retain) UIImageSymbolConfiguration *overridingSymbolConfiguration;
@property (nonatomic) unsigned long long templateImageRenderingEffects;

- (void).cxx_destruct;
- (id)CIRenderer;
- (long long)defaultRenderingMode;
- (unsigned int)drawMode;
- (id)overridingSymbolConfiguration;
- (void)setCIRenderer:(id)arg1;
- (void)setDefaultRenderingMode:(long long)arg1;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setOverridingSymbolConfiguration:(id)arg1;
- (void)setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (unsigned long long)templateImageRenderingEffects;

@end
