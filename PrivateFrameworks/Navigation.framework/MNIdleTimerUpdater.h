
@interface MNIdleTimerUpdater : NSObject <MNNavigationSessionStateListener> {
    <MNIdleTimerUpdaterDelegate> * _delegate;
    bool  _isArrived;
    bool  _isStarted;
    MNNavigationSessionState * _navigationSessionState;
    NSTimer * _notMovingTimer;
    bool  _shouldEnableIdleTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNIdleTimerUpdaterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MNNavigationSessionState *navigationSessionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldEnableIdleTimerForArrivalState:(long long)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateShouldEnableIdleTimer:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)navigationSessionState;
- (void)setDelegate:(id)arg1;
- (void)setNavigationSessionState:(id)arg1;
- (void)updateForStartNavigation;

@end
