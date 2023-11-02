
@interface PHShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _personHelper;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedShareParticipant;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;

+ (id)changeRequestForShareParticipant:(id)arg1;
+ (id)creationRequestForShareParticipantWithEmailAddress:(id)arg1 permission:(short)arg2;
+ (id)creationRequestForShareParticipantWithPhoneNumber:(id)arg1 permission:(short)arg2;
+ (void)deleteShareParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (void)_preparePersonIDIfNeeded;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)emailAddress;
- (void)encodeToXPCDict:(id)arg1;
- (short)exitState;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isCurrentUser;
- (id)managedEntityName;
- (short)permission;
- (id)personHelper;
- (id)phoneNumber;
- (id)placeholderForCreatedShareParticipant;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (unsigned short)role;
- (void)setEmailAddress:(id)arg1;
- (void)setExitState:(short)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setPermission:(short)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRole:(unsigned short)arg1;

@end
