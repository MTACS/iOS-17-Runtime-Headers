
@interface _NSLexiconMorphunDictionary : NSObject {
    struct MANAConfigurableAnalyzer { } * _analyzer;
    NSLocale * _appropriateLocale;
    const struct MDDictionaryMetaData { } * _dictionary;
    NSString * _languageCode;
    struct MTokenizer { } * _tokenizer;
}

@property (nonatomic, readonly, copy) NSString *languageCode;

- (void)_iterateFormsOfWord:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)allPossibleWordAttributesForWord:(id)arg1;
- (void)dealloc;
- (id)initWithLanguage:(id)arg1;
- (id)languageCode;
- (id)preferredPronoun:(id)arg1 forTermOfAddress:(id)arg2 morphology:(id)arg3 dependency:(id)arg4;

@end
