
@interface Channel : NSManagedObject

@property (nonatomic, retain) NSData *channelToken;
@property (nonatomic) short channelType;
@property (nonatomic, retain) NSData *currentOutgoingRatchetState;
@property (nonatomic, copy) NSDate *dateChannelCreated;
@property (nonatomic) bool decomissioned;
@property (nonatomic, retain) NSSet *generatedEncryptionKeys;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *invitedUsers;
@property (nonatomic, retain) NSData *membershipKey;
@property (nonatomic, retain) NSData *peerKey;
@property (nonatomic) bool personal;
@property (nonatomic, copy) NSString *presenceIdentifier;
@property (nonatomic, retain) NSSet *receivedInvitations;
@property (nonatomic, retain) NSData *serverKey;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSString *statusType;

+ (id)channelTypeKeyPath;
+ (id)dateChannelCreatedKeyPath;
+ (id)decomissionedKeyPath;
+ (id)encryptionKeysKeyPath;
+ (id)fetchRequest;
+ (id)identifierKeyPath;
+ (id)personalKeyPath;
+ (id)predicateForChannelIdentifier:(id)arg1;
+ (id)predicateForChannelTypePresence;
+ (id)predicateForChannelTypeStatus;
+ (id)predicateForCreationDateNotNil;
+ (id)predicateForDecomissioned:(bool)arg1;
+ (id)predicateForPersonal:(bool)arg1;
+ (id)predicateForPresenceIdentifier:(id)arg1;
+ (id)predicateForStatusTypeIdentifier:(id)arg1;
+ (id)presenceIdentifierKeyPath;
+ (id)sortDescriptorForChannelIdentifierOrderedAscending:(bool)arg1;
+ (id)sortDescriptorForCreationDateAscending:(bool)arg1;
+ (id)sortDescriptorForPersonalOrderedAscending:(bool)arg1;
+ (id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(bool)arg1;
+ (id)statusTypeKeyPath;

@end
