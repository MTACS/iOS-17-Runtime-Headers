
@interface IMMessageItemChatContext : IMItemChatContext {
    bool  _invitation;
    IMMessage * _message;
}

@property (nonatomic) bool invitation;
@property (nonatomic, retain) IMMessage *message;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)invitation;
- (id)message;
- (void)setInvitation:(bool)arg1;
- (void)setMessage:(id)arg1;

@end
