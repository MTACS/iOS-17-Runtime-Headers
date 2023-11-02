
@protocol IKAppKeyboardDelegate <NSObject>

@required

- (void)textDidChangeForKeyboard:(IKAppKeyboard *)arg1;

@optional

- (void)hintsDidChangeForKeyboard:(IKAppKeyboard *)arg1;

@end
