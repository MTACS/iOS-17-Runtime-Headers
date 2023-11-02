
@interface VSServiceConnectionHandler : NSObject {
    NSXPCConnection * _connection;
    <VSServiceConnectionHandlerDelegate> * _delegate;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <VSServiceConnectionHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didFinish;
- (id)connection;
- (id)delegate;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
