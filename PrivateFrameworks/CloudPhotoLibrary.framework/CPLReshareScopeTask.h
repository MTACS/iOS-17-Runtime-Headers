
@interface CPLReshareScopeTask : CPLEngineScopedTask {
    NSDate * _cutoffDate;
    bool  _hasScheduledPullFromTransport;
    CPLEngineScope * _primaryScope;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportReshareRecordsTask> * _reshareTask;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLTransportScopeMapping * _transportScopeMapping;
}

- (void).cxx_destruct;
- (void)_bumpIgnoredDatesOfRecords:(id)arg1 hasResharedSomeRecords:(bool)arg2;
- (void)_bumpIgnoredDatesOfRejectedRecords:(id)arg1;
- (void)_doOneIteration;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (id)scopesForTask;
- (id)taskIdentifier;

@end
