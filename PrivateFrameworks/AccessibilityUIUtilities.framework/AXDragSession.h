
@interface AXDragSession : NSObject <_DUIClientSessionAccessibility> {
    bool  _aborted;
    NSXPCConnection * _connection;
    <AXDragSessionDelegate> * _delegate;
    <AXDragSessionDragManager> * _manager;
    bool  _resumed;
}

@property (nonatomic) <AXDragSessionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_serverSession;
- (void)abort;
- (void)cancel;
- (id)delegate;
- (oneway void)dragDidEndWithOperation:(unsigned long long)arg1;
- (oneway void)dragStatusDidChange:(id)arg1;
- (oneway void)dragWillBeginWithReply:(id /* block */)arg1;
- (void)drop;
- (id)initWithDruidConnection:(id)arg1;
- (id)manager;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 forRequestor:(id)arg2 completion:(id /* block */)arg3;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;

@end
