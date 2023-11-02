
@interface PBUIPortalReplicaEffectView : PBUIPortalReplicaView <PBUIFakeBluring> {
    _UIBackdropView * _effectView;
    MTMaterialView * _materialView;
    <PBUIFakeBlurObserver> * _observer;
    long long  _style;
    unsigned long long  _transformOptions;
    double  _zoomScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double effectWeight;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIFakeBlurObserver> *observer;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) double zoomScale;

- (void).cxx_destruct;
- (double)effectWeight;
- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEffectView;
- (bool)isFullscreen;
- (id)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)requestStyle:(long long)arg1;
- (void)setEffectWeight:(double)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setNeedsSourceUpdate;
- (void)setObserver:(id)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (unsigned long long)transformOptions;
- (double)zoomScale;

@end
