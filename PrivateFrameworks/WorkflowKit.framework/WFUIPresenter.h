
@interface WFUIPresenter : NSObject <WFUIPresenterHostInterface> {
    <WFUIPresenterConnection> * _auxiliaryConnection;
    <WFUIPresenterConnection> * _connection;
    <WFUIPresenterDelegate> * _delegate;
    NSXPCListenerEndpoint * _endpoint;
    NSMutableSet * _runningContextsUsingAuxiliaryConnection;
}

@property (nonatomic, readonly) <WFUIPresenterConnection> *auxiliaryConnection;
@property (nonatomic, readonly) <WFUIPresenterConnection> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFUIPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *runningContextsUsingAuxiliaryConnection;
@property (readonly) Class superclass;

+ (id)defaultPresenter;

- (void).cxx_destruct;
- (id)auxiliaryConnection;
- (void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)completePersistentModeWithSuccess:(id)arg1 runningContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)connection;
- (id)delegate;
- (void)dismissPresentedContentForRunningContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)endpoint;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 auxiliaryConnection:(id)arg2;
- (void)pauseDialogPresentationForDuration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presenterRequestedUpdatedRunViewSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presenterRequestedWorkflowPauseForContext:(id)arg1 dialogRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presenterRequestedWorkflowStopForContext:(id)arg1;
- (bool)requestShouldUseAuxiliaryConnection:(id)arg1;
- (void)resumeDialogPresentationWithCompletionHandler:(id /* block */)arg1;
- (id)runningContextsUsingAuxiliaryConnection;
- (void)setDelegate:(id)arg1;
- (void)showDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)showWebPage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAttribution:(id)arg1 runningContext:(id)arg2;
- (void)updateRunViewSource:(id)arg1;

@end
