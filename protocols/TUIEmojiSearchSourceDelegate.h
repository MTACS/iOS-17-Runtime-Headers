
@protocol TUIEmojiSearchSourceDelegate <NSObject>

@required

- (void)emojiSearchSource:(TUIEmojiSearchSource *)arg1 didProduceResults:(NSArray *)arg2 forExactQuery:(NSString *)arg3 autocorrectedQuery:(NSString *)arg4;

@end
