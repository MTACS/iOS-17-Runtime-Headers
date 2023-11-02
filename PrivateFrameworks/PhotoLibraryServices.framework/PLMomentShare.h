
@interface PLMomentShare : PLShare <PLCloudDeletable>

@property (nonatomic) int assetCount;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) bool forceSyncAttempted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *momentShareAssets;
@property (nonatomic, retain) NSSet *momentShareMasters;
@property (nonatomic, copy) NSString *originatingScopeIdentifier;
@property (nonatomic) int photosCount;
@property (nonatomic, copy) NSData *previewData;
@property (nonatomic) bool shouldIgnoreBudgets;
@property (nonatomic) bool shouldNotifyOnUploadCompletion;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) int uploadedVideosCount;
@property (nonatomic) int videosCount;

+ (id)createOwnedShareWithUUID:(id)arg1 creationDate:(id)arg2 title:(id)arg3 inPhotoLibrary:(id)arg4;
+ (id)entityName;
+ (void)forceSyncMomentShares:(id)arg1 photoLibrary:(id)arg2;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)listOfSyncedProperties;
+ (id)momentShareWithOriginatingScopeIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)momentSharesReferencedInUploadBatchContainer:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)scopeIdentifierPrefix;
+ (bool)shouldAllowFetchURLWithScopeChange:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
+ (bool)supportsCPLScopeType:(long long)arg1;

- (id)_contactStore;
- (bool)_isOwnerInContacts;
- (bool)_shouldAutoAccept;
- (void)_updateWithScopeChange:(id)arg1;
- (void)autoAcceptShareIfNecessary;
- (void)calculatePropertyValues;
- (void)computeUploadedAssetCountsUsingAssetRelationship;
- (id)cplScopeChange;
- (unsigned long long)estimateUploadSize;
- (bool)isSyncableChange;
- (void)prepareForDeletion;
- (void)publishWithCompletionHandler:(id /* block */)arg1;
- (bool)supportsCloudUpload;
- (void)trash;
- (void)willSave;

@end
