
@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving> {
    <INIntentBackgroundHandlingAssertion> * _auxiliaryAssertion;
    NSString * _bundleIdentifier;
    id /* block */  _completionBlock;
    INIntentForwardingAction * _intentForwardingAction;
    RBSAssertion * _processAssertion;
    RBSProcessMonitor * _processMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    INWatchdogTimer * _requestTimer;
}

@property (nonatomic, retain) <INIntentBackgroundHandlingAssertion> *auxiliaryAssertion;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntentForwardingAction *intentForwardingAction;
@property (nonatomic, readonly) RBSAssertion *processAssertion;
@property (nonatomic, readonly) RBSProcessMonitor *processMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) INWatchdogTimer *requestTimer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deliverIntentForwardingActionWithResponseHandler:(id /* block */)arg1;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)auxiliaryAssertion;
- (id)bundleIdentifier;
- (void)completeWithIntentForwardingActionResponse:(id)arg1;
- (id /* block */)completionBlock;
- (void)dealloc;
- (void)deliverIntent:(id)arg1 reply:(id /* block */)arg2;
- (void)deliverIntentForwardingActionWithResponseHandler:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 intentForwardingAction:(id)arg2;
- (id)intentForwardingAction;
- (void)invalidateIntentDelivery;
- (id)processAssertion;
- (id)processMonitor;
- (id)queue;
- (id)requestTimer;
- (void)setAuxiliaryAssertion:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setRequestTimer:(id)arg1;

@end
