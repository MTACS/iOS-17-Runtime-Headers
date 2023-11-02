
@interface CRLanguageResources : NSObject {
    CVNLPLanguageResourceBundle * __cvnlpLanguageResourceBundle;
    struct CVNLPLanguageModel { } * _cvnlpCharacterLanguageModel;
    void * _lmCharacterLanguageModel;
    NSLocale * _locale;
    struct _LXLexicon { } * _staticLexicon;
    void * _wordLanguageModel;
    void * _wordTokenizer;
}

@property (retain) CVNLPLanguageResourceBundle *_cvnlpLanguageResourceBundle;
@property (nonatomic, readonly) struct CVNLPLanguageModel { }*cvnlpCharacterLanguageModel;
@property (nonatomic, readonly) bool isCustomWordsSupported;
@property (nonatomic, readonly) void*lmCharacterLanguageModel;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) struct _LXLexicon { }*staticLexicon;
@property (nonatomic, readonly) void*wordLanguageModel;
@property (nonatomic, readonly) void*wordTokenizer;

+ (struct CVNLPLanguageModel { }*)createCVNLPCharacterLanguageModel:(id)arg1;
+ (void*)createCharacterModel:(id)arg1;
+ (struct _LXLexicon { }*)createStaticLexicon:(id)arg1;
+ (void*)createWordLanguageModel:(id)arg1 type:(long long)arg2;
+ (bool)isCharLMForLanguageAvailableInTextRecognition:(id)arg1;
+ (bool)isCustomWordsSupportedForLanguageIdentifier:(id)arg1;
+ (bool)isLanguageSupported:(id)arg1;

- (void).cxx_destruct;
- (id)_cvnlpLanguageResourceBundle;
- (struct CVNLPLanguageModel { }*)cvnlpCharacterLanguageModel;
- (id)cvnlpLanguageResourceBundle:(id)arg1 lmConfig:(id)arg2;
- (void)dealloc;
- (id)initWithLanguageIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isCustomWordsSupported;
- (void*)lmCharacterLanguageModel;
- (id)locale;
- (void)set_cvnlpLanguageResourceBundle:(id)arg1;
- (struct _LXLexicon { }*)staticLexicon;
- (void*)wordLanguageModel;
- (void*)wordTokenizer;

@end
