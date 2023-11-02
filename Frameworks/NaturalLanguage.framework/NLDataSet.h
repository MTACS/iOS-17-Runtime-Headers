
@interface NLDataSet : NSObject {
    NLModelConfiguration * _configuration;
    NLDataProvider * _testDataProvider;
    NLDataProvider * _trainingDataProvider;
    NLDataProvider * _validationDataProvider;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long numberOfTestInstances;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly) unsigned long long numberOfValidationInstances;

+ (id)dataSetWithDataSet:(id)arg1 constraintParameters:(struct _NLConstraintParameters { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })arg2 modelTrainer:(id)arg3;

- (void).cxx_destruct;
- (id)configuration;
- (id)dataProviderOfType:(long long)arg1;
- (id)documentFrequencyMap;
- (id)initWithConfiguration:(id)arg1 dataProvider:(id)arg2 validationSplit:(double)arg3 testingSplit:(double)arg4;
- (id)initWithConfiguration:(id)arg1 trainingDataProvider:(id)arg2 validationDataProvider:(id)arg3 testDataProvider:(id)arg4;
- (id)initWithConfiguration:(id)arg1 trainingDataURL:(id)arg2 validationDataURL:(id)arg3 testDataURL:(id)arg4;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfTestInstances;
- (unsigned long long)numberOfTrainingInstances;
- (unsigned long long)numberOfValidationInstances;
- (unsigned long long)numberOfVocabularyEntries;
- (id)testInstanceAtIndex:(unsigned long long)arg1;
- (id)trainingInstanceAtIndex:(unsigned long long)arg1;
- (id)validationInstanceAtIndex:(unsigned long long)arg1;
- (id)vocabularyMap;

@end
