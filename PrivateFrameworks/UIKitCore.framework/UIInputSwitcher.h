
@interface UIInputSwitcher : NSObject {
    bool  _dismissingEmojiPopover;
    NSString * _loadedIdentifier;
    NSString * _newMode;
    bool  _usingCapsLockLanguageSwitch;
    UIDelayedAction * m_hideSwitcherDelay;
    double  m_lastGlobeKeyUpTime;
    UIDelayedAction * m_showSwitcherDelay;
    int  m_state;
}

@property (nonatomic) bool dismissingEmojiPopover;
@property (nonatomic, copy) NSString *loadedIdentifier;
@property (nonatomic) bool usingCapsLockLanguageSwitch;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)availableInputModes;
- (void)cancelHideSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)cleanUpAfterHide;
- (void)clearHideSwitcherTimer;
- (void)clearShowSwitcherTimer;
- (void)dealloc;
- (void)dismissSwitcher:(bool)arg1;
- (void)dismissSwitcherWithDelay:(double)arg1;
- (bool)dismissingEmojiPopover;
- (bool)handleEmojiPicker;
- (bool)handleGlobeKeyEvent:(id)arg1 switcherIsVisible:(bool)arg2;
- (bool)handleModifiersChangedEvent:(id)arg1;
- (bool)handleNavigationEvent:(id)arg1;
- (void)handleRotate:(id)arg1;
- (bool)handleSwitchCommand:(bool)arg1;
- (bool)handleSwitchCommand:(bool)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;
- (bool)handleSwitchingKeyEvent:(id)arg1;
- (void)hideSwitcher;
- (void)hideSwitcherIfNeeded;
- (id)init;
- (id)inputModeIdentifierWithNextFlag:(bool)arg1;
- (bool)isVisible;
- (bool)isVisibleOrHiding;
- (id)loadedIdentifier;
- (bool)needsFullHUD;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)selectedInputMode;
- (void)setDismissingEmojiPopover:(bool)arg1;
- (void)setLoadedIdentifier:(id)arg1;
- (void)setSelectedInputMode:(id)arg1;
- (void)setShowingCapsLockSwitcher:(bool)arg1;
- (void)setUsingCapsLockLanguageSwitch:(bool)arg1;
- (void)showSwitcherShouldAutoHide:(bool)arg1;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherWithoutAutoHide;
- (bool)switchMode:(id)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;
- (bool)switchMode:(id)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3 fromCapsLock:(bool)arg4;
- (void)touchHideSwitcherTimer;
- (void)touchShowSwitcherTimer;
- (void)updateHardwareLayout;
- (bool)usingCapsLockLanguageSwitch;

@end
