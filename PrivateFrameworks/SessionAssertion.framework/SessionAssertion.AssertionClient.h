
@interface SessionAssertion.AssertionClient : NSObject <SNAAssertionXPCClient> {
    void calloutQueue;
    void connection;
    void delegate;
    void queue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (void)didConnect;
- (void)didInvalidate:(id)arg1;
- (id)init;

@end
