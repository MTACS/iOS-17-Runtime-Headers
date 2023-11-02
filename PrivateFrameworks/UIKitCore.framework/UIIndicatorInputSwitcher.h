
@interface UIIndicatorInputSwitcher : UIInputSwitcher {
    NSArray * _availableInputModes;
    <UITextCursorAssertion> * _inputModeAssertion;
    <UITextCursorAssertion> * _inputModeSelectorAssertion;
    bool  _showingCapsLockSwitcher;
}

@property (nonatomic, retain) NSArray *availableInputModes;
@property (nonatomic, retain) <UITextCursorAssertion> *inputModeAssertion;
@property (nonatomic, retain) <UITextCursorAssertion> *inputModeSelectorAssertion;
@property (nonatomic, retain) NSString *selectedInputMode;
@property (nonatomic) bool showingCapsLockSwitcher;

- (void).cxx_destruct;
- (id)availableInputModes;
- (id)defaultInputMode;
- (void)dismissSwitcher:(bool)arg1;
- (void)dismissSwitcherWithDelay:(double)arg1;
- (id)inputModeAssertion;
- (id)inputModeSelectorAssertion;
- (bool)isVisible;
- (bool)isVisibleOrHiding;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)selectedInputMode;
- (void)setAvailableInputModes:(id)arg1;
- (void)setInputModeAssertion:(id)arg1;
- (void)setInputModeSelectorAssertion:(id)arg1;
- (void)setSelectedInputMode:(id)arg1;
- (void)setShowingCapsLockSwitcher:(bool)arg1;
- (bool)showingCapsLockSwitcher;
- (bool)switchMode:(id)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;

@end
