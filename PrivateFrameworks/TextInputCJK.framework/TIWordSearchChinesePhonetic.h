
@interface TIWordSearchChinesePhonetic : TIWordSearch {
    bool  _fuzzyPinyinEnabled;
    NSArray * _fuzzyPinyinPairs;
    int  _shuangpinType;
    bool  _tenKeyPinyinEnabled;
}

@property (nonatomic) bool fuzzyPinyinEnabled;
@property (nonatomic, retain) NSArray *fuzzyPinyinPairs;
@property (nonatomic) int shuangpinType;
@property (nonatomic) bool tenKeyPinyinEnabled;

+ (id)pinyinCharacterSetWithTones;

- (void).cxx_destruct;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (void)clearCacheForInputString:(id)arg1 keyboardInput:(id)arg2 unambiguousSyllableCount:(unsigned long long)arg3 selectedDisambiguationCandidateIndex:(unsigned long long)arg4;
- (void)dealloc;
- (bool)fuzzyPinyinEnabled;
- (id)fuzzyPinyinPairs;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(bool)arg1 firstSyllableLocked:(bool)arg2 reanalysisMode:(bool)arg3 hardwareKeyboardMode:(bool)arg4 predictionEnabled:(bool)arg5;
- (int)mecabraInputMethodType;
- (unsigned char)nameReadingPairGenerationMode;
- (void)setCustomDialectLanguageModel:(id)arg1;
- (void)setFuzzyPinyinEnabled:(bool)arg1;
- (void)setFuzzyPinyinPairs:(id)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)setTenKeyPinyinEnabled:(bool)arg1;
- (bool)shareVocabulary;
- (int)shuangpinType;
- (bool)tenKeyPinyinEnabled;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateFuzzyPinyinSettings;
- (void)updateMecabraState;
- (void)updateShuangpinTypeWithReanalysisMode:(bool)arg1;

@end
