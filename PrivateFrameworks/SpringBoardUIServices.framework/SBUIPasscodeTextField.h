
@interface SBUIPasscodeTextField : UITextField {
    bool  _previousResponderRequiresKeyboard;
    bool  _showsSystemKeyboard;
}

@property (nonatomic) bool showsSystemKeyboard;

- (void)_disableAutomaticAppearance;
- (void)_enableAutomaticAppearance;
- (void)_handleKeyUIEvent:(id)arg1;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (bool)resignFirstResponder;
- (void)setShowsSystemKeyboard:(bool)arg1;
- (bool)showsSystemKeyboard;

@end
