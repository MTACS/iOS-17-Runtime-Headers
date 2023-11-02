
@interface IMAVChatParticipantProxy : NSObject {
    IMAVChatProxy * _chat;
    NSDictionary * _info;
}

@property (nonatomic, readonly) bool _inviteDelivered;
@property (nonatomic, readonly) IMAVChat *avChat;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (bool)_inviteDelivered;
- (id)avChat;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;
- (bool)isLocalParticipant;
- (id)name;

@end
