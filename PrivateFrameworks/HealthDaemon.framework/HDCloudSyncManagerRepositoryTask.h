
@interface HDCloudSyncManagerRepositoryTask : HDCloudSyncManagerTask {
    HDXPCClient * _client;
    HDCloudSyncContext * _context;
    HDCloudSyncManager * _manager;
    NSArray * _repositories;
    bool  _runWhenSyncProhibited;
}

@property (nonatomic, retain) HDXPCClient *client;
@property (nonatomic, copy) HDCloudSyncContext *context;
@property (nonatomic) HDCloudSyncManager *manager;
@property (nonatomic, copy) NSArray *repositories;
@property bool runWhenSyncProhibited;

- (void).cxx_destruct;
- (id)client;
- (id)context;
- (id)initWithManager:(id)arg1 context:(id)arg2;
- (void)main;
- (void)mainWithRepositories:(id)arg1 error:(id)arg2;
- (id)manager;
- (id)repositories;
- (bool)runWhenSyncProhibited;
- (void)setClient:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setRepositories:(id)arg1;
- (void)setRunWhenSyncProhibited:(bool)arg1;

@end
