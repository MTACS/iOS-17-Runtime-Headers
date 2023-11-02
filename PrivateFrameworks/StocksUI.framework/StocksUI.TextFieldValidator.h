
@interface StocksUI.TextFieldValidator : NSObject <UITextFieldDelegate> {
    void isTextValid;
    void setAllowSubmission;
    void submit;
}

- (void).cxx_destruct;
- (id)init;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;

@end
