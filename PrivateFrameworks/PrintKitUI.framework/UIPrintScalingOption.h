
@interface UIPrintScalingOption : UIPrintOption <UITextFieldDelegate> {
    double  _savedTableViewWidth;
    UIStepper * _scaleStepper;
    UITextField * _scaleTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double savedTableViewWidth;
@property (nonatomic, retain) UIStepper *scaleStepper;
@property (nonatomic, retain) UITextField *scaleTextField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissKeyboard;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)keyboardShowing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)paperScaleStepperChanged:(id)arg1;
- (void)paperScaleTextFieldDidChange;
- (id)printOptionTableViewCell;
- (void)printPanelDidChangeSize;
- (void)saveScaleValueToPrintInfo:(long long)arg1;
- (double)savedTableViewWidth;
- (id)scaleStepper;
- (id)scaleTextField;
- (void)setSavedTableViewWidth:(double)arg1;
- (void)setScaleStepper:(id)arg1;
- (void)setScaleTextField:(id)arg1;
- (id)textField:(id)arg1 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 suggestedActions:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateFromPrintInfo;

@end
