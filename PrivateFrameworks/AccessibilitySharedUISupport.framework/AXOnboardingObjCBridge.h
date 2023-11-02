
@interface AXOnboardingObjCBridge : NSObject {
    bool  __isListening;
}

@property (nonatomic) bool _isListening;

+ (id)sharedInstance;

- (void)_adjustForKeyboard;
- (bool)_isListening;
- (id)_keyboardNotificationsToObserve;
- (void)_listenForKeyboardNotifications:(bool)arg1;
- (id)_setupKeyboardNotificationsIfNecessary;
- (void)disableSoftwareKeyboard;
- (void)enableSoftwareKeyboard;
- (void)enableVoiceControl:(bool)arg1;
- (bool)heySiriEnabled;
- (id)localizedVoiceControlCommand:(id)arg1;
- (void)set_isListening:(bool)arg1;
- (void)toggleVoiceControl;
- (bool)voiceControlEnabled;

@end
