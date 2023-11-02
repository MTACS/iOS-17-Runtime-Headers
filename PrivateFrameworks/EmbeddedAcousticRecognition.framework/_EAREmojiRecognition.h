
@interface _EAREmojiRecognition : NSObject {
    struct __EmojiLocaleDataWrapper { } * _cemlocaleRef;
    NSArray * _frequentEmojis;
    bool  _isEmojiDisambiguationUsed;
    bool  _isEmojiPersonalizationUsed;
    EMFEmojiLocaleData * _localeData;
    EMFEmojiPreferencesClient * _preferences;
}

@property (nonatomic, readonly) bool isEmojiDisambiguationUsed;
@property (nonatomic, readonly) bool isEmojiPersonalizationUsed;

+ (void)initialize;

- (void).cxx_destruct;
- (id)baseStringForEmojiString:(id)arg1;
- (void)dealloc;
- (void)didUseEmoji:(id)arg1 replacementContext:(id)arg2;
- (id)formatEmojiStrings:(id)arg1;
- (id)formatEmojiStrings:(id)arg1 isLogging:(bool)arg2;
- (id)initWithLanguage:(id)arg1;
- (bool)isEmojiDisambiguationUsed;
- (bool)isEmojiPersonalizationUsed;
- (bool)isEmojiRecognitionCapable;
- (bool)isValidEmoji:(id)arg1;
- (void)recognizeEmojisInInputString:(id)arg1 enumerateUsingBlock:(id /* block */)arg2;
- (void)resetEmojiMetrics;
- (void)resetEmojiPreferences;
- (id)searchEmojiAlternativesForSpokenEmoji:(id)arg1 count:(long long)arg2 emojiCharacter:(id)arg3;

@end
