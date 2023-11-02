
@interface MSNScopedException : NSObject {
    NSXPCConnection * _connection;
    NSString * _exception;
}

@property (retain) NSXPCConnection *connection;
@property (copy) NSString *exception;

- (void).cxx_destruct;
- (id)connection;
- (id)exception;
- (id)initWithConnection:(id)arg1 exception:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setException:(id)arg1;

@end
