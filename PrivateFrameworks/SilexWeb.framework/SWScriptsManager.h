
@interface SWScriptsManager : NSObject <SWScriptsManager> {
    <SWLogger> * _logger;
    NSMutableArray * _queuedExecutableScripts;
    bool  _readyToExecuteScripts;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) NSMutableArray *queuedExecutableScripts;
@property (nonatomic) bool readyToExecuteScripts;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (void)_pauseScriptExecution;
- (void)_resumeScriptExecution;
- (void)addScript:(id)arg1;
- (void)executeQueuedScripts;
- (void)executeScript:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3;
- (id)logger;
- (void)queueExecutableScript:(id)arg1 scriptExecutionCompletion:(id /* block */)arg2;
- (id)queuedExecutableScripts;
- (bool)readyToExecuteScripts;
- (void)removeAllScripts;
- (void)removeScript:(id)arg1;
- (void)setReadyToExecuteScripts:(bool)arg1;
- (id)webView;

@end
