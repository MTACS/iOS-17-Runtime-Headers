
@interface SRDebugInfoClient : NSObject {
    NSXPCConnection * _connection;
    bool  _connectionDidInterrupt;
}

@property (retain) NSXPCConnection *connection;
@property bool connectionDidInterrupt;

+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)initialize;
+ (id)remoteInterface;

- (id)connection;
- (bool)connectionDidInterrupt;
- (void)datastoreListingWithReply:(id /* block */)arg1;
- (void)dealloc;
- (void)dumpClientsWithReply:(id /* block */)arg1;
- (void)dumpConfigurationsWithReply:(id /* block */)arg1;
- (void)dumpDefaultsWithReply:(id /* block */)arg1;
- (void)dumpStateCacheWithReply:(id /* block */)arg1;
- (void)fetchEligibilityStatusForBundleIdentifier:(id)arg1 sensor:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)listClientsWithReply:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInterrupt:(bool)arg1;
- (void)setupConnection;

@end
