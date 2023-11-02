
@interface TIEmojiCandidateGenerator : NSObject {
    NSArray * _activeInputModes;
    bool  m_didAttemptPrimaryEmojiGeneratorLoad;
    bool  m_didAttemptPrimaryLocaleForEmojiLoad;
    bool  m_didAttemptSecondaryEmojiGeneratorLoad;
    bool  m_didAttemptSecondaryLocaleForEmojiLoad;
    struct __EmojiLocaleDataWrapper { } * m_emojiDataForPrimaryLocale;
    struct __EmojiLocaleDataWrapper { } * m_emojiDataForSecondaryLocale;
    void * m_emojiGeneratorPrimaryLanguage;
    void * m_emojiGeneratorSecondaryLanguage;
    bool  m_isEmojiInputModeEnabled;
    bool  m_shouldShowEmojis;
}

@property (nonatomic, retain) NSArray *activeInputModes;
@property (nonatomic, readonly) TIInputMode *primaryInputMode;

- (void).cxx_destruct;
- (id)activeInputModes;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray { }*)arg1 inArray:(id)arg2 forInputString:(id)arg3;
- (void)dealloc;
- (id)emojiAdornmentCandidates:(id)arg1;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)arg1;
- (void)emojiAlternativesForText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)emojiAlternativesForText:(id)arg1 matchedString:(id*)arg2;
- (id)emojiAppendCandidates:(id)arg1;
- (id)emojiReplacementCandidates:(id)arg1;
- (id)emojiReplacementCandidates:(id)arg1 matchedString:(id*)arg2;
- (id)emojiReplacementCandidatesForKeyboardState:(id)arg1;
- (id)emojiReplacementCandidatesForText:(id)arg1;
- (void)emojiReplacementCandidatesForText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enumerateForEmojiAlternativesInText:(id)arg1 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2 matchedString:(id*)arg3;
- (id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2 asReplacementCandidate:(bool)arg3;
- (id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2 asReplacementCandidate:(bool)arg3 matchedString:(id*)arg4;
- (id)extractTokensForEmojiComputation:(id)arg1;
- (id)generateEmojiAdornmentCandidates:(id)arg1;
- (id)getSkinToneSensitiveEmojis:(id)arg1;
- (id)initWithActiveInputModes:(id)arg1;
- (void)logEmojiUsageFromCandidatebar:(id)arg1 replacementContext:(id)arg2;
- (id)primaryInputMode;
- (id)randomShuffle:(id)arg1;
- (void)setActiveInputModes:(id)arg1;
- (id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(struct __EmojiLocaleDataWrapper { }*)arg2 forInput:(id)arg3;
- (void)updateEmojiAdornmentGenerators;
- (void)updateEmojiLocale;
- (void)updateEmojiStatusForKeyboardState:(id)arg1;
- (void)updateEmojiStatusForKeyboardType:(unsigned long long)arg1 appIdentifier:(id)arg2;
- (void)updateForActiveInputModes:(id)arg1;

@end
