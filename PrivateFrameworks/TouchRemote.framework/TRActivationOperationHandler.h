
@interface TRActivationOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _activationHandler;
    id /* block */  _activationHandlerWithError;
}

@property (nonatomic, copy) id /* block */ activationHandler;
@property (nonatomic, copy) id /* block */ activationHandlerWithError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)activationHandler;
- (id /* block */)activationHandlerWithError;
- (id)initWithActivationHandler:(id /* block */)arg1;
- (id)initWithActivationHandlerWithError:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setActivationHandlerWithError:(id /* block */)arg1;

@end
