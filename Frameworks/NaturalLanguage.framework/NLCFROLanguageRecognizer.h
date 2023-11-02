
@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    NSMutableString * _string;
    void * _tagger;
}

+ (id)dominantLanguageForString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dominantLanguage;
- (id)init;
- (id)languageHypothesesWithMaximum:(unsigned long long)arg1;
- (void)processString:(id)arg1;
- (void)reset;

@end
