
@interface PKTextInputWindowFirstResponderController : NSObject <UIKeyboardSceneDelegateVisibilityObserver> {
    NSNotification * __delayedNotification;
    NSNotificationCenter * __notificationCenter;
    <PKTextInputWindowFirstResponderControllerDelegate> * _delegate;
    PKTextInputWindowFirstResponder * _firstResponder;
    bool  _paletteFloatingMode;
}

@property (nonatomic, retain) NSNotification *_delayedNotification;
@property (nonatomic, retain) NSNotificationCenter *_notificationCenter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTextInputWindowFirstResponderControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKTextInputWindowFirstResponder *firstResponder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool paletteFloatingMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_delayedNotification;
- (void)_forceControllerToReload:(id)arg1;
- (void)_handleTextInputSourceDidChange:(id)arg1;
- (bool)_isResponderEditableTextInput:(id)arg1;
- (id)_notificationCenter;
- (void)_textInputResponderDidChangeNotificationHandler:(id)arg1;
- (void)_updateFirstResponder:(id)arg1 isVisible:(bool)arg2 sendDelegateCallback:(bool)arg3;
- (void)dealloc;
- (id)delegate;
- (id)firstResponder;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1;
- (void)keyboardSceneDelegate:(id)arg1 inputViewSetVisibilityDidChange:(bool)arg2 includedReset:(bool)arg3;
- (bool)paletteFloatingMode;
- (void)setDelegate:(id)arg1;
- (void)setFirstResponder:(id)arg1;
- (void)setPaletteFloatingMode:(bool)arg1;
- (void)set_delayedNotification:(id)arg1;
- (void)set_notificationCenter:(id)arg1;
- (void)textInputSourceDidChange:(id)arg1;
- (void)updateFirstResponderFromWindowScene:(id)arg1 sendDelegateCallback:(bool)arg2;

@end
