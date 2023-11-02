
@interface UIPrintCopiesOption : UIPrintOption <UITextFieldDelegate> {
    UIStepper * _copiesStepper;
    UITextField * _copiesTextField;
}

@property (nonatomic, retain) UIStepper *copiesStepper;
@property (nonatomic, retain) UITextField *copiesTextField;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copiesStepper;
- (void)copiesStepperChanged:(id)arg1;
- (id)copiesTextField;
- (void)copiesTextFieldDidChange;
- (void)dealloc;
- (void)dismissKeyboard;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)keyboardShowing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (void)setCopiesStepper:(id)arg1;
- (void)setCopiesTextField:(id)arg1;
- (id)textField:(id)arg1 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 suggestedActions:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateFromPrintInfo;

@end
