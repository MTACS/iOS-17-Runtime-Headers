
@interface CRLanguageCorrection : NSObject {
    void * _characterLanguageModel;
    struct _LXLexicon { } * _dynamicLexicon;
    NSString * _invalidSingleCharCNNCode;
    NSLocale * _locale;
    CRCHPatternNetwork * _patternFST;
    struct _LXLexicon { } * _staticLexicon;
}

@property (nonatomic) void*characterLanguageModel;
@property (readonly) NSCharacterSet *confusableCharacters;
@property (nonatomic) struct _LXLexicon { }*dynamicLexicon;
@property (nonatomic, retain) NSString *invalidSingleCharCNNCode;
@property (readonly) NSLocale *locale;
@property (nonatomic, retain) CRCHPatternNetwork *patternFST;
@property (nonatomic) struct _LXLexicon { }*staticLexicon;

+ (id)supportedLanguagesForRevision:(unsigned long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)adjustCaseConfusions:(id)arg1;
- (void*)characterLanguageModel;
- (id)confusableCharacters;
- (id)correctTextFeature:(id)arg1 inImage:(id)arg2 withTextPieces:(id)arg3 withMaxWidthPerRegion:(double)arg4 withMedianCharSpacing:(double)arg5 withBreakpoints:(const void*)arg6 segmenter:(void*)arg7 options:(id)arg8 numCharCandidates:(int)arg9 downscaleSpaceRatio:(bool)arg10 latticePresetIdx:(int)arg11 latticeResults:(id)arg12;
- (struct _LXLexicon { }*)createDynamicLexiconForLocale:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct _LXLexicon { }*)dynamicLexicon;
- (id)findBestPathsForTextResults:(id)arg1 numPathsToExtract:(unsigned long long)arg2 ngramsize:(unsigned long long)arg3;
- (id)initWithRevision:(unsigned long long)arg1 localeCode:(id)arg2 customWords:(id)arg3;
- (id)invalidSingleCharCNNCode;
- (bool)isLanguageCorrectionSupportedForLanguage:(id)arg1 revision:(unsigned long long)arg2;
- (void)loadCharacterNgramModel:(id)arg1;
- (id)locale;
- (id)patternFST;
- (bool)preferAllLowercase:(id)arg1;
- (bool)preferAllUppercase:(id)arg1;
- (void)setCharacterLanguageModel:(void*)arg1;
- (void)setDynamicLexicon:(struct _LXLexicon { }*)arg1;
- (void)setInvalidSingleCharCNNCode:(id)arg1;
- (void)setPatternFST:(id)arg1;
- (void)setStaticLexicon:(struct _LXLexicon { }*)arg1;
- (struct _LXLexicon { }*)staticLexicon;

@end
