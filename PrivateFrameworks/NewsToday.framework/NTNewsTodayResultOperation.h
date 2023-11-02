
@interface NTNewsTodayResultOperation : NTTodayResultOperation {
    NSMutableSet * _articleIDsToExclude;
    NSDate * _filterDate;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    NSDictionary * _resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo * _resultFetchInfo;
    double  _resultHeadlineScaleFactor;
    NTTodayResults * _resultTodayResults;
    NTPBTodayConfig * _todayConfig;
}

@property (nonatomic, retain) NSMutableSet *articleIDsToExclude;
@property (nonatomic, copy) NSDate *filterDate;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, copy) NTPBTodayResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic) double resultHeadlineScaleFactor;
@property (nonatomic, copy) NTTodayResults *resultTodayResults;
@property (nonatomic, copy) NTPBTodayConfig *todayConfig;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(bool)arg2 respectsWidgetVisibleSectionsLimit:(bool)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(id /* block */)arg8;
- (void)_fetchTodayResultsWithFetchHelper:(id)arg1 aggregator:(id)arg2 budgetInfo:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(id /* block */)arg7;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(id /* block */)arg7;
- (id)_firstRefreshDateDefaultsKey;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)arg1;
- (id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3;
- (id)articleIDsToExclude;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)filterDate;
- (id)forYouFetchInfo;
- (id)init;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (id)resultAssetHandlesByAssetID;
- (id)resultFetchInfo;
- (double)resultHeadlineScaleFactor;
- (id)resultTodayResults;
- (void)setArticleIDsToExclude:(id)arg1;
- (void)setFilterDate:(id)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setResultAssetHandlesByAssetID:(id)arg1;
- (void)setResultFetchInfo:(id)arg1;
- (void)setResultHeadlineScaleFactor:(double)arg1;
- (void)setResultTodayResults:(id)arg1;
- (void)setTodayConfig:(id)arg1;
- (id)todayConfig;
- (bool)validateOperation;

@end
