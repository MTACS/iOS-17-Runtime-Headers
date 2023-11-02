
@interface NLLanguageRecognizer : NSObject {
    void * _identifier;
    NSArray * _languageConstraints;
    NSDictionary * _languageHints;
}

@property (nonatomic, readonly, copy) NSString *dominantLanguage;
@property (nonatomic, copy) NSArray *languageConstraints;
@property (nonatomic, copy) NSDictionary *languageHints;

+ (id)dominantLanguageForString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dominantLanguage;
- (id)init;
- (id)languageConstraints;
- (id)languageHints;
- (id)languageHypothesesWithMaximum:(unsigned long long)arg1;
- (void)processString:(id)arg1;
- (void)processString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)reset;
- (void)setLanguageConstraints:(id)arg1;
- (void)setLanguageHints:(id)arg1;

@end
