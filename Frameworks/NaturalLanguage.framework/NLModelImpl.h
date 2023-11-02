
@interface NLModelImpl : NSObject

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly, copy) NSData *customEmbeddingData;
@property (readonly, copy) NSDictionary *documentFrequencyMap;
@property (readonly, copy) NLEmbedding *embedding;
@property (readonly, copy) NSData *embeddingData;
@property (readonly, copy) NLGazetteer *gazetteer;
@property (readonly, copy) NSDictionary *labelMap;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly) unsigned long long systemVersion;
@property (readonly, copy) NSDictionary *trainingInfo;
@property (readonly, copy) NSDictionary *vocabularyMap;

- (id)configuration;
- (id)customEmbeddingData;
- (id)documentFrequencyMap;
- (id)embedding;
- (id)embeddingData;
- (id)gazetteer;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8;
- (id)initWithModelTrainer:(id)arg1 error:(id*)arg2;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelArraysForTokenArrays:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsForTokens:(id)arg1;
- (unsigned long long)systemVersion;
- (id)trainingInfo;
- (id)vocabularyMap;

@end
