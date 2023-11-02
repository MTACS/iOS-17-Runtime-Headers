
@interface PHFaceGroupChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _facesHelper;
    PHRelationshipChangeRequestHelper * _keyFaceHelper;
    PHFaceGroup * _originalFaceGroup;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) long long personBuilderState;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic) long long unnamedFaceCount;

+ (id)changeRequestForFaceGroup:(id)arg1;
+ (id)creationRequestForFaceGroup;
+ (void)deleteFaceGroups:(id)arg1;

- (void).cxx_destruct;
- (id)_existentFaceObjectIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2;
- (void)_prepareFacesHelperIfNeeded;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_setOriginalFaceGroup:(id)arg1;
- (void)addFaces:(id)arg1;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)facesHelper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)keyFaceHelper;
- (id)managedEntityName;
- (long long)personBuilderState;
- (id)placeholderForCreatedFaceGroup;
- (void)removeFaces:(id)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setPersonBuilderState:(long long)arg1;
- (void)setUnnamedFaceCount:(long long)arg1;
- (long long)unnamedFaceCount;

@end
