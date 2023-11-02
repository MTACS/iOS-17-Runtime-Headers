
@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary * _activeSystemEndpointUIDCompletions;
    NSMutableDictionary * _activeSystemEndpointUIDs;
    id /* block */  _createPlayerCallback;
    id /* block */  _destroyPlayerCallback;
    id /* block */  _generatePlayerIDCallback;
    NSMutableDictionary * _originClientRequests;
    NSArray * _originClientRequets;
    NSMutableDictionary * _originClients;
    NSMutableDictionary * _resolveActiveSystemEndpointCompletions;
}

@property (nonatomic, copy) id /* block */ createNewPlayerCallback;
@property (nonatomic, copy) id /* block */ destroyPlayerCallback;
@property (nonatomic, copy) id /* block */ generatePlayerIDCallback;
@property (nonatomic, readonly) NSArray *originClientRequets;
@property (nonatomic, readonly) NSArray *originClients;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)activeSystemEndpointOutputDeviceUIDForType:(long long)arg1;
- (void)clearActiveSystemEndpoints;
- (id)clientForPlayerPath:(id)arg1;
- (id)clientRequestsForPlayerPath:(id)arg1;
- (id)createCustomOriginClientForOrigin:(id)arg1;
- (id /* block */)createNewPlayerCallback;
- (id)debugDescription;
- (id /* block */)destroyPlayerCallback;
- (id)existingClientRequestsForPlayerPath:(id)arg1;
- (id)existingOriginClientRequestsForPlayerPath:(id)arg1;
- (id)existingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id /* block */)generatePlayerIDCallback;
- (void)handleActiveSystemEndpointOutputDeviceUIDForType:(long long)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)localOriginClient;
- (id)originClientForOrigin:(id)arg1;
- (id)originClientForPlayerPath:(id)arg1;
- (id)originClientRequestsForPlayerPath:(id)arg1;
- (id)originClientRequets;
- (id)originClients;
- (id)playerClientForPlayerPath:(id)arg1;
- (id)playerClientRequestsForPlayerPath:(id)arg1;
- (void)removeOrigin:(id)arg1;
- (void)removeOriginRequests:(id)arg1;
- (void)resolveActiveSystemEndpointWithType:(long long)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)restoreNowPlayingClientState;
- (void)setCreateNewPlayerCallback:(id /* block */)arg1;
- (void)setDestroyPlayerCallback:(id /* block */)arg1;
- (void)setGeneratePlayerIDCallback:(id /* block */)arg1;
- (void)updateActiveSystemEndpointOutputDeviceUID:(id)arg1 forType:(long long)arg2;

@end
