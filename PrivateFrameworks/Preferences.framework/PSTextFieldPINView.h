
@interface PSTextFieldPINView : PINView <UITableViewDataSource, UITableViewDelegate> {
    AlphanumericPINTableViewCell * _cell;
    UITextField * _passcodeField;
    UITableView * _table;
    bool  _usesNumericKeyboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesNumericKeyboard;

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (void)hidePasscodeField:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (bool)keyboardInputChanged:(id)arg1;
- (void)layoutSubviews;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)okButtonPressed:(id)arg1;
- (bool)resignFirstResponder;
- (void)setBlocked:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setUsesNumericKeyboard:(bool)arg1;
- (void)showError:(id)arg1 animate:(bool)arg2;
- (id)stringValue;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)usesNumericKeyboard;

@end