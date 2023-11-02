
@protocol STSKeyCommandDelegate

@required

- (void)didPressDownKey;
- (void)didPressReturnKey:(NSString *)arg1;
- (void)didPressUpKey;
- (void)didRequestClose;

@end
