
@interface MagnifierSupport.ActivityNameOnBoardingController : OBWelcomeController <UIAdaptivePresentationControllerDelegate, UITextFieldDelegate> {
    void activityNameTakenLabel;
    void activityNameTextField;
    void button;
    void createActivityDelegate;
    void delegate;
    void kContentViewHeight;
    void kTextFieldCornerRadius;
    void kTextFieldHeight;
    void kTextFieldTopPadding;
    void kTextFieldWidthPadding;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)activityNameFromTextFieldWithTextField:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
