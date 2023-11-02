
@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)checkin:(id)arg1 reply:(id /* block */)arg2;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (void)ping:(id /* block */)arg1;
- (void)setConnection:(id)arg1;

@end
