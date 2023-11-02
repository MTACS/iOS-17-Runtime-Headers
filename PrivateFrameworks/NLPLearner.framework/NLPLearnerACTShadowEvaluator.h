
@interface NLPLearnerACTShadowEvaluator : NLPLearnerShadowEvaluator {
    NSString * _tempCorpusPath;
}

@property (nonatomic, retain) NSString *tempCorpusPath;

+ (void)initialize;

- (void).cxx_destruct;
- (id)evaluateModel:(id)arg1 onRecords:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4 error:(id*)arg5;
- (void)setTempCorpusPath:(id)arg1;
- (id)tempCorpusPath;

@end
