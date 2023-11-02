
@interface _UIKeyboardArbiterClientInputUIHost : _UIKeyboardArbiterClient <UIKeyboardScenePresentationModeManagerDelegate> {
    bool  _inputDestinationInWindowedMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrameIncludingRemoteIAV;
    UIKeyboardScenePresentationModeManager * _presentationModeManager;
    bool  _showing;
}

@property (nonatomic) bool inputDestinationInWindowedMode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrameIncludingRemoteIAV;
@property (nonatomic, readonly) UIKeyboardScenePresentationModeManager *presentationModeManager;
@property (nonatomic) bool showing;

- (void).cxx_destruct;
- (void)_layoutKeyboardViews:(id)arg1;
- (void)_updateKeyboardUIScenePresentationMode;
- (bool)allowedToShowKeyboard;
- (void)applicationKeyWindowWillChange:(id)arg1;
- (id)arbiterProxy;
- (void)completeKeyboardChange;
- (void)configureArbiterCommunication:(id)arg1;
- (id)currentHostedPIDs;
- (id)init;
- (bool)inputDestinationInWindowedMode;
- (void)inputSessionDidEndUnexpectedly;
- (bool)isCurrentInputDestination;
- (bool)isSpotlight:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameIncludingRemoteIAV;
- (void)keyboardSendNotification:(unsigned long long)arg1 withInfo:(id)arg2 isStart:(bool)arg3;
- (void)keyboardVisibilityDidChangeWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visible:(bool)arg2 tracking:(bool)arg3;
- (id)presentationModeManager;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)remoteKeyboardUndocked:(bool)arg1;
- (void)resetSnapshotWithWindowCheck:(bool)arg1;
- (void)scenePresentationModeManager:(id)arg1 didChangeToMode:(unsigned long long)arg2;
- (void)setCurrentUIState:(id)arg1;
- (void)setInputDestinationInWindowedMode:(bool)arg1;
- (void)setShowing:(bool)arg1;
- (bool)shouldSnapshot;
- (bool)showing;
- (void)signalKeyboardUIDidChange:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)snapsShotKeyboard;

@end
