
@interface WFIntentExecutor : NSObject <INIntentResponseObserver, NSProgressReporting> {
    id /* block */  _completionHandler;
    INCExtensionConnection * _connection;
    <WFIntentExecutorDelegate> * _delegate;
    bool  _forceExecutionOnPhone;
    <INCExtensionProxy> * _getRideStatusUpdatingExtensionProxy;
    NSProgress * _progress;
    bool  _skipResolveAndConfirm;
    WFIntentExecutor * _strongSelf;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) INCExtensionConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFIntentExecutorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceExecutionOnPhone;
@property (nonatomic, retain) <INCExtensionProxy> *getRideStatusUpdatingExtensionProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool skipResolveAndConfirm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autoreleaseSelf;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)configureConnection;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (id)connection;
- (bool)continueInApp;
- (id)delegate;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromExtensionError:(id)arg1;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)extensionInputItemsWithIntent:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)finish;
- (void)finishWithInteraction:(id)arg1;
- (void)finishWithInteraction:(id)arg1 error:(id)arg2;
- (bool)forceExecutionOnPhone;
- (void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDynamicOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getRideStatusUpdatingExtensionProxy;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithIntent:(id)arg1 donateInteraction:(bool)arg2 groupIdentifier:(id)arg3;
- (id)initWithIntent:(id)arg1 donateInteraction:(bool)arg2 groupIdentifier:(id)arg3 requiresTrustCheck:(bool)arg4;
- (id)intent;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (id)progress;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)resolveIntentResolutionResults:(id)arg1 slotDescription:(id)arg2 intent:(id)arg3 completion:(id /* block */)arg4;
- (void)retainSelf;
- (void)setDelegate:(id)arg1;
- (void)setForceExecutionOnPhone:(bool)arg1;
- (void)setGetRideStatusUpdatingExtensionProxy:(id)arg1;
- (void)setSkipResolveAndConfirm:(bool)arg1;
- (void)showConfirmationForInteraction:(id)arg1 confirmationRequired:(bool)arg2 authenticationRequired:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)skipResolveAndConfirm;
- (void)startConnectionForParameterName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startConnectionForParameterName:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)startReceivingRideStatusUpdates;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopReceivingRideStatusUpdates;
- (void)updateIntentWithItemToConfirm:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;

@end
