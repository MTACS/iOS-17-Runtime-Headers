
@interface SessionCore.AssertionServiceClient : NSObject <SNAAssertionXPCClient, SNAAssertionXPCServer> {
    void assertionManager;
    void connection;
}

- (void).cxx_destruct;
- (id)acquire:(id)arg1 error:(id*)arg2;
- (void)didConnect;
- (void)didInvalidate:(id)arg1;
- (id)init;
- (bool)invalidate:(id)arg1 error:(id*)arg2;
- (id)reconnect:(id)arg1 error:(id*)arg2;

@end
