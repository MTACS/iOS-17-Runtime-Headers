
@interface SwiftUI.PlatformTextFieldCoordinator : SwiftUI.PlatformViewCoordinator <UITextFieldDelegate, UITextViewDelegate> {
    void configuration;
    void environment;
    void field;
    void ignoreNextUpdate;
    void isUserEditing;
    void isViewUpdating;
    void label;
}

- (void).cxx_destruct;
- (id)init;
- (void)primaryActionTriggered:(id)arg1;
- (void)textChanged:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
