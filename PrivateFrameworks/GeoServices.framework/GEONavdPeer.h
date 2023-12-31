
@interface GEONavdPeer : NSObject {
    GEONavdClientInfo * _clientInfo;
    NSXPCConnection * _connection;
    NSMutableDictionary * _entitlementCache;
    bool  _expectingUpdates;
}

@property (nonatomic, readonly) GEONavdClientInfo *clientInfo;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) bool expectingUpdates;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)connection;
- (id)description;
- (bool)expectingUpdates;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)setExpectingUpdates:(bool)arg1;
- (void)updateConnection:(id)arg1;

@end
