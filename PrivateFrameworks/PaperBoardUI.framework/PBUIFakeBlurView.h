
@interface PBUIFakeBlurView : UIView <PBUIFakeBlurImageProviding, PBUIFakeBluring, PBUIWallpaperReachabilityObserving> {
    long long  _effectiveStyle;
    <PBUIFakeBlurViewRegistering> * _fakeBlurRegistry;
    <PBUIFakeBlurImageProviding> * _imageProvider;
    <PBUIFakeBlurObserver> * _observer;
    UIView * _providedImageView;
    <PBUIWallpaperReachabilityCoordinating> * _reachabilityCoordinator;
    long long  _requestedStyle;
    bool  _shouldMatchWallpaperPosition;
    unsigned long long  _transformOptions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _wallpaperOffset;
    PBUIWallpaperView * _wallpaperView;
    PBUIWallpaperViewController * _wallpaperViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PBUIFakeBlurViewRegistering> *fakeBlurRegistry;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PBUIFakeBlurImageProviding> *imageProvider;
@property (nonatomic) <PBUIFakeBlurObserver> *observer;
@property (nonatomic, readonly) UIView *providedImageView;
@property (nonatomic, readonly) <PBUIWallpaperReachabilityCoordinating> *reachabilityCoordinator;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) PBUIWallpaperViewController *wallpaperViewController;
@property (nonatomic) double zoomScale;

+ (id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2;
+ (id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 overrideTraitCollection:(id)arg3;
+ (void)_imageForStyle:(long long)arg1 withSource:(id)arg2 overrideTraitCollection:(id)arg3 result:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (id)fakeBlurRegistry;
- (void)handleReachabilityYOffsetDidChange;
- (id)imageForWallpaperStyle:(inout long long*)arg1 variant:(long long)arg2 traitCollection:(id)arg3;
- (id)imageProvider;
- (id)initWithVariant:(long long)arg1 imageProvider:(id)arg2 fakeBlurRegistry:(id)arg3 wallpaperViewDelegate:(id)arg4 transformOptions:(unsigned long long)arg5 reachabilityCoordinator:(id)arg6;
- (id)initWithVariant:(long long)arg1 wallpaperViewController:(id)arg2 transformOptions:(unsigned long long)arg3 reachabilityCoordinator:(id)arg4;
- (bool)isFullscreen;
- (void)layoutSubviews;
- (id)newImageProviderView;
- (id)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)parallaxEnabledForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (id)providedImageView;
- (id)reachabilityCoordinator;
- (void)reconfigureFromProvider;
- (void)reconfigureWithSource:(id)arg1;
- (void)requestStyle:(long long)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (bool)shouldMatchWallpaperPosition;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)transformOptions;
- (void)updateImageFromProviderForWallpaperMode:(long long)arg1;
- (bool)updateImageProviderView:(id)arg1 withImage:(id)arg2;
- (void)updateImageWithSource:(id)arg1;
- (long long)variant;
- (id)wallpaperViewController;
- (void)willMoveToWindow:(id)arg1;
- (double)zoomFactorForVariant:(long long)arg1;
- (double)zoomScale;

@end
