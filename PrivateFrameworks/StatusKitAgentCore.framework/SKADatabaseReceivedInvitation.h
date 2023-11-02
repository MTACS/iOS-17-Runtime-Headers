
@interface SKADatabaseReceivedInvitation : NSObject {
    NSData * _channelToken;
    NSDate * _dateInvitationCreated;
    NSData * _incomingRatchetState;
    NSString * _invitationIdentifier;
    NSData * _invitationPayload;
    long long  _invitationType;
    NSString * _invitedHandle;
    NSData * _peerKey;
    NSString * _presenceIdentifier;
    NSString * _senderHandle;
    NSData * _serverKey;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, readonly) NSData *channelToken;
@property (nonatomic, readonly) NSDate *dateInvitationCreated;
@property (nonatomic, readonly) MPStatusKitIncomingRatchet *incomingRatchet;
@property (nonatomic, readonly) NSData *incomingRatchetState;
@property (nonatomic, readonly) NSString *invitationIdentifier;
@property (nonatomic, readonly) NSData *invitationPayload;
@property (nonatomic, readonly) long long invitationType;
@property (nonatomic, readonly) NSString *invitedHandle;
@property (nonatomic, readonly) SKHandle *invitedSKHandle;
@property (nonatomic, readonly) NSData *peerKey;
@property (nonatomic, readonly) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSString *senderHandle;
@property (nonatomic, readonly) SKHandle *senderSKHandle;
@property (nonatomic, readonly) NSData *serverKey;
@property (nonatomic, readonly) SKInvitationPayload *skInvitationPayload;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;

+ (id)logger;

- (void).cxx_destruct;
- (id)channelToken;
- (id)dateInvitationCreated;
- (id)description;
- (id)incomingRatchet;
- (id)incomingRatchetState;
- (id)initWithCoreDataReceivedInvitation:(id)arg1;
- (id)initWithInvitationIdentifier:(id)arg1 senderHandle:(id)arg2 invitedHandle:(id)arg3 statusTypeIdentifier:(id)arg4 dateInvitationCreated:(id)arg5 incomingRatchetState:(id)arg6 presenceIdentifier:(id)arg7 channelToken:(id)arg8 serverKey:(id)arg9 peerKey:(id)arg10 invitationPayload:(id)arg11;
- (id)invitationIdentifier;
- (id)invitationPayload;
- (long long)invitationType;
- (id)invitedHandle;
- (id)invitedSKHandle;
- (id)peerKey;
- (id)presenceIdentifier;
- (id)senderHandle;
- (id)senderSKHandle;
- (id)serverKey;
- (id)skInvitationPayload;
- (id)statusTypeIdentifier;

@end
