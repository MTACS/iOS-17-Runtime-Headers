
@interface CACEmojiManager : NSObject {
    EMFEmojiLocaleData * _emojiLocaleData;
    EMFEmojiPreferences * _emojiPreferences;
    NSString * _localeIdentifier;
}

@property (nonatomic, retain) EMFEmojiLocaleData *emojiLocaleData;
@property (nonatomic, retain) EMFEmojiPreferences *emojiPreferences;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;

+ (void)resetSharedManager;
+ (id)sharedManager;

- (void).cxx_destruct;
- (long long)countOfEmojisInString:(id)arg1;
- (id)emojiLocaleData;
- (id)emojiPreferences;
- (id)emojiStringsFromEmojiTokens:(id)arg1 skinToneFilter:(int)arg2;
- (id)emojiTokenUsingPrefixApproachForText:(id)arg1 skinToneFilter:(int)arg2;
- (id)emojisForText:(id)arg1 skinToneFilter:(int)arg2;
- (void)enumerateEmojisInText:(id)arg1 skinToneFilter:(int)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEmoji:(id)arg1;
- (id)localeIdentifier;
- (id)relatedEmojisForEmoji:(id)arg1 skinToneFilter:(int)arg2;
- (void)setEmojiLocaleData:(id)arg1;
- (void)setEmojiPreferences:(id)arg1;
- (id)stringByReplacingEmojisWithDescriptions:(id)arg1;
- (void)willInsertStringPotentiallyContainingEmojis:(id)arg1;

@end
