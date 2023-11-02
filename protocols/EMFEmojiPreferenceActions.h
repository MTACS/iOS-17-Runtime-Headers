
@protocol EMFEmojiPreferenceActions <NSObject>

@required

- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(EMFEmojiToken *)arg1;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2 typingName:(NSString *)arg3;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageSource:(unsigned long long)arg2 replacementContext:(NSString *)arg3 searchQuery:(NSString *)arg4 resultPosition:(NSNumber *)arg5 numberSearchQueriesRun:(NSNumber *)arg6 wasPositiveEngagement:(bool)arg7;
- (void)didUseEmojiInCharacterPickerExtended:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInCharacterPickerLightweight:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInCharacterPickerPopover:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInDFRBar:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInDictation:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInEmojiKeyboardPalette:(EMFEmojiToken *)arg1 wasFromRecentsSection:(bool)arg2;
- (void)didUseEmojiInEmojiKeyboardSearch:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInHandwriting:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInKeyboardCandidateBar:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(NSString *)arg2;

@end
