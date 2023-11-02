
@interface SGNameDetector : NSObject {
    SGTokenizerMappingTransformer * _coreNLPTokenizer;
    NSString * _language;
    SGTokenizerMappingTransformer * _noCoreNLPTokenizer;
    SGNameMappingTransformer * _transformer;
}

+ (id)_contactNames;
+ (id)_fetchContactNamesToLimit:(unsigned long long)arg1;
+ (id)_fetchContactNamesToLimit:(unsigned long long)arg1 peopleSuggester:(id)arg2;

- (void).cxx_destruct;
- (id)_detectContactNames:(id)arg1;
- (id)_detectNLPNames:(id)arg1;
- (id)_detectNames:(id)arg1 withNameSet:(id)arg2;
- (id)detectNames:(id)arg1 algorithm:(unsigned long long)arg2;
- (id)detectNames:(id)arg1 withNameSet:(id)arg2;
- (id)initWithLanguage:(id)arg1;
- (id)tokenizerWithCoreNLPEnabled:(bool)arg1;

@end
