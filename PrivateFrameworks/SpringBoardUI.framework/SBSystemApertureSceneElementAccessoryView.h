
@interface SBSystemApertureSceneElementAccessoryView : UIView {
    unsigned long long  _layerRenderingId;
    SBSystemApertureSceneElementAccessoryPortalView * _portalView;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    unsigned int  _sourceContextId;
}

@property (nonatomic) unsigned long long layerRenderingId;
@property (nonatomic, readonly) SBSystemApertureSceneElementAccessoryPortalView *portalView;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) unsigned int sourceContextId;

- (void).cxx_destruct;
- (void)_configurePortalLayerWithSourceLayerRenderingId:(unsigned long long)arg1 contextId:(unsigned int)arg2;
- (void)_configurePortalView;
- (bool)allowsReparentingByLayoutHost;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)layerRenderingId;
- (void)layoutSubviews;
- (id)portalView;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setLayerRenderingId:(unsigned long long)arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayerRenderingId:(unsigned long long)arg1 contextId:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)sourceContextId;

@end
