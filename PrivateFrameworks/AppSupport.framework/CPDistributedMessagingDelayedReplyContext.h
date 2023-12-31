
@interface CPDistributedMessagingDelayedReplyContext : NSObject {
    bool  _portPassing;
    unsigned int  _replyPort;
}

@property (nonatomic) bool portPassing;
@property (nonatomic) unsigned int replyPort;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(bool)arg2;
- (bool)portPassing;
- (unsigned int)replyPort;
- (void)setPortPassing:(bool)arg1;
- (void)setReplyPort:(unsigned int)arg1;

@end
