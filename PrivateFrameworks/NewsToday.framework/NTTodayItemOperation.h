
@interface NTTodayItemOperation : FCOperation {
    <FCNewsAppConfiguration> * _appConfiguration;
    NSDictionary * _catchUpOperationResultsBySectionDescriptor;
    <FCContentContext> * _contentContext;
    NSArray * _feedItems;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    <NTTodayResultOperationInfoProviding> * _operationInfo;
    NSDictionary * _resultAssetFileURLsByRemoteURL;
    NSObject * _resultAssetsHoldToken;
    NSObject * _resultRecordsHoldToken;
    NSDictionary * _resultTodayItemsBySectionDescriptor;
    NSDictionary * _slotAllocationByDynamicSlotItemID;
    <FCTodayPrivateData> * _todayData;
    id /* block */  _todayItemCompletion;
}

@property (nonatomic, copy) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, copy) NSDictionary *catchUpOperationResultsBySectionDescriptor;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, copy) NSArray *feedItems;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic, copy) <NTTodayResultOperationInfoProviding> *operationInfo;
@property (nonatomic, retain) NSDictionary *resultAssetFileURLsByRemoteURL;
@property (nonatomic, retain) NSObject *resultAssetsHoldToken;
@property (nonatomic, retain) NSObject *resultRecordsHoldToken;
@property (nonatomic, retain) NSDictionary *resultTodayItemsBySectionDescriptor;
@property (nonatomic, copy) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (nonatomic, retain) <FCTodayPrivateData> *todayData;
@property (nonatomic, copy) id /* block */ todayItemCompletion;

- (void).cxx_destruct;
- (id)_extractFeedItemsFromInputs;
- (void)_fetchProtoitemsWithCompletion:(id /* block */)arg1;
- (void)_saveWithCompletion:(id /* block */)arg1;
- (id)appConfiguration;
- (id)catchUpOperationResultsBySectionDescriptor;
- (id)contentContext;
- (id)feedItems;
- (id)feedPersonalizer;
- (id)forYouFetchInfo;
- (id)init;
- (id)operationInfo;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultAssetFileURLsByRemoteURL;
- (id)resultAssetsHoldToken;
- (id)resultRecordsHoldToken;
- (id)resultTodayItemsBySectionDescriptor;
- (void)setAppConfiguration:(id)arg1;
- (void)setCatchUpOperationResultsBySectionDescriptor:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setOperationInfo:(id)arg1;
- (void)setResultAssetFileURLsByRemoteURL:(id)arg1;
- (void)setResultAssetsHoldToken:(id)arg1;
- (void)setResultRecordsHoldToken:(id)arg1;
- (void)setResultTodayItemsBySectionDescriptor:(id)arg1;
- (void)setSlotAllocationByDynamicSlotItemID:(id)arg1;
- (void)setTodayData:(id)arg1;
- (void)setTodayItemCompletion:(id /* block */)arg1;
- (id)slotAllocationByDynamicSlotItemID;
- (id)todayData;
- (id /* block */)todayItemCompletion;
- (bool)validateOperation;

@end
