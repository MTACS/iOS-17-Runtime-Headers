
@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {
    NSString * _identifier;
    bool  _image;
    bool  _night;
    BCULayerRenderer * _renderer;
    bool  _shadow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsOptions;

- (void).cxx_destruct;
- (id)_layerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 minificationFilter:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_roundedInsetsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)coverLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 image:(bool)arg3 shadow:(bool)arg4 night:(bool)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForSize:(struct CGSize { double x1; double x2; })arg1 contentsScale:(double)arg2 options:(id)arg3;
- (id)newOperationWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(bool)arg6 logKey:(id)arg7 completion:(id /* block */)arg8;
- (id)shadowLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (bool)supportsOptions;

@end
