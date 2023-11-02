
@interface SKADatabaseInvitedUser : NSObject {
    NSDate * _dateInvitationPayloadCreated;
    NSData * _invitationPayloadData;
    NSString * _invitedHandle;
    NSString * _senderHandle;
}

@property (nonatomic, readonly) NSDate *dateInvitationPayloadCreated;
@property (nonatomic, readonly) SKInvitationPayload *invitationPayload;
@property (nonatomic, readonly) NSData *invitationPayloadData;
@property (nonatomic, readonly) NSString *invitedHandle;
@property (nonatomic, readonly) SKHandle *invitedSKHandle;
@property (nonatomic, readonly) NSString *senderHandle;
@property (nonatomic, readonly) SKHandle *senderSKHandle;

- (void).cxx_destruct;
- (id)dateInvitationPayloadCreated;
- (id)initWithCoreDataInvitedUser:(id)arg1;
- (id)initWithInvitedHandle:(id)arg1 senderHande:(id)arg2 invitationPayloadData:(id)arg3 dateInvitationPayloadCreated:(id)arg4;
- (id)invitationPayload;
- (id)invitationPayloadData;
- (id)invitedHandle;
- (id)invitedSKHandle;
- (id)senderHandle;
- (id)senderSKHandle;

@end
