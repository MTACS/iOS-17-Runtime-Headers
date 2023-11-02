
@interface AXUIClientMessenger : NSObject {
    NSString * _clientIdentifier;
    AXMultiplexConnectionHandler * _connection;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) AXMultiplexConnectionHandler *connection;

+ (id)clientMessengerWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)connection;
- (id)description;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 connection:(id)arg2;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(bool)arg4 completion:(id /* block */)arg5;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;

@end
