
@interface TIInputMode : NSObject <NSCopying> {
    Class  _inputManagerClass;
    Class  _keyboardFeatureSpecializationClass;
    NSString * _languageWithRegion;
    NSLocale * _locale;
    Class  _multilingualInputManagerClass;
    NSString * _normalizedIdentifier;
    NSString * _variant;
}

@property (nonatomic, readonly) NSArray *allAccentKeyStrings;
@property (nonatomic, readonly) NSString *autocorrectionLocaleIdentifier;
@property (nonatomic, readonly) NSDictionary *compositionMap;
@property (nonatomic, readonly) bool doesComposeText;
@property (nonatomic, readonly) Class inputManagerClass;
@property (nonatomic, readonly) Class keyboardFeatureSpecializationClass;
@property (nonatomic, readonly) NSString *languageWithRegion;
@property (nonatomic, readonly) NSDictionary *layoutTags;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) Class multilingualInputManagerClass;
@property (nonatomic, readonly) NSString *nonstopPunctuationCharacters;
@property (nonatomic, readonly) NSString *normalizedIdentifier;
@property (nonatomic, readonly) NSString *replacementForDoubleSpace;
@property (nonatomic, readonly) NSDictionary *reverseCompositionMap;
@property (nonatomic, readonly) NSString *sentenceDelimitingCharacters;
@property (nonatomic, readonly) NSString *sentencePrefixingCharacters;
@property (nonatomic, readonly) NSString *sentenceTrailingCharacters;
@property (nonatomic, readonly) bool spaceAutocorrectionEnabled;
@property (nonatomic, readonly) NSString *spaceDeletingCharacters;
@property (nonatomic, readonly) bool supportsMultilingualKeyboard;
@property (nonatomic, readonly) bool supportsPrediction;
@property (nonatomic, readonly) bool typedStringLMRankingEnabled;
@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) NSString *wordMedialPunctuationCharacters;

+ (id)inputModeWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)allAccentKeyStrings;
- (id)autocorrectionLocaleIdentifier;
- (id)compositionMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doesComposeText;
- (unsigned long long)hash;
- (id)initWithNormalizedIdentifier:(id)arg1;
- (Class)inputManagerClass;
- (bool)isEqual:(id)arg1;
- (Class)keyboardFeatureSpecializationClass;
- (Class)keyboardFeatureSpecializationClassFromInputModeProperties;
- (id)languageWithRegion;
- (id)layoutTags;
- (id)locale;
- (Class)multilingualInputManagerClass;
- (id)nonstopPunctuationCharacters;
- (id)normalizedIdentifier;
- (id)replacementForDoubleSpace;
- (id)reverseCompositionMap;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setQuickTypeKeyboardFeatureSpecializationClass;
- (bool)spaceAutocorrectionEnabled;
- (id)spaceDeletingCharacters;
- (bool)supportsMultilingualKeyboard;
- (bool)supportsPrediction;
- (bool)typedStringLMRankingEnabled;
- (id)variant;
- (id)wordMedialPunctuationCharacters;

@end
