
@interface CKDPublishAssetsOperation : CKDDatabaseOperation {
    unsigned long long  _URLOptions;
    id /* block */  _assetPublishedBlock;
    NSOperation * _fetchRecordsOperation;
    NSMutableDictionary * _fetchedRecordsByID;
    NSDictionary * _fileNamesByAssetFieldNames;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, copy) id /* block */ assetPublishedBlock;
@property (nonatomic, retain) <CKPublishAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain) NSOperation *fetchRecordsOperation;
@property (nonatomic, retain) NSMutableDictionary *fetchedRecordsByID;
@property (nonatomic, retain) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (id)_checkEntitlements;
- (void)_dispatchAssetURLsForRecord:(id)arg1 pcs:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishPublishAssetsForRecord:(id)arg1;
- (id)activityCreate;
- (id /* block */)assetPublishedBlock;
- (void)cancel;
- (id)fetchRecordsOperation;
- (id)fetchedRecordsByID;
- (id)fileNamesByAssetFieldNames;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setAssetPublishedBlock:(id /* block */)arg1;
- (void)setFetchRecordsOperation:(id)arg1;
- (void)setFetchedRecordsByID:(id)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
