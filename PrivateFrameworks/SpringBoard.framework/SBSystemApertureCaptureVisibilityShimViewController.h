
@interface SBSystemApertureCaptureVisibilityShimViewController : SBFTouchPassThroughViewController {
    _UIPortalView * _clonedDisplayPortalView;
    UIViewController * _contentViewController;
    bool  _contentsDifferOnClonedDisplay;
    _UIPortalView * _displayPortalView;
    CADisplay * _observedDisplay;
    SBSystemApertureSettings * _settings;
    bool  _visibleInSnapshots;
    bool  _visibleOnClonedDisplay;
}

@property (getter=doContentsDifferOnClonedDisplay, nonatomic) bool contentsDifferOnClonedDisplay;
@property (getter=isVisibleInSnapshots, nonatomic) bool visibleInSnapshots;
@property (getter=isVisibleOnClonedDisplay, nonatomic) bool visibleOnClonedDisplay;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_isOriginalContentCloned;
- (void)_updateClonedVisibility;
- (void)_updatePortalVisibility;
- (void)_updateSnapshotVisibility;
- (void)dealloc;
- (bool)doContentsDifferOnClonedDisplay;
- (id)initWithContentViewController:(id)arg1;
- (bool)isVisibleInSnapshots;
- (bool)isVisibleOnClonedDisplay;
- (id)newDefaultVisibilityAnimator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setContentsDifferOnClonedDisplay:(bool)arg1;
- (void)setVisibleInSnapshots:(bool)arg1;
- (void)setVisibleOnClonedDisplay:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
