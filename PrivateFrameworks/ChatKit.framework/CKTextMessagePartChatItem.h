
@interface CKTextMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider * _dragItemProvider;
    bool  _hasCachedBigEmoji;
    bool  _shouldUseBigEmoji;
}

@property (nonatomic, readonly) bool containsExcessiveLineHeightCharacters;
@property (nonatomic, readonly) bool containsHyperlink;
@property (nonatomic, readonly, copy) NSAttributedString *fallbackCorruptText;
@property (nonatomic, readonly) bool shouldUseBigEmoji;
@property (nonatomic, readonly, copy) NSAttributedString *subject;
@property (nonatomic, readonly, copy) NSAttributedString *text;

- (void).cxx_destruct;
- (id)_attributedTextWithTextColor:(id)arg1;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)arg1;
- (id)_time;
- (bool)allowsMentions;
- (Class)balloonViewClass;
- (id)bodyTextFont;
- (id)compositionWithContext:(id)arg1;
- (bool)containsExcessiveLineHeightCharacters;
- (bool)containsHyperlink;
- (id)dragItemProvider;
- (id)fallbackCorruptText;
- (Class)impactBalloonViewClass;
- (bool)isShowingEditHistory;
- (id)loadTranscriptText;
- (id)meMentionsTextColor;
- (bool)mentionsMe:(id)arg1;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)sendAnimationTextWithColor:(id)arg1;
- (bool)shouldUseBigEmoji;
- (bool)showMoneyResults;
- (id)subject;
- (id)text;
- (id)time;

@end
