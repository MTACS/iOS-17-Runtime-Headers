
@interface UIHUDInputSwitcher : UIInputSwitcher {
    UIInputSwitcherView * m_switcherView;
}

- (void).cxx_destruct;
- (void)_showSwitcherViewAsHUD;
- (id)availableInputModes;
- (void)dismissSwitcher:(bool)arg1;
- (void)dismissSwitcherWithDelay:(double)arg1;
- (bool)handleSwitchCommand:(bool)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;
- (id)init;
- (bool)isVisibleOrHiding;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)selectedInputMode;
- (void)setSelectedInputMode:(id)arg1;
- (void)setShowingCapsLockSwitcher:(bool)arg1;
- (bool)switchMode:(id)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;

@end
