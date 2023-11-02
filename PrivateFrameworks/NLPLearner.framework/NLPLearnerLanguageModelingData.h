
@interface NLPLearnerLanguageModelingData : NLPLearnerTextData {
    struct CFScopedPtr<const _LXLexicon *> { 
        struct _LXLexicon {} *m_ref; 
    }  _lexicon;
    NSString * _tokenIDMapPath;
}

@property (nonatomic, copy) NSString *tokenIDMapPath;

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addExamples:(id)arg1;
- (void)addPreprocessedExample:(void*)arg1;
- (void)addResource:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;
- (id)nextEvaluationDataPoint;
- (id)nextTrainingDataBatch:(unsigned long long)arg1;
- (void)setTokenIDMapPath:(id)arg1;
- (id)tokenIDMapPath;

@end
