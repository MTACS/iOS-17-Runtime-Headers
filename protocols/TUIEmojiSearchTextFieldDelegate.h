
@protocol TUIEmojiSearchTextFieldDelegate <NSObject>

@required

- (void)emojiSearchTextField:(TUIEmojiSearchTextField *)arg1 didChangeSearchString:(NSString *)arg2;
- (void)emojiSearchTextFieldDidBecomeActive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldWillClear:(TUIEmojiSearchTextField *)arg1;

@end
