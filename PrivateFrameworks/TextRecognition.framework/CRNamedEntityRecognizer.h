
@interface CRNamedEntityRecognizer : NSObject {
    NLGazetteer * _lastNameGazetteer;
    NLGazetteer * _nameGazetteer;
    NLTagger * _tagger;
    NLTokenizer * _tokenizer;
}

+ (id)_NLLanguageFromLocale:(id)arg1;

- (void).cxx_destruct;
- (id)_labelForString:(id)arg1 useLastNameGazetteer:(bool)arg2;
- (id)_nameCandidateTokensFromString:(id)arg1;
- (id)_tokenizeString:(id)arg1;
- (id)initWithNameGazetteerURL:(id)arg1 lastNameGazetteerURL:(id)arg2;
- (double)personNameScoreForStringWithGazetteers:(id)arg1 locale:(id)arg2 useLastNameGazetteer:(bool)arg3;
- (double)personNameScoreForStringWithTagger:(id)arg1 locale:(id)arg2;

@end
