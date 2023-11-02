
@interface TKExtensionClientToken : TKClientToken {
    long long  _connectionIdentifier;
    bool  _namedConnection;
    NSXPCConnection * _serverConnection;
    NSXPCListenerEndpoint * _serverEndpoint;
    NSNumber * _targetUID;
    NSXPCConnection * _tokenConnection;
}

@property (nonatomic, readonly) NSXPCConnection *serverConnection;
@property (nonatomic, readonly) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (void).cxx_destruct;
- (id)SEPKeyEndpoint;
- (id)configurationEndpoint;
- (void)dealloc;
- (id)endpoint;
- (bool)ensureConnectionWithError:(id*)arg1;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;
- (id)serverConnection;
- (id)tokenConnection;
- (id)watcherEndpoint;
- (id)withError:(id*)arg1 invoke:(id /* block */)arg2;

@end
