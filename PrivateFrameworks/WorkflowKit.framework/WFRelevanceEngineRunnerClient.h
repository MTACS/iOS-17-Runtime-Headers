
@interface WFRelevanceEngineRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFUIPresenterInterface> {
    NSXPCListener * _dialogRequestListener;
    INIntent * _intent;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFRelevanceEngineRunnerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListener *dialogRequestListener;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dialogRequestListener;
- (void)dismissPresentedContentForRunningContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIntent:(id)arg1 delegateQueue:(id)arg2;
- (id)intent;
- (id)intentExecutorIntentResponseFromError:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)start;
- (void)stop;

@end
