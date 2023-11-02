
@interface PGGraphIngestShareParticipantContainer : NSObject <PGGraphIngestPerson> {
    CLSPersonIdentity * _linkedPersonIdentity;
    bool  _personIdentityFound;
    PHShareParticipant * _shareParticipant;
}

@property (nonatomic, readonly) unsigned long long ageCategory;
@property (nonatomic, readonly) NSDate *anniversaryDate;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *contactID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) bool isUserCreated;
@property (nonatomic, retain) CLSPersonIdentity *linkedPersonIdentity;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDictionary *locationsByAddressTypes;
@property bool personIdentityFound;
@property (nonatomic, readonly) NSDate *potentialBirthdayDate;
@property (nonatomic, readonly) unsigned long long relationship;
@property (nonatomic, readonly) unsigned long long sex;
@property (nonatomic, retain) PHShareParticipant *shareParticipant;
@property (nonatomic, readonly) NSString *shareParticipantLocalIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)ageCategory;
- (id)anniversaryDate;
- (id)birthdayDate;
- (id)contactID;
- (id)fullName;
- (id)initWithShareParticipant:(id)arg1 library:(id)arg2;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isMe;
- (bool)isUserCreated;
- (id)linkedPersonIdentity;
- (id)localIdentifier;
- (id)locationsByAddressTypes;
- (bool)personIdentityFound;
- (id)potentialBirthdayDate;
- (unsigned long long)relationship;
- (void)setLinkedPersonIdentity:(id)arg1;
- (void)setPersonIdentityFound:(bool)arg1;
- (void)setShareParticipant:(id)arg1;
- (unsigned long long)sex;
- (id)shareParticipant;
- (id)shareParticipantLocalIdentifier;

@end
