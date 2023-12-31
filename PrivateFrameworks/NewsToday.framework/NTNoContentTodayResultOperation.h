
@interface NTNoContentTodayResultOperation : NTTodayResultOperation {
    NSDictionary * _resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo * _resultFetchInfo;
    NTTodayResults * _resultTodayResults;
}

@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, copy) NTPBTodayResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic, copy) NTTodayResults *resultTodayResults;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultAssetHandlesByAssetID;
- (id)resultFetchInfo;
- (id)resultTodayResults;
- (void)setResultAssetHandlesByAssetID:(id)arg1;
- (void)setResultFetchInfo:(id)arg1;
- (void)setResultTodayResults:(id)arg1;
- (bool)validateOperation;

@end
