
@interface _INExtensionContext : NSExtensionContext <INExtensionContextHosting, INIntentDeliveringDelegate, _INExtensionContextVending> {
    <INIntentHandlerProvidingPrivate> * _extensionHandler;
    id  _handlerForIntent;
    <INIntentDelivering> * _intentDeliverer;
    bool  _isPrivateExtension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <INIntentHandlerProvidingPrivate> *_extensionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_commonInit;
- (void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_extensionHandler;
- (id)_intentDelivererForIntent:(id)arg1;
- (void)_validateExtension;
- (oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)completeTransaction;
- (oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(id /* block */)arg4;
- (oneway void)handleIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 extension:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2;
- (void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(id /* block */)arg3;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (oneway void)stopSendingUpdatesForIntent:(id)arg1;

@end
