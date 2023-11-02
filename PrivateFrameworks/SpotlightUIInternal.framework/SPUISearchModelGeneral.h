
@interface SPUISearchModelGeneral : SPUISearchModel {
    SPClientSession * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSString *rankingDebugLog;
@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_setInfinitePatience:(bool)arg1;
- (void)activate;
- (void)clear;
- (void)deactivate;
- (bool)forceStableResults;
- (bool)infinitePatience;
- (id)init;
- (long long)maxUISuggestions;
- (bool)queryInProgress;
- (id)rankingDebugLog;
- (id)session;
- (void)setForceStableResults:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setMaxUISuggestions:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldEnableOCR;
- (void)updateWithQueryContext:(id)arg1;
- (void)updatesDisabled;
- (void)updatesEnabled;
- (id)workQueue;

@end
