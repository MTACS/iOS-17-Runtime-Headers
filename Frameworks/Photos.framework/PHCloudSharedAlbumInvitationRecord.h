
@interface PHCloudSharedAlbumInvitationRecord : PHObject {
    NSString * _albumGUID;
    NSString * _cloudGUID;
    NSString * _inviteeFirstName;
    NSString * _inviteeHashedPersonID;
    NSString * _inviteeLastName;
}

@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, readonly) NSString *inviteeEmail;
@property (nonatomic, readonly) NSArray *inviteeEmails;
@property (nonatomic, readonly) NSString *inviteeFirstName;
@property (nonatomic, retain) NSString *inviteeHashedPersonID;
@property (nonatomic, readonly) NSString *inviteeLastName;
@property (nonatomic, readonly) NSString *inviteePhone;
@property (nonatomic, readonly) NSArray *inviteePhones;

+ (id)entityKeyMap;
+ (id)fetchAllInvitationRecordsWithOptions:(id)arg1;
+ (id)fetchInvitationRecordsForSharedAlbum:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)albumGUID;
- (id)cloudGUID;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)inviteeEmail;
- (id)inviteeEmails;
- (id)inviteeFirstName;
- (id)inviteeHashedPersonID;
- (id)inviteeLastName;
- (id)inviteePhone;
- (id)inviteePhones;
- (void)setAlbumGUID:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setInviteeHashedPersonID:(id)arg1;

@end
