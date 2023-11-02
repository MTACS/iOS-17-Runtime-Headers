
@interface ReceivedInvitation : NSManagedObject

@property (nonatomic, retain) Channel *channel;
@property (nonatomic, retain) NSData *channelToken;
@property (nonatomic, copy) NSDate *dateInvitationCreated;
@property (nonatomic, retain) NSData *incomingRatchetState;
@property (nonatomic, copy) NSString *invitationIdentifier;
@property (nonatomic, retain) NSData *invitationPayload;
@property (nonatomic, copy) NSString *invitedHandle;
@property (nonatomic, retain) NSData *peerKey;
@property (nonatomic, copy) NSString *presenceIdentifier;
@property (nonatomic, copy) NSString *senderHandle;
@property (nonatomic, retain) NSData *serverKey;
@property (nonatomic, copy) NSString *statusTypeIdentifier;

+ (id)dateInvitationCreatedKeyPath;
+ (id)fetchRequest;
+ (id)predicateForSenderHandle:(id)arg1;
+ (id)predicateForSenderHandleString:(id)arg1;
+ (id)predicateForStatusTypeIdentifier:(id)arg1;
+ (id)senderHandleKeyPath;
+ (id)sortDescriptorForDateInvitationCreatedOrderedAscending:(bool)arg1;
+ (id)sortDescriptorForSenderHandleOrderedAscending:(bool)arg1;
+ (id)statusTypeIdentifierKeyPath;

@end
