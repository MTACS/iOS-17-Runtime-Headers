
@interface SBAmbientWirelessChargingIdleTimer : NSObject <SBAmbientPresentationObserver, SBBacklightControllerObserver> {
    bool  _ambientPresented;
    SBAmbientDefaults * _ambientTestingDefaults;
    AWAttentionAwarenessClient * _attentionClient;
    bool  _attentionClientActive;
    bool  _enabled;
    SBBacklightController * _lazy_backlightController;
    SBScreenSleepCoordinator * _screenSleepCoordinator;
    SBUIController * _uiController;
}

@property (getter=_ambientPresented, setter=_setAmbientPresented:, nonatomic) bool ambientPresented;
@property (getter=_isAttentionClientActive, setter=_setAttentionClientActive:, nonatomic) bool attentionClientActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_ambientPresented;
- (id)_backlightController;
- (void)_handleAttentionLost:(id)arg1;
- (bool)_isAttentionClientActive;
- (void)_noteQiPowerStatusChanged;
- (void)_noteSpringBoardBootComplete;
- (void)_reconfigureAttentionClient;
- (void)_setAmbientPresented:(bool)arg1;
- (void)_setAttentionClientActive:(bool)arg1;
- (void)_updateIdleTimerEnablement;
- (void)ambientPresentationController:(id)arg1 didUpdatePresented:(bool)arg2;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (id)initWithAmbientPresentationController:(id)arg1 screenSleepCoordinator:(id)arg2 uiController:(id)arg3;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (id)succinctDescription;

@end
