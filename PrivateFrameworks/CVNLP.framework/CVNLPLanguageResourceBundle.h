
@interface CVNLPLanguageResourceBundle : NSObject {
    CVNLPDecodingLanguageModel * _characterLanguageModel;
    CVNLPDecodingLexicons * _lexicons;
    CVNLPDecodingLanguageModel * _wordLanguageModel;
}

@property (nonatomic, readonly) CVNLPDecodingLanguageModel *characterLanguageModel;
@property (nonatomic, readonly) CVNLPDecodingLexicons *lexicons;
@property (nonatomic, readonly) CVNLPDecodingLanguageModel *wordLanguageModel;

- (void).cxx_destruct;
- (id)characterLanguageModel;
- (id)initWithLexicons:(id)arg1 characterLanguageModel:(id)arg2 wordLanguageModel:(id)arg3;
- (id)lexicons;
- (id)packagedLexiconCursorsUsingContext:(id)arg1;
- (id)packagedLexiconRootCursors;
- (id)wordLanguageModel;

@end
