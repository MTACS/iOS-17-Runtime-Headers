
@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (nonatomic, retain) PLCloudSharedAlbum *album;
@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, retain) NSNumber *invitationState;
@property (nonatomic, retain) NSNumber *invitationStateLocal;
@property (nonatomic, retain) NSNumber *inviteeEmailKey;
@property (nonatomic, readonly) NSArray *inviteeEmails;
@property (nonatomic, retain) NSString *inviteeFirstName;
@property (nonatomic, retain) NSString *inviteeFullName;
@property (nonatomic, retain) NSString *inviteeHashedPersonID;
@property (nonatomic, retain) NSString *inviteeLastName;
@property (nonatomic, readonly) NSArray *inviteePhones;
@property (nonatomic, retain) NSDate *inviteeSubscriptionDate;
@property (nonatomic) bool isMine;
@property (nonatomic, retain) NSString *uuid;

+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedAlbumInvitationRecordsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)entityName;
+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;

- (void)awakeFromInsert;
- (void)delete;
- (id)init;
- (id)invitationStateDescription;
- (id)inviteeDisplayNameIncludingEmail:(bool)arg1;
- (id)inviteeEmails;
- (id)inviteePhones;
- (void)prepareForDeletion;
- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;
- (void)willSave;

@end
