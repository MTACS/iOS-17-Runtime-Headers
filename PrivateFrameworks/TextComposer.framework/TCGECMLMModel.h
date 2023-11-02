
@interface TCGECMLMModel : NSObject <TCGECModel> {
    NSDictionary * _acceptableCorrections;
    unsigned long long  _lmVocabSize;
    struct CoreLanguageModelWithState { } * _maskedLM;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;
- (bool)loadCorrectionsFromURL:(id)arg1;

@end
