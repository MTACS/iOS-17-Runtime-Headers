
@interface VSJSApp : NSObject <VSStateMachineDelegate> {
    JSContext * _context;
    <VSJSAppDelegate> * _delegate;
    NSURL * _effectiveURL;
    bool  _enforceSystemTrust;
    VSSingleThreadDispatchQueue * _jsSingleThreadQueue;
    NSOperationQueue * _privateQueue;
    NSString * _script;
    NSMutableArray * _scriptEvaluators;
    long long  _state;
    VSStateMachine * _stateMachine;
    NSURL * _url;
    NSObject<OS_dispatch_source> * _watchdog;
}

@property (nonatomic, retain) JSContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSJSAppDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *effectiveURL;
@property (nonatomic) bool enforceSystemTrust;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSSingleThreadDispatchQueue *jsSingleThreadQueue;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSString *script;
@property (nonatomic, retain) NSMutableArray *scriptEvaluators;
@property (nonatomic) long long state;
@property (nonatomic, retain) VSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *watchdog;

+ (id)currentContext;

- (void).cxx_destruct;
- (void)_configureWatchdogWithSeconds:(unsigned long long)arg1;
- (id)_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
- (id)_exceptionErrorWithCode:(long long)arg1;
- (void)_initializeContext;
- (void)_invokeOnExit;
- (void)_invokeOnLaunch;
- (id)context;
- (id)delegate;
- (id)effectiveURL;
- (bool)enforceSystemTrust;
- (void)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (void)evaluateWithBlock:(id /* block */)arg1;
- (id)initWithScriptURL:(id)arg1;
- (id)jsSingleThreadQueue;
- (id)privateQueue;
- (id)script;
- (id)scriptEvaluators;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveURL:(id)arg1;
- (void)setEnforceSystemTrust:(bool)arg1;
- (void)setExceptionWithMessage:(id)arg1;
- (void)setJsSingleThreadQueue:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setScript:(id)arg1;
- (void)setScriptEvaluators:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWatchdog:(id)arg1;
- (void)start;
- (long long)state;
- (id)stateMachine;
- (void)stop;
- (void)transitionToErrorState;
- (void)transitionToReadyState;
- (void)transitionToStoppedState;
- (void)transitionToWaitingForBootScriptState;
- (void)transitionToWaitingForBootUrlState;
- (void)transitionToWaitingForOnExitCallbackState;
- (void)transitionToWaitingForOnLaunchCallbackState;
- (id)url;
- (id)watchdog;

@end
