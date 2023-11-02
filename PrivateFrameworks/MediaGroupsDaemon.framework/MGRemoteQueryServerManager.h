
@interface MGRemoteQueryServerManager : NSObject <MGRemoteQueryServerDelegate> {
    NSUserDefaults * _airplayDefaults;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _haveGroupsToAdvertise;
    bool  _havePermissiveACL;
    NSString * _homeHash;
    MGOutstandingQuery * _query;
    <MGInternalQueryRunner> * _queryRunner;
    unsigned long long  _relaunchCount;
    MGRemoteQueryServer * _server;
}

@property (nonatomic, readonly) NSUserDefaults *airplayDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveGroupsToAdvertise;
@property (nonatomic) bool havePermissiveACL;
@property (nonatomic, copy) NSString *homeHash;
@property (nonatomic, retain) MGOutstandingQuery *query;
@property (nonatomic, readonly) <MGInternalQueryRunner> *queryRunner;
@property (nonatomic) unsigned long long relaunchCount;
@property (nonatomic, retain) MGRemoteQueryServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupQuery;
- (bool)_shouldRunServer;
- (void)_startServer;
- (void)_stopServer;
- (void)_updateState;
- (id)airplayDefaults;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (bool)haveGroupsToAdvertise;
- (bool)havePermissiveACL;
- (id)homeHash;
- (id)initWithQueryRunner:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)query;
- (id)queryRunner;
- (unsigned long long)relaunchCount;
- (id)server;
- (void)serverInvalidated:(id)arg1 withError:(id)arg2;
- (void)setHaveGroupsToAdvertise:(bool)arg1;
- (void)setHavePermissiveACL:(bool)arg1;
- (void)setHomeHash:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRelaunchCount:(unsigned long long)arg1;
- (void)setServer:(id)arg1;

@end
