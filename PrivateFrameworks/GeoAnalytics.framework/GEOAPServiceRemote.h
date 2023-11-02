
@interface GEOAPServiceRemote : NSObject <GEOAPServiceProxy> {
    NSXPCConnection * _conn;
    <GEOAPXPCDaemonExporting> * _daemonSvc;
    geo_isolater * _xpcIso;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sharedDaemonConnection;
- (void)dealloc;
- (void)flushEvalData;
- (id)init;
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(id /* block */)arg5;
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)runAggregationTasks;
- (void)setEvalMode:(bool)arg1;
- (void)showEvalDataWithVisitorBlock:(id /* block */)arg1;

@end
