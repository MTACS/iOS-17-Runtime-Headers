
@protocol UIKeyInput <UITextInputTraits>

@required

- (void)deleteBackward;
- (bool)hasText;
- (void)insertText:(NSString *)arg1;

@end
