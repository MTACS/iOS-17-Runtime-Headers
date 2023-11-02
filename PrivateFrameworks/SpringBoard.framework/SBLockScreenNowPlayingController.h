
@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver> {
    long long  _currentState;
    <SBLockScreenNowPlayingControllerDelegate> * _delegate;
    PCPersistentTimer * _disableTimer;
    bool  _enabled;
    SBMediaController * _mediaController;
    PTToggleTestRecipe * _testRecipe;
    CSLockScreenSettings * _testSettings;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLockScreenNowPlayingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObservers;
- (void)_disableTimerFired;
- (void)_invalidateDisableTimer;
- (bool)_isMediaRecentlyActive;
- (void)_removeObservers;
- (void)_startDisableTimer;
- (double)_timeoutInterval;
- (void)_updateNowPlayingPlugin;
- (void)_updateToState:(long long)arg1;
- (long long)currentState;
- (void)dealloc;
- (id)delegate;
- (id)initWithMediaController:(id)arg1;
- (bool)isEnabled;
- (bool)isNowPlayingActive;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
