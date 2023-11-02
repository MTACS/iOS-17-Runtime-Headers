
@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {
    TKClientToken * _client;
    NSXPCConnection * _connection;
    id /* block */  _insertionHandler;
    int  _notifyToken;
    NSMutableDictionary * _removalHandlers;
    NSMutableDictionary * _tokenInfos;
}

@property (nonatomic, readonly) TKClientToken *client;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;

- (void).cxx_destruct;
- (void)addRemovalHandler:(id /* block */)arg1 forTokenID:(id)arg2;
- (id)client;
- (void)dealloc;
- (id)endpoint;
- (id)init;
- (id)initWithClient:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithInsertionHandler:(id /* block */)arg1;
- (void)insertedToken:(id)arg1;
- (void)removeAllTokens;
- (void)removedToken:(id)arg1;
- (void)setInsertionHandler:(id /* block */)arg1;
- (void)startWatching;
- (id)tokenIDs;
- (id)tokenInfoForTokenID:(id)arg1;

@end
