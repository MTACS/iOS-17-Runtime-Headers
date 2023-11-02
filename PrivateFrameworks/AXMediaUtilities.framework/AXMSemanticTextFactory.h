
@interface AXMSemanticTextFactory : NSObject {
    NSMutableDictionary * _cachedLexicons;
    NSMutableDictionary * _compiledPatterns;
    NSDataDetector * _dataDetector;
    NSNumberFormatter * _numberFormatter;
    NLTagger * _tagger;
}

@property (nonatomic, retain) NSMutableDictionary *cachedLexicons;
@property (nonatomic, retain) NSMutableDictionary *compiledPatterns;
@property (nonatomic, retain) NSDataDetector *dataDetector;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) NLTagger *tagger;

- (void).cxx_destruct;
- (void)_applyCustomPatterns:(id)arg1;
- (void)_applyDataDetectors:(id)arg1;
- (void)_applyNaturalLanguageTokens:(id)arg1;
- (bool)_lexiconExistsForLocale:(id)arg1;
- (struct _LXLexicon { }*)_lexiconForLocale:(id)arg1;
- (void)_performSemanticAnalysis:(id)arg1;
- (id)_preprocessedText:(id)arg1;
- (bool)_string:(id)arg1 containsOnlyCharactersFrom:(id)arg2;
- (bool)_textExistsInLexicon:(id)arg1 withLocale:(id)arg2;
- (id)cachedLexicons;
- (id)compiledPatterns;
- (id)dataDetector;
- (id)numberFormatter;
- (id)semanticTextForText:(id)arg1 withLocale:(id)arg2;
- (void)setCachedLexicons:(id)arg1;
- (void)setCompiledPatterns:(id)arg1;
- (void)setDataDetector:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setTagger:(id)arg1;
- (id)tagger;

@end
