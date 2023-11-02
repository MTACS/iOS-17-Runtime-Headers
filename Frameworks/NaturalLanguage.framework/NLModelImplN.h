
@interface NLModelImplN : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSDictionary * _labelMap;
    void * _modelContainer;
    void * _nlModel;
    unsigned long long  _numberOfTrainingInstances;
}

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)initWithModelContainer:(void*)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8;
- (id)initWithModelTrainer:(id)arg1 error:(id*)arg2;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsDictionaryForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;

@end
