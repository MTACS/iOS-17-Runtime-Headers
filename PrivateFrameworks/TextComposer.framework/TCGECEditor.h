
@interface TCGECEditor : NSObject <TCPostEditing> {
    NSMutableDictionary * _cachedGrammarDetailsDictionary;
    NSMutableArray * _cachedSentenceArray;
    NSObject<TCGECModel> * _model;
    unsigned long long  _modelLoadingState;
    NSDictionary * _options;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)OTABundlePath;
- (id)_loadModel;
- (id)backgroundLoadingQueue;
- (void)checkSentence:(id)arg1 locale:(id)arg2 offset:(unsigned long long)arg3 options:(id)arg4 requireResult:(bool)arg5 mutableResults:(id)arg6;
- (void)checkString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5 mutableResults:(id)arg6;
- (id)computedGrammarDetailsForSentence:(id)arg1 locale:(id)arg2 options:(id)arg3;
- (id)grammarDetailsForSentence:(id)arg1 locale:(id)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1;
- (void)loadModelsInBackground:(bool)arg1;
- (long long)modelTypeWithOptions:(id)arg1;
- (id)modelUsingBackgroundLoading:(bool)arg1;
- (void)resetModels;

@end
