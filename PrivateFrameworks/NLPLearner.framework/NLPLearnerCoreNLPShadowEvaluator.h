
@interface NLPLearnerCoreNLPShadowEvaluator : NLPLearnerShadowEvaluator {
    unsigned long long  _maxSequenceLength;
}

@property (nonatomic) unsigned long long maxSequenceLength;

+ (void)initialize;

- (id)evaluateModel:(id)arg1 onRecords:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4 error:(id*)arg5;
- (id)evaluateModel:(struct CoreLanguageModelWithState { }*)arg1 onSingleExample:(id)arg2 tokenizer:(void*)arg3;
- (unsigned long long)maxSequenceLength;
- (id)modelCreationOptionsForModelURL:(id)arg1 options:(id)arg2;
- (void)setMaxSequenceLength:(unsigned long long)arg1;
- (bool)setMaxSequenceLengthForModelURL:(id)arg1;

@end
