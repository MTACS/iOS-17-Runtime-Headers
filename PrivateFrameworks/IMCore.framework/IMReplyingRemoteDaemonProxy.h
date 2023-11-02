
@interface IMReplyingRemoteDaemonProxy : NSProxy {
    IMDaemonController * _daemonController;
    bool  _synchronousReplies;
}

@property (nonatomic, readonly) IMDaemonController *daemonController;
@property (nonatomic) bool synchronousReplies;

- (void).cxx_destruct;
- (id)daemonController;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDaemonController:(id)arg1 synchronousReplies:(bool)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setSynchronousReplies:(bool)arg1;
- (bool)synchronousReplies;

@end
