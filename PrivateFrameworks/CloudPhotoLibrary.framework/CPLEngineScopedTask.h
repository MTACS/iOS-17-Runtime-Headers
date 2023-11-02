
@interface CPLEngineScopedTask : CPLEngineSyncTask {
    NSString * _clientCacheIdentifier;
    CPLEngineScope * _scope;
    CPLEngineStore * _store;
    NSData * _transportScope;
}

@property (nonatomic, readonly) NSString *clientCacheIdentifier;
@property (nonatomic, readonly) CPLEngineScope *scope;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) NSData *transportScope;

- (void).cxx_destruct;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)clientCacheIdentifier;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (bool)isScopeValidInTransaction:(id)arg1;
- (id)scope;
- (id)scopesForTask;
- (id)store;
- (id)transportScope;

@end
