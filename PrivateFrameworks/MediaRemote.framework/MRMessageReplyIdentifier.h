
@interface MRMessageReplyIdentifier : NSObject {
    unsigned long long  _messageNumber;
    id /* block */  _reply;
}

@property (nonatomic) unsigned long long messageNumber;
@property (nonatomic, copy) id /* block */ reply;

- (void).cxx_destruct;
- (unsigned long long)messageNumber;
- (id /* block */)reply;
- (void)setMessageNumber:(unsigned long long)arg1;
- (void)setReply:(id /* block */)arg1;

@end
