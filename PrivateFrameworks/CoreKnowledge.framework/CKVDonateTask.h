
@interface CKVDonateTask : NSObject {
    NSObject * _bridge;
    NSArray * _derivativeTaskIds;
    unsigned short  _donateOptions;
    NSObject<CKVDonatorProvider> * _donatorProvider;
    bool  _isMultiDataset;
    double  _timeout;
}

@property (nonatomic, readonly) NSArray *derivativeTaskIds;

- (void).cxx_destruct;
- (void)_clearAllDatasets;
- (void)_clearDataset:(id)arg1;
- (void)_donateAllDatasets:(unsigned short)arg1 withReason:(unsigned short)arg2 completion:(id /* block */)arg3;
- (void)_donateDataset:(id)arg1 withType:(unsigned short)arg2 reason:(unsigned short)arg3 completion:(id /* block */)arg4;
- (long long)_enumerateAndStreamDeltaDataset:(id)arg1 fullStream:(id)arg2 incrementalStream:(id)arg3;
- (long long)_enumerateAndStreamFullDataset:(id)arg1 fullStream:(id)arg2;
- (id)_getProviderBridge;
- (bool)_isIncrementalPreferred;
- (void)clearWithReason:(unsigned short)arg1;
- (id)derivativeTaskIds;
- (id)init;
- (id)initWithDonatorProvider:(id)arg1 datasetBridge:(id)arg2 timeout:(double)arg3 derivativeTaskIds:(id)arg4 donateOptions:(unsigned short)arg5;
- (id)initWithDonatorProvider:(id)arg1 deltaDatasetBridge:(id)arg2 timeout:(double)arg3;
- (id)initWithDonatorProvider:(id)arg1 fullDatasetBridge:(id)arg2 derivativeTaskIds:(id)arg3 timeout:(double)arg4;
- (id)initWithDonatorProvider:(id)arg1 fullDatasetBridge:(id)arg2 timeout:(double)arg3;
- (id)initWithDonatorProvider:(id)arg1 multiDatasetBridge:(id)arg2 timeout:(double)arg3;
- (id)lastChangesAccepted;
- (id)modifiedItemIdsWithDatabaseSearcher:(id)arg1;
- (void)runWithType:(unsigned short)arg1 reason:(unsigned short)arg2;
- (void)runWithType:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(id /* block */)arg3;

@end
