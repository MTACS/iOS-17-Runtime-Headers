
@interface TIKeyboardFeatureSpecialization : NSObject {
    long long  _currentUserInterfaceIdiom;
    TIInputMode * _inputMode;
    bool  _skipCandidateQualityFilter;
    bool  _useRelaxedOVSPolicy;
    struct USet { } * m_acceptableCharacterSet;
    NSMutableDictionary * m_compositionMaps;
    struct USet { } * m_precomposedCharacterSet;
    NSMutableDictionary * m_reverseCompositionMaps;
    NSString * m_softwareLayout;
}

@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic) bool skipCandidateQualityFilter;
@property (nonatomic) bool useRelaxedOVSPolicy;

+ (struct USet { }*)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;
+ (id)createSpecializationForInputMode:(id)arg1;
+ (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(bool)arg4;

- (void).cxx_destruct;
- (id)accentKeyStringForKeyboardState:(id)arg1;
- (bool)acceptsCharacter:(unsigned int)arg1;
- (id)allAccentKeyStrings;
- (bool)allowsAutocorrectionOfValidWords;
- (bool)canConvertExternalToExternal;
- (bool)canHandleKeyHitTest;
- (id)compositionMapForLayout:(id)arg1 reverse:(bool)arg2;
- (struct USet { }*)createAcceptableCharacterSet;
- (void*)createInputManager;
- (long long)currentUserInterfaceIdiom;
- (void)dealloc;
- (id)dictionaryInputMode;
- (bool)dictionaryUsesExternalEncoding;
- (bool)doesComposeText;
- (id)externalStringToInternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1 byConvertingEagerly:(bool)arg2;
- (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(bool)arg4;
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2;
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2 byConvertingEagerly:(bool)arg3;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (id)internalStringToExternal:(id)arg1;
- (id)keyboardBehaviors;
- (id)layoutTags;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)nonstopPunctuationCharacters;
- (const struct USet { }*)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (id)replacementForDoubleSpace;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setCurrentUserInterfaceIdiom:(long long)arg1;
- (void)setSkipCandidateQualityFilter:(bool)arg1;
- (void)setUseRelaxedOVSPolicy:(bool)arg1;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldClearInput:(id)arg1;
- (bool)shouldConvertAutocorrectionCandidatesToFullWidth;
- (bool)shouldConvertCandidateToExternal;
- (bool)shouldConvertEagerly;
- (bool)shouldExtendPriorWord;
- (bool)shouldLearnLowercaseAtBeginningOfSentence;
- (bool)skipCandidateQualityFilter;
- (id)spaceDeletingCharacters;
- (void)specializeInputManager:(void*)arg1 forLayoutState:(id)arg2;
- (id)supplementalLexiconWordExtraCharacters;
- (bool)supportsLearning;
- (bool)supportsReversionUI;
- (id)terminatorsDeletingAutospace;
- (bool)useRelaxedOVSPolicy;
- (id)wordCharacters;
- (id)wordMedialPunctuationCharacters;
- (id)wordSeparator;

@end
