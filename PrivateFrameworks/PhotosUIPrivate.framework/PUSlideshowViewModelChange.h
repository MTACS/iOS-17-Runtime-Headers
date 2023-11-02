
@interface PUSlideshowViewModelChange : PUViewModelChange {
    bool  _currentStateDidChange;
    bool  _wantsChromeVisibleDidChange;
}

@property (setter=_setCurrentStateDidChange:, nonatomic) bool currentStateDidChange;
@property (setter=_setWantsChromeVisibleDidChange:, nonatomic) bool wantsChromeVisibleDidChange;

- (void)_setCurrentStateDidChange:(bool)arg1;
- (void)_setWantsChromeVisibleDidChange:(bool)arg1;
- (bool)currentStateDidChange;
- (bool)hasChanges;
- (bool)wantsChromeVisibleDidChange;

@end
