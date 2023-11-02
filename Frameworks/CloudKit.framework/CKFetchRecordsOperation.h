
@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets> {
    unsigned long long  _assetBackedMergeableDeltaCount;
    NSMutableDictionary * _assetInfoByArrayIndexByRecordKeyByRecordID;
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSArray * _desiredKeys;
    NSDictionary * _desiredPackageFileIndices;
    bool  _dropInMemoryAssetContentASAP;
    id /* block */  _fetchRecordsCompletionBlock;
    id /* block */  _fetchRecordsCompletionBlock_wrapper;
    bool  _isFetchCurrentUserOperation;
    unsigned long long  _mergeableDeltaCount;
    unsigned long long  _mergeableValueCount;
    NSMutableSet * _packagesToDestroy;
    id /* block */  _perRecordCompletionBlock;
    id /* block */  _perRecordCompletionBlock_wrapper;
    id /* block */  _perRecordETagMatchedBlock;
    id /* block */  _perRecordETagMatchedBlock_wrapper;
    id /* block */  _perRecordProgressBlock;
    id /* block */  _perRecordProgressBlock_wrapper;
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSMutableDictionary * _recordIDsToRecords;
    NSDictionary * _recordIDsToVersionETags;
    bool  _shouldCloneFileInAssetCache;
    bool  _shouldFetchAssetContent;
    bool  _shouldFetchAssetContentInMemory;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic, retain) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;
@property (nonatomic, copy) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, readonly) <CKFetchRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) bool dropInMemoryAssetContentASAP;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock_wrapper;
@property (nonatomic) bool isFetchCurrentUserOperation;
@property (nonatomic, readonly) CKFetchRecordsOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock_wrapper;
@property (nonatomic, copy) id /* block */ perRecordETagMatchedBlock;
@property (nonatomic, copy) id /* block */ perRecordETagMatchedBlock_wrapper;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock_wrapper;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, copy) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSMutableDictionary *recordIDsToRecords;
@property (nonatomic, copy) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;
+ (id)fetchCurrentUserRecordOperation;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)assetInfoByArrayIndexByRecordKeyByRecordID;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (bool)claimPackagesInRecord:(id)arg1 error:(id*)arg2;
- (id)desiredKeys;
- (id)desiredPackageFileIndices;
- (bool)dropInMemoryAssetContentASAP;
- (id /* block */)fetchRecordsCompletionBlock;
- (id /* block */)fetchRecordsCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5;
- (void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2;
- (void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordIDs:(id)arg1;
- (bool)isFetchCurrentUserOperation;
- (id /* block */)perRecordCompletionBlock;
- (id /* block */)perRecordCompletionBlock_wrapper;
- (id /* block */)perRecordETagMatchedBlock;
- (id /* block */)perRecordETagMatchedBlock_wrapper;
- (id /* block */)perRecordProgressBlock;
- (id /* block */)perRecordProgressBlock_wrapper;
- (void)performCKOperation;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToRecords;
- (id)recordIDsToVersionETags;
- (void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(id)arg1;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setDropInMemoryAssetContentASAP:(bool)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setFetchRecordsCompletionBlockIVar:(id /* block */)arg1;
- (void)setFetchRecordsCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setIsFetchCurrentUserOperation:(bool)arg1;
- (void)setPerRecordCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setPerRecordETagMatchedBlock:(id /* block */)arg1;
- (void)setPerRecordETagMatchedBlock_wrapper:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock_wrapper:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToRecords:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)shouldFetchAssetContent;
- (bool)shouldFetchAssetContentInMemory;
- (id)webSharingIdentityDataByRecordID;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_removeAllCompletionBlocks;

@end
