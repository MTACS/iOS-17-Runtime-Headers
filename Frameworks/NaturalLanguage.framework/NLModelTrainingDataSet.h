
@interface NLModelTrainingDataSet : NLDataSet {
    NLDataProvider * _modelTrainingDataProvider;
    NLDataProvider * _modelValidationDataProvider;
}

- (void).cxx_destruct;
- (id)dataProviderOfType:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 numberOfTrainingInstances:(unsigned long long)arg2 numberOfValidationInstances:(unsigned long long)arg3 trainingDataSource:(void*)arg4 validationDataSource:(void*)arg5 instanceDataProvider:(id /* block */)arg6;

@end
