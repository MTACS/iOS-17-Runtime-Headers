
@interface PHProjectChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _assetsHelper;
    bool  _didSetPreviewImage;
    PHRelationshipChangeRequestHelper * _keyAssetHelper;
    PHProject * _originalProject;
    NSData * _previewImageData;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *assetsHelper;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *projectDocumentType;
@property (nonatomic, copy) NSData *projectExtensionData;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (void)_deleteProjects:(id)arg1 withOperation:(long long)arg2;
+ (id)creationRequestForProjectCopyFromProject:(id)arg1;
+ (id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2;
+ (id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2 assets:(id)arg3 title:(id)arg4;
+ (void)deleteProjects:(id)arg1;
+ (void)expungeProjects:(id)arg1;
+ (void)undeleteProjects:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)_setOriginalProject:(id)arg1;
- (void)addAssets:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)assetsHelper;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithProject:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (id)keyAssetHelper;
- (id)managedEntityName;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedProject;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)projectData;
- (id)projectDocumentType;
- (id)projectExtensionData;
- (id)projectExtensionIdentifier;
- (id)projectRenderUuid;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setAssets:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setProjectData:(id)arg1;
- (void)setProjectDocumentType:(id)arg1;
- (void)setProjectExtensionData:(id)arg1;
- (void)setProjectExtensionIdentifier:(id)arg1;
- (void)setProjectPreviewImage:(id)arg1;
- (void)setProjectRenderUuid:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
