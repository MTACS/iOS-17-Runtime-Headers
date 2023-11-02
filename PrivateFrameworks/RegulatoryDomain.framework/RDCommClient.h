
@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection * connection;
    <RDXPCProtocol> * server;
}

- (void).cxx_destruct;
- (void)clearDataCache;
- (void)clearStatusSharedWithPeers;
- (void)createCacheDirAtPath:(id)arg1;
- (id)init;
- (void)ping;
- (void)shareStatusWithPeers;
- (void)update:(long long)arg1 withCountryCode:(id)arg2;
- (void)update:(long long)arg1 withListOfCountryCodes:(id)arg2;
- (void)updatePeer:(id)arg1 withCountryCode:(id)arg2 priority:(int)arg3 andTimestamp:(id)arg4;
- (void)updatePeer:(id)arg1 withEstimate:(id)arg2;

@end
