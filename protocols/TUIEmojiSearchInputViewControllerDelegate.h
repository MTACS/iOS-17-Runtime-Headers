
@protocol TUIEmojiSearchInputViewControllerDelegate <NSObject>

@required

- (void)emojiSearchTextFieldDidBecomeActive:(UITextField *)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(UITextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(UITextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(UITextField *)arg1;

@optional

- (void)emojiSearchDidReceiveResults:(NSArray *)arg1 forExactQuery:(NSString *)arg2 autocorrectedQuery:(NSString *)arg3;
- (void)emojiSearchTextFieldDidReset:(UITextField *)arg1;
- (void)emojiSearchWillInsertEmoji:(NSString *)arg1 forSearchQuery:(NSString *)arg2;

@end
