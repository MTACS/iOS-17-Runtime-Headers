
@interface AUSetupCodeUIAlert : AUTextFieldUIAlert <UIAlertViewDelegate, UITextFieldDelegate> {
    UITextRange * _selectionRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)formatSetupCodeWithSender:(id)arg1;
- (void)prepareToShow;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end
