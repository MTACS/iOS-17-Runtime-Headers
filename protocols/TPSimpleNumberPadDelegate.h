
@protocol TPSimpleNumberPadDelegate

@required

- (void)simpleNumberPad:(TPSimpleNumberPad *)arg1 buttonPressedWithCharacter:(NSString *)arg2;
- (void)simpleNumberPadDeletePressed:(TPSimpleNumberPad *)arg1;

@end
