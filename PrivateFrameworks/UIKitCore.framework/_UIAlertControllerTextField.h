
@interface _UIAlertControllerTextField : UITextField {
    _UIAlertControllerTextFieldView * _textFieldView;
}

@property (nonatomic) _UIAlertControllerTextFieldView *textFieldView;

- (void)setSecureTextEntry:(bool)arg1;
- (void)setTextFieldView:(id)arg1;
- (id)textFieldView;

@end
