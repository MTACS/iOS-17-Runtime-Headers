
@interface NLModel : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NLModelConfiguration * _configuration;
    void * _container;
    NSData * _data;
    NSDictionary * _infoDictionary;
    MLModel * _mlModel;
    NLModelImpl * _modelImpl;
}

@property (readonly, copy) NLModelConfiguration *configuration;

+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)modelWithData:(id)arg1 error:(id*)arg2;
+ (id)modelWithMLModel:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)classifierTestResultsWithDataProvider:(id)arg1;
- (id)configuration;
- (id)data;
- (void)dealloc;
- (id)documentFrequencyMap;
- (id)embedding;
- (id)embeddingData;
- (id)gazetteer;
- (id)initWithClassifierMLModel:(id)arg1;
- (id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id*)arg3;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (id)labelArray;
- (id)labelMap;
- (id)mlModel;
- (id)predictedLabelArraysForTokenArrays:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)sequenceTestResultsWithDataProvider:(id)arg1;
- (unsigned long long)systemVersion;
- (id)testResultsWithDataProvider:(id)arg1;
- (id)testResultsWithDataSet:(id)arg1;
- (id)vocabularyMap;
- (bool)writeMLModelToURL:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;

@end
