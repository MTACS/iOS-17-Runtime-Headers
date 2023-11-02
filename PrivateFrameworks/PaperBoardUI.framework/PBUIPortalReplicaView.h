
@interface PBUIPortalReplicaView : UIView <PBUIPosterReplicaView, PBUIWallpaperPositioning> {
    PBUIReplicaDebugView * _debugView;
    bool  _invalidated;
    _UILegibilitySettings * _legibilitySettings;
    _UIPortalView * _portalView;
    <PBUIPosterReplicaPortalProviding> * _provider;
    <BSInvalidatable> * _providerToken;
    NSString * _reason;
    bool  _shouldMatchWallpaperPosition;
    <PBUIReplicaPortalSource> * _source;
    <BSInvalidatable> * _sourceToken;
    bool  _subscribed;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PBUIReplicaDebugView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveStyle;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIPosterReplicaPortalProviding> *provider;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (nonatomic, readonly) <PBUIReplicaPortalSource> *source;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_traitsArbiterActive;
- (void)dealloc;
- (id)debugView;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isFullscreen;
- (bool)isSubscribed;
- (void)layoutSubviews;
- (id)provider;
- (id)reason;
- (void)setFullscreen:(bool)arg1;
- (void)setNeedsProviderUpdate;
- (void)setNeedsSourceUpdate;
- (void)setProvider:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (void)setSubscribed:(bool)arg1;
- (bool)shouldMatchWallpaperPosition;
- (id)source;
- (void)willMoveToWindow:(id)arg1;

@end
