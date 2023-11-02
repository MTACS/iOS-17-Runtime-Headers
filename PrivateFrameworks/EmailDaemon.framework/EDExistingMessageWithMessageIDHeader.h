
@interface EDExistingMessageWithMessageIDHeader : NSObject {
    ECAngleBracketIDHash * _messageIDHash;
    long long  _messagePersistentID;
    ECServerMessage * _serverMessage;
}

@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHash;
@property (nonatomic, readonly) long long messagePersistentID;
@property (nonatomic, readonly) ECServerMessage *serverMessage;

- (void).cxx_destruct;
- (id)initWithMessageIDHash:(id)arg1 serverMessage:(id)arg2 messagePersistentID:(long long)arg3;
- (id)messageIDHash;
- (long long)messagePersistentID;
- (id)serverMessage;

@end
