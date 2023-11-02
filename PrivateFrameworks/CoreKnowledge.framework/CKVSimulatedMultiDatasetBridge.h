
@interface CKVSimulatedMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    unsigned short  _task;
}

- (id)_createDatasetInfoSummary:(long long)arg1 withOriginAppId:(id)arg2;
- (id)datasetInfoSummaryListForTask;
- (void)enumerateAllDatasets:(unsigned long long*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithTask:(unsigned short)arg1;
- (id)profileDirectory;
- (id)profileFileName;

@end
