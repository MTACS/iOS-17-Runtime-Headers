
@interface HMIVideoAnalyzerClient : HMIVideoAnalyzer {
    bool  _hasFailed;
    VCPHomeKitAnalysisSession * _session;
    bool  _sessionCreationAttempted;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property bool hasFailed;
@property (retain) VCPHomeKitAnalysisSession *session;
@property bool sessionCreationAttempted;

- (void).cxx_destruct;
- (void)_didFailWithError:(id)arg1;
- (void)_sendMessage:(SEL)arg1 arguments:(id)arg2 asynchronous:(bool)arg3;
- (void)_sendMessage:(SEL)arg1 arguments:(id)arg2 asynchronous:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_sendMessageWithOptions:(id)arg1 asynchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (void)dealloc;
- (id)ensureSession;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushAsync;
- (void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleMessageWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasFailed;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (id)session;
- (bool)sessionCreationAttempted;
- (void)setAnalysisFPS:(double)arg1;
- (void)setEncode:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setMonitored:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionCreationAttempted:(bool)arg1;

@end
