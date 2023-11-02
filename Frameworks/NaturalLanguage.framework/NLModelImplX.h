
@interface NLModelImplX : NLModelImpl {
    NLModelConfiguration * _configuration;
    NLContextualEmbedding * _contextualEmbedding;
    NSData * _customEmbeddingData;
    NLEmbedding * _embedding;
    NSString * _embeddingModelIdentifier;
    NSDictionary * _labelMap;
    NSData * _modelData;
    struct MontrealNeuralNetwork { } * _montrealModel;
    unsigned long long  _numberOfTrainingInstances;
    NSString * _trainingEmbeddingType;
    NSString * _trainingLanguage;
}

- (void).cxx_destruct;
- (id)configuration;
- (id)customEmbeddingData;
- (void)dealloc;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8;
- (id)initWithModelTrainer:(id)arg1 error:(id*)arg2;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (float*)outputForString:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsForTokens:(id)arg1;
- (unsigned long long)systemVersion;
- (id)trainingInfo;

@end
