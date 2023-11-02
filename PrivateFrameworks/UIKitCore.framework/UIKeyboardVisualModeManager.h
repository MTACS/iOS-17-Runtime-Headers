
@interface UIKeyboardVisualModeManager : NSObject {
    <UIKeyboardVisualModeManagerDelegate> * _delegate;
    int  _lastVisualMode;
}

@property (nonatomic) <UIKeyboardVisualModeManagerDelegate> *delegate;
@property (nonatomic) int lastVisualMode;

+ (bool)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+ (bool)softwareKeyboardAllowedOnExternalScreen;
+ (id)visualModeLog;
+ (bool)windowingSoftwareKeyboardAllowed;

- (void).cxx_destruct;
- (id)delegate;
- (void)enhancedWindowingModeDidChange:(id)arg1;
- (bool)expectedInputModeIsSpecialized;
- (id)init;
- (void)keyboardCameraNotification:(id)arg1;
- (int)lastVisualMode;
- (void)setDelegate:(id)arg1;
- (void)setLastVisualMode:(int)arg1;
- (bool)textEntryFocusOnExternalDisplay;
- (bool)useVisualModeWindowed;
- (int)visualMode;
- (bool)windowingModeEnabled;

@end
