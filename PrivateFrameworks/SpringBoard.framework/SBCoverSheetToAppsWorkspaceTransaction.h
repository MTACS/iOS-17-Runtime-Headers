
@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction * _autoPIPTransaction;
    SBDismissOverlaysAnimationController * _dismissOverlaysAnimationController;
    bool  _preservesBanners;
    SBTransientOverlayDismissAllWorkspaceTransaction * _transientOverlayTransaction;
}

@property (nonatomic) bool preservesBanners;

- (void).cxx_destruct;
- (void)_autoPIPIfNeeded;
- (void)_begin;
- (void)_didComplete;
- (void)_dismissOverlaysIfNeeded;
- (unsigned long long)_dismissOverlaysOptions;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (bool)preservesBanners;
- (void)setPreservesBanners:(bool)arg1;

@end
