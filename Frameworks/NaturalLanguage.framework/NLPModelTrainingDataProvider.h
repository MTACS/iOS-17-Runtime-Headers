
@interface NLPModelTrainingDataProvider : NLDataProvider {
    void * _dataSource;
    id /* block */  _instanceDataProvider;
    unsigned long long  _numberOfInstances;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void*)arg3 instanceDataProvider:(id /* block */)arg4;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfInstances;

@end
