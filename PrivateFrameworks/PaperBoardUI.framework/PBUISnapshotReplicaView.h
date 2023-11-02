
@interface PBUISnapshotReplicaView : UIView <PBUIFakeBluring, PBUIPosterReplicaView, PBUIWallpaperPositioning> {
    PBUIReplicaDebugView * _debugView;
    long long  _effectiveStyle;
    UIImageView * _imageView;
    bool  _invalidated;
    _UILegibilitySettings * _legibilitySettings;
    <PBUIFakeBlurObserver> * _observer;
    <PBUIPosterReplicaSnapshotProviding> * _provider;
    <BSInvalidatable> * _providerToken;
    NSString * _reason;
    bool  _shouldMatchWallpaperPosition;
    <PBUIReplicaSnapshotSource> * _source;
    <BSInvalidatable> * _sourceToken;
    bool  _subscribed;
    unsigned long long  _transformOptions;
    double  _zoomScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PBUIReplicaDebugView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectiveStyle;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIFakeBlurObserver> *observer;
@property (nonatomic) <PBUIPosterReplicaSnapshotProviding> *provider;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (nonatomic, readonly) <PBUIReplicaSnapshotSource> *source;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) double zoomScale;

+ (bool)automaticallyNotifiesObserversForValid;

- (void).cxx_destruct;
- (void)_updateImageViewRotation;
- (void)dealloc;
- (id)debugView;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isFullscreen;
- (bool)isSubscribed;
- (bool)isValid;
- (void)layoutSubviews;
- (id)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)provider;
- (id)reason;
- (void)requestStyle:(long long)arg1;
- (void)setEffectiveStyle:(long long)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setNeedsProviderUpdate;
- (void)setNeedsSourceUpdate;
- (void)setObserver:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (bool)shouldMatchWallpaperPosition;
- (id)source;
- (unsigned long long)transformOptions;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (double)zoomScale;

@end
