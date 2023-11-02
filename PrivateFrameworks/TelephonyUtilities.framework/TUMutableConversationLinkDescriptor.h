
@interface TUMutableConversationLinkDescriptor : TUConversationLinkDescriptor

@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic, copy) NSSet *invitedHandles;
@property (nonatomic) long long linkLifetimeScope;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TUConversationLinkOriginator *originator;
@property (nonatomic, copy) NSData *privateKey;
@property (nonatomic, copy) NSString *pseudonym;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic) int version;

@end
