
@interface NLModelImplML : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSString * _inputName;
    MLModel * _mlModel;
    NSString * _outputName;
}

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithMLModel:(id)arg1 configuration:(id)arg2;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8;
- (id)initWithModelTrainer:(id)arg1 error:(id*)arg2;
- (id)modelData;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;

@end
