
@protocol UIKeyboardVisualModeManagerDelegate <NSObject>

@required

- (bool)enhancedWindowingModeIsAvailable;
- (bool)enhancedWindowingModeIsEnabled;
- (bool)expectedInputModeIsSpecialized;
- (bool)expectedInputViewSetIsCustom;
- (bool)showingAccessoryViewOnly;
- (bool)textEntryFocusOnExternalDisplay;
- (void)visualModeManager:(UIKeyboardVisualModeManager *)arg1 didChangeToMode:(int)arg2;
- (void)visualModeManager:(UIKeyboardVisualModeManager *)arg1 observedEnhancedWindowingModeEnabledDidChange:(bool)arg2;

@end
