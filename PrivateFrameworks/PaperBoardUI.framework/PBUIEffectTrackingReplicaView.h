
@interface PBUIEffectTrackingReplicaView : UIView <BSInvalidatable, PBUIFakeBluring> {
    <PBUIEffectTrackingReplicaViewDelegate> * _delegate;
    double  _effectWeight;
    <PBUIFakeBlurObserver> * _observer;
    bool  _observesSnapshotValidity;
    PBUIPortalReplicaEffectView * _portalView;
    NSString * _reason;
    bool  _requiresSnapshotTreatment;
    bool  _showsSnapshot;
    PBUISnapshotReplicaView * _snapshotsView;
    long long  _style;
    unsigned long long  _transformOptions;
    double  _zoomScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBUIEffectTrackingReplicaViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double effectWeight;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIFakeBlurObserver> *observer;
@property (nonatomic) <PBUIPosterReplicaPortalProviding> *portalProvider;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool requiresSnapshotTreatment;
@property (nonatomic) bool shouldMatchWallpaperPosition;
@property (nonatomic) bool showsSnapshot;
@property (nonatomic) <PBUIPosterReplicaSnapshotProviding> *snapshotProvider;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) double zoomScale;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (double)effectWeight;
- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isFullscreen;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)portalProvider;
- (id)reason;
- (void)requestStyle:(long long)arg1;
- (bool)requiresSnapshotTreatment;
- (void)setDelegate:(id)arg1;
- (void)setEffectWeight:(double)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setPortalProvider:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRequiresSnapshotTreatment:(bool)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (void)setShowsSnapshot:(bool)arg1;
- (void)setSnapshotProvider:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (bool)shouldMatchWallpaperPosition;
- (bool)showsSnapshot;
- (id)snapshotProvider;
- (long long)style;
- (unsigned long long)transformOptions;
- (double)zoomScale;

@end
