
@interface NTParsecTodayResultOperation : NTTodayResultOperation {
    NSDictionary * _resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo * _resultFetchInfo;
    NTTodayResults * _resultTodayResults;
}

@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, copy) NTPBTodayResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic, copy) NTTodayResults *resultTodayResults;

- (void).cxx_destruct;
- (id)_aggregateSectionsWithSectionDescriptor:(id)arg1 headlines:(id)arg2;
- (void)_fetchThumbnailsForTodayResults:(id)arg1 withSearchResultsByHeadline:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchTodayResultsWithCompletionHandler:(id /* block */)arg1;
- (id)_todayResultsWithSectionDescriptor:(id)arg1 aggregationResult:(id)arg2 searchResultsByHeadline:(id)arg3 ZKWNewsOperation:(id)arg4;
- (void)_updateUseParsecEnabledWithCompletionHandler:(id /* block */)arg1;
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
