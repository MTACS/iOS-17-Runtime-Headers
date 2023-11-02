
@protocol UIDictationTipHandlerDelegate <NSObject>

@required

- (bool)dictationTipShown:(long long)arg1;
- (void)finalizeTextWithTipType:(long long)arg1 title:(NSString *)arg2 andTipDescription:(NSString *)arg3;
- (long long)getDictationTipSignaled;

@optional

- (NSString *)replaceEmojiInStringWithEmojiDictationCommand:(NSString *)arg1;

@end
