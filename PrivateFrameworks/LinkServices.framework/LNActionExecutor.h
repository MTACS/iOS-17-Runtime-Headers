
@interface LNActionExecutor : NSObject <LNConnectionClientInterface, NSProgressReporting, NSXPCProxyCreating> {
    LNAction * _action;
    NSObject<OS_os_activity> * _activity;
    LNConnection * _connection;
    <LNActionExecutorDelegate> * _delegate;
    NSProgress * _executionProgress;
    NSUUID * _identifier;
    LNActionExecutorOptions * _options;
    NSProgress * _progress;
    id  _progressSubscriber;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressSubscriptionLock;
    LNActionMetadata * _showOutputActionMetadata;
    LNActionExecutorPassthroughDelegate * _showOutputActionPassthroughDelegate;
    long long  _state;
}

@property (nonatomic, copy) LNActionMetadata *_showOutputActionMetadata;
@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) LNConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LNActionExecutorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSProgress *executionProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) LNActionExecutorOptions *options;
@property (readonly) NSProgress *progress;
@property (nonatomic, retain) id progressSubscriber;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } progressSubscriptionLock;
@property (nonatomic, retain) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_showOutputActionMetadata;
- (id)action;
- (id)activity;
- (id)appBundleIdentifier;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)donateIfNecessaryWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)executionProgress;
- (id)identifier;
- (id)initWithAction:(id)arg1 connection:(id)arg2 options:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;
- (void)perform;
- (id)progress;
- (id)progressSubscriber;
- (struct os_unfair_lock_s { unsigned int x1; })progressSubscriptionLock;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)requestActionConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestContinueInApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterDisambiguation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterNeedsValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestViewSnippetEnvironmentWithCompletion:(id /* block */)arg1;
- (void)requestViewSnippetSizeWithCompletion:(id /* block */)arg1;
- (void)runShowOutputActionIfNecessary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletedWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionProgress:(id)arg1;
- (void)setProgressSubscriber:(id)arg1;
- (void)setShowOutputActionPassthroughDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (void)set_showOutputActionMetadata:(id)arg1;
- (id)showOutputActionPassthroughDelegate;
- (long long)state;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)unsubscribeProgressObservation;

@end
