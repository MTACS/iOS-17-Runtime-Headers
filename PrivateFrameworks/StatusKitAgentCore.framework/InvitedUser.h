
@interface InvitedUser : NSManagedObject

@property (nonatomic, retain) Channel *channel;
@property (nonatomic, copy) NSDate *dateInvitationPayloadCreated;
@property (nonatomic, retain) NSData *invitationPayload;
@property (nonatomic, copy) NSString *invitedHandle;
@property (nonatomic, copy) NSString *senderHandle;

+ (id)channelKeyPath;
+ (id)fetchRequest;
+ (id)invitedHandleKeyPath;
+ (id)predicateForChannel:(id)arg1;
+ (id)predicateForInvitedHandle:(id)arg1;
+ (id)predicateForSenderHandle:(id)arg1;
+ (id)senderHandleKeyPath;

@end
