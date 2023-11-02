
@interface APXPCConnection : NSObject {
    NSString * _bundleID;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleID;
- (id)connection;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (int)processIdentifier;
- (id)remoteObjectProxy;
- (void)setBundleID:(id)arg1;
- (void)setConnection:(id)arg1;

@end
