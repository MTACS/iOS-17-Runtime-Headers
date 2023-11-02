
@interface SiriSharedUIUtilities : NSObject

+ (id)_emojisToNotInclude;
+ (bool)applicationBundleIdentifierIsThirdParty:(id)arg1;
+ (bool)emojiIsValid:(struct __EmojiTokenWrapper { }*)arg1;
+ (long long)orbViewModeForSiriSessionState:(long long)arg1;
+ (long long)orbViewModeForSiriSessionState:(long long)arg1 isAttending:(bool)arg2;
+ (id)substringRangesContainingEmojiInString:(id)arg1;

@end
