
@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _changedAssets;
    NSXPCConnection * _clientConnection;
    NSString * _keySourceAssetIdentifier;
    PHMomentShare * _originalMomentShare;
    PHShareRelationshipChangeRequestHelper * _participantsHelper;
    NSDictionary * _sourceAssetCMMAssetMapForCreationRequest;
    NSSet * _sourceAssetIdentifiersForBatchedCreation;
    NSSet * _sourceAssetIdentifiersForCurationSet;
    NSDictionary * _sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionaryForBatchedCreation;
    NSDictionary * _sourceAssetIdentifiersToMetadataCopyOptionsDictionaryForBatchedCreation;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *originatingScopeIdentifier;
@property (nonatomic, readonly) PHShareRelationshipChangeRequestHelper *participantsHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (nonatomic, retain) NSData *previewData;
@property (nonatomic) bool shouldIgnoreBudgets;
@property (nonatomic) bool shouldNotifyOnUploadCompletion;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)changeRequestForMomentShare:(id)arg1;
+ (id)creationRequestForMomentShareWithTitle:(id)arg1 publicPermission:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 creationOptionsPerAsset:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7;
+ (void)expungeMomentShares:(id)arg1;
+ (void)trashMomentShares:(id)arg1;
+ (id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addSourceAssetsToMomentShare:(id)arg1 error:(id*)arg2;
- (void)_setOriginalMomentShare:(id)arg1;
- (void)addParticipants:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)createMomentShareAssetsFromAssets:(id)arg1 withCreationOptionsPerAsset:(id)arg2 withPreview:(id)arg3;
- (id)creationDate;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (short)mode;
- (id)originatingScopeIdentifier;
- (id)participantsHelper;
- (id)placeholderForCreatedMomentShare;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (id)previewData;
- (void)setCreationDate:(id)arg1;
- (void)setOriginatingScopeIdentifier:(id)arg1;
- (void)setPreviewData:(id)arg1;
- (void)setPublicPermission:(short)arg1;
- (void)setShouldIgnoreBudgets:(bool)arg1;
- (void)setShouldNotifyOnUploadCompletion:(bool)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldIgnoreBudgets;
- (bool)shouldNotifyOnUploadCompletion;
- (id)thumbnailImageData;
- (id)title;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
