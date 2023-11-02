
@protocol TUIEmojiSearchResultsCollectionViewControllerDelegate <NSObject>

@required

- (void)emojiSearchResultsController:(TUIEmojiSearchResultsCollectionViewController *)arg1 didRequestVariantSelectorForEmojiToken:(EMFEmojiToken *)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)emojiSearchResultsController:(TUIEmojiSearchResultsCollectionViewController *)arg1 didSelectEmoji:(NSString *)arg2;

@end
