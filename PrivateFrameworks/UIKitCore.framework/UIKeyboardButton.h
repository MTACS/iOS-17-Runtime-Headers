
@interface UIKeyboardButton : UIButton {
    long long  _keyboardButtonStyle;
}

@property (nonatomic, readonly) long long keyboardButtonStyle;

- (id)initWithKeyboardButtonStyle:(long long)arg1;
- (long long)keyboardButtonStyle;

@end
