
@interface _BCUCoverEffectsBase : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {
    _BCUCoverEffectsAssets * _assets;
    NSString * _identifier;
    BCULayerRenderer * _renderer;
    bool  _restricted;
    _BCUCoverEffectsShadow * _seriesShadow;
    _BCUCoverEffectsShadow * _shadow;
    bool  _shadowOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) BCULayerRenderer *renderer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsOptions;

- (void).cxx_destruct;
- (double)_assetsScale;
- (id)_coverLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)_layerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 shadow:(id)arg4;
- (id)_shadowLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 tint:(bool)arg3 shadow:(id)arg4;
- (double)cornerRadius;
- (id)coverLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3;
- (id)identifier;
- (bool)includeBinding;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(bool)arg6;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(bool)arg6 restricted:(bool)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForSize:(struct CGSize { double x1; double x2; })arg1 contentsScale:(double)arg2 options:(id)arg3;
- (id)newOperationWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(bool)arg6 logKey:(id)arg7 completion:(id /* block */)arg8;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)shadowLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (bool)supportsOptions;
- (double)tintBlurRadius;

@end
