
@interface CKDRepairAssetsOperation : CKDDatabaseOperation {
    NSDictionary * _UUIDToAssetOrPackage;
    id /* block */  _assetOrPackageRepairedBlock;
    NSDictionary * _assetOrPackageUUIDToMetadata;
    NSMutableDictionary * _assetOrPackageUUIDToOriginalRecord;
    NSDictionary * _assetOrPackageUUIDToUploadError;
    CKDOperation * _fetchOperation;
    NSArray * _unavailableAssetsAndPackages;
    CKDOperation * _updateOperation;
    CKDOperation * _uploadOperation;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
    NSSet * _uploadedAssetOrPackageUUIDs;
}

@property (nonatomic, retain) NSDictionary *UUIDToAssetOrPackage;
@property (nonatomic, copy) id /* block */ assetOrPackageRepairedBlock;
@property (nonatomic, retain) NSDictionary *assetOrPackageUUIDToMetadata;
@property (nonatomic, retain) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord;
@property (nonatomic, retain) NSDictionary *assetOrPackageUUIDToUploadError;
@property (nonatomic, retain) <CKRepairAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) CKDOperation *fetchOperation;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSArray *unavailableAssetsAndPackages;
@property (nonatomic, retain) CKDOperation *updateOperation;
@property (nonatomic, retain) CKDOperation *uploadOperation;
@property (nonatomic, retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (nonatomic, retain) NSSet *uploadedAssetOrPackageUUIDs;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)UUIDToAssetOrPackage;
- (void)_fetchAssetMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_updateMissingAssetServerStatus;
- (void)_uploadAssetsModify;
- (id)activityCreate;
- (id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2;
- (id /* block */)assetOrPackageRepairedBlock;
- (id)assetOrPackageUUIDToMetadata;
- (id)assetOrPackageUUIDToOriginalRecord;
- (id)assetOrPackageUUIDToUploadError;
- (id)fetchOperation;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)repairContainer;
- (void)setAssetOrPackageRepairedBlock:(id /* block */)arg1;
- (void)setAssetOrPackageUUIDToMetadata:(id)arg1;
- (void)setAssetOrPackageUUIDToOriginalRecord:(id)arg1;
- (void)setAssetOrPackageUUIDToUploadError:(id)arg1;
- (void)setFetchOperation:(id)arg1;
- (void)setUUIDToAssetOrPackage:(id)arg1;
- (void)setUnavailableAssetsAndPackages:(id)arg1;
- (void)setUpdateOperation:(id)arg1;
- (void)setUploadOperation:(id)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (void)setUploadedAssetOrPackageUUIDs:(id)arg1;
- (id)unavailableAssetsAndPackages;
- (id)updateOperation;
- (id)uploadOperation;
- (id)uploadRequestConfiguration;
- (id)uploadedAssetOrPackageUUIDs;

@end
