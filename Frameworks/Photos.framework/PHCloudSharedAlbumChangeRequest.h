
@interface PHCloudSharedAlbumChangeRequest : PHChangeRequest {
    NSString * _cloudOwnerEmail;
    bool  _cloudPublicURLEnabled;
    bool  _cloudPublicURLEnabledLocal;
    PHCloudSharedAlbum * _cloudSharedAlbum;
    bool  _didSetIsPublic;
    NSMutableArray * _invitationRecordGUIDsToRemove;
    NSMutableArray * _invitationsToAdd;
    bool  _isPublic;
}

@property (nonatomic) bool cloudMultipleContributorsEnabled;
@property (nonatomic) bool cloudMultipleContributorsEnabledLocal;
@property (nonatomic, retain) NSString *cloudOwnerEmail;
@property (nonatomic, retain) NSString *cloudOwnerFirstName;
@property (nonatomic, retain) NSString *cloudOwnerFullName;
@property (nonatomic, retain) NSString *cloudOwnerLastName;
@property (nonatomic) bool cloudPublicURLEnabled;
@property (nonatomic) bool cloudPublicURLEnabledLocal;
@property (nonatomic, retain) PHCloudSharedAlbum *cloudSharedAlbum;
@property (nonatomic, retain) NSMutableArray *invitationRecordGUIDsToRemove;
@property (nonatomic, retain) NSMutableArray *invitationsToAdd;
@property (nonatomic) bool isOwned;
@property (nonatomic) bool isPublic;
@property (nonatomic, retain) NSString *title;

+ (id)changeRequestForCloudSharedAlbum:(id)arg1;
+ (id)creationRequestForCloudSharedAlbumWithTitle:(id)arg1;
+ (void)deleteCloudSharedAlbum:(id)arg1;

- (void).cxx_destruct;
- (void)addInvitationRecordWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emails:(id)arg4 phones:(id)arg5;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (bool)cloudMultipleContributorsEnabled;
- (bool)cloudMultipleContributorsEnabledLocal;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (bool)cloudPublicURLEnabled;
- (bool)cloudPublicURLEnabledLocal;
- (id)cloudSharedAlbum;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)invitationRecordGUIDsToRemove;
- (id)invitationsToAdd;
- (bool)isOwned;
- (bool)isPublic;
- (id)managedEntityName;
- (id)placeholderForCreatedCloudSharedAlbum;
- (void)removeCloudSharedAlbumInvitationRecords:(id)arg1;
- (void)setCloudMultipleContributorsEnabled:(bool)arg1;
- (void)setCloudMultipleContributorsEnabledLocal:(bool)arg1;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setCloudOwnerFirstName:(id)arg1;
- (void)setCloudOwnerFullName:(id)arg1;
- (void)setCloudOwnerLastName:(id)arg1;
- (void)setCloudPublicURLEnabled:(bool)arg1;
- (void)setCloudPublicURLEnabledLocal:(bool)arg1;
- (void)setCloudSharedAlbum:(id)arg1;
- (void)setInvitationRecordGUIDsToRemove:(id)arg1;
- (void)setInvitationsToAdd:(id)arg1;
- (void)setIsOwned:(bool)arg1;
- (void)setIsPublic:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)stopSharing;
- (id)title;

@end
