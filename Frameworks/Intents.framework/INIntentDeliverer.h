
@interface INIntentDeliverer : NSObject <INIntentDelivering, INIntentParameterOptionsProviding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    <INIntentDeliveringDelegate> * _delegate;
    INExtensionContextIntentResponseObserver * _getCarPowerLevelObserver;
    INExtensionContextIntentResponseObserver * _getRideStatusObserver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INIntentDeliveringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) INExtensionContextIntentResponseObserver *getCarPowerLevelObserver;
@property (nonatomic, retain) INExtensionContextIntentResponseObserver *getRideStatusObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_deliverIntent:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_invokeIntentHandlerMethodForIntent:(id)arg1 intentHandler:(id)arg2 parameterNamed:(id)arg3 keyForSelectors:(id)arg4 executionHandler:(id /* block */)arg5 unimplementedHandler:(id /* block */)arg6;
- (void)_processDefaultValue:(id)arg1 forIntent:(id)arg2 parameterNamed:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_processIntent:(id)arg1 intentResponse:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)_processIntentResponseCompletionHandlerWithIntent:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)_processOptionsForIntent:(id)arg1 parameterNamed:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)_processResolutionDataProviderForIntent:(id)arg1 intentSlotDescription:(id)arg2 updateIntent:(bool)arg3 completion:(id /* block */)arg4;
- (void)_resolveIntentParameter:(id)arg1 forIntent:(id)arg2 intentHandler:(id)arg3 updateIntent:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 fromConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_stopSendingUpdatesForIntent:(id)arg1 fromConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_updateIntent:(id)arg1 intentSlotDescription:(id)arg2 resolutionResultDataProvider:(id)arg3;
- (struct { unsigned int x1[8]; })auditToken;
- (void)confirmIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)delegate;
- (id)getCarPowerLevelObserver;
- (void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)getParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 searchTerm:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)getRideStatusObserver;
- (void)getSupportsParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (id)queue;
- (void)resolveIntentParameter:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)resolveIntentParameters:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setGetCarPowerLevelObserver:(id)arg1;
- (void)setGetRideStatusObserver:(id)arg1;
- (void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopSendingUpdatesForIntent:(id)arg1 completionHandler:(id /* block */)arg2;

@end
