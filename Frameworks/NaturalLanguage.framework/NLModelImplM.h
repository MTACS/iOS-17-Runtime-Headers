
@interface NLModelImplM : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSDictionary * _labelMap;
    const void * _mrlModel;
    unsigned long long  _numberOfTrainingInstances;
    NSDictionary * _vocabularyMap;
}

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8;
- (id)initWithModelTrainer:(id)arg1 error:(id*)arg2;
- (id)initWithOwnedModelObject:(const void*)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 numberOfTrainingInstances:(unsigned long long)arg5;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)vocabularyMap;

@end
