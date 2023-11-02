
@interface GTMTLReplayServiceXPCDispatcher : GTXPCDispatcher <GTMTLReplayServiceXPCDispatcher> {
    <GTURLAccessProvider> * _URLAccessService;
    GTBulkDataService * _bulkDataService;
    GTServiceProperties * _bulkDataServiceProperties;
    <GTMTLReplayService> * _implInstance;
    NSObject<OS_os_log> * _log;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;
- (void)bulkDataService:(id)arg1 replyConnection:(id)arg2;
- (void)cancel_:(id)arg1 replyConnection:(id)arg2;
- (void)decode_:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)display_:(id)arg1 replyConnection:(id)arg2;
- (void)fetch_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2 bulkDataService:(id)arg3 bulkDataServiceProperties:(id)arg4 URLAccesService:(id)arg5;
- (void)load_error_:(id)arg1 replyConnection:(id)arg2;
- (void)pause_:(id)arg1 replyConnection:(id)arg2;
- (void)profile_:(id)arg1 replyConnection:(id)arg2;
- (void)query_:(id)arg1 replyConnection:(id)arg2;
- (void)raytrace_:(id)arg1 replyConnection:(id)arg2;
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)resume_:(id)arg1 replyConnection:(id)arg2;
- (void)shaderdebug_:(id)arg1 replyConnection:(id)arg2;
- (void)terminateProcess:(id)arg1 replyConnection:(id)arg2;
- (void)update_:(id)arg1 replyConnection:(id)arg2;

@end
