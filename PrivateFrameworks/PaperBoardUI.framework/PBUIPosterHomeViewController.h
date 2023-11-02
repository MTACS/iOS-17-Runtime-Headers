
@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController <PBUIEffectTrackingReplicaViewDelegate> {
    long long  _currentMode;
    BSUIOrientationTransformWrapperView * _dynamicWrapperView;
    PBUIEffectTrackingReplicaView * _effectView;
    PBUIColorStatistics * _fixedColorStatistics;
    PBUIGradientView * _gradientView;
    PRPosterHomeScreenConfiguration * _homeConfiguration;
    long long  _initialOrientation;
    bool  _isUpdatingOrientation;
    long long  _mostRecentOrientation;
    MTMaterialView * _wallpaperCaptureView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBlurred;
@property (readonly) Class superclass;

+ (long long)presentationModeForHomeConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptorIdentity;
- (void)_updateRotationForOrientation:(long long)arg1;
- (bool)areSettingsAppropriateForSnapshotting:(id)arg1;
- (id)averageColor;
- (double)averageContrast;
- (bool)canShowSnapshot;
- (void)configureEffectViewForMode;
- (id)contentColorStatistics;
- (void)effectTrackingReplicaViewHasValidSnapshot:(id)arg1;
- (bool)evaluateSnapshotPreconditions;
- (id)homeScreenConfiguration;
- (bool)isBlurred;
- (bool)isSettledPosition;
- (void)loadView;
- (void)noteDidRotateToInterfaceOrientation:(long long)arg1;
- (void)noteWillRotateToInterfaceOrientation:(long long)arg1;
- (void)performSnapshotOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)reflectsLock;
- (void)setCounterpart:(id)arg1;
- (void)setFixedAverageColor:(id)arg1;
- (bool)showsSnapshotWhenIdleForMode:(long long)arg1;
- (double)unlockProgress;
- (bool)updateGradientViewWithGradient:(id)arg1;
- (bool)updatePresentation;
- (long long)variant;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)weightingForEffectView;

@end
