
@interface SKStatusSubscriptionService : NSObject <SKStatusSubscriptionConnectionDelegateProtocol, SKStatusSubscriptionDaemonDelegateProtocol> {
    SKStatusSubscriptionDaemonConnection * _daemonConnection;
    NSMapTable * _delegates;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    bool  _registeredForDelegateCallbacks;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, retain) SKStatusSubscriptionDaemonConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKStatusSubscription *personalStatusSubscription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) bool registeredForDelegateCallbacks;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (id)_allStatusSubscriptionsIncludingPersonalSubscription:(bool)arg1;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)arg1 block:(id /* block */)arg2;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)allStatusSubscriptions;
- (id)allStatusSubscriptionsExceptPersonalSubscription;
- (id)allStatusSubscriptionsWithActiveAssertions;
- (id)allStatusSubscriptionsWithActiveSubscriptions;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)daemonConnection;
- (id)delegates;
- (id)initWithStatusTypeIdentifier:(id)arg1;
- (id)personalStatusSubscription;
- (id)privateWorkQueue;
- (bool)registeredForDelegateCallbacks;
- (void)removeDelegate:(id)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setRegisteredForDelegateCallbacks:(bool)arg1;
- (id)statusSubscriptionForHandle:(id)arg1;
- (void)statusSubscriptionForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)statusTypeIdentifier;
- (void)subscriptionDaemonConnectionDidDisconnect:(id)arg1;
- (void)subscriptionInvitationReceived:(id)arg1 completion:(id /* block */)arg2;
- (void)subscriptionReceivedStatusUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)subscriptionStateChangedForSubscriptions:(id)arg1 completion:(id /* block */)arg2;
- (void)subscriptionValidationTokenForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)subscriptionValidationTokenForHandle:(id)arg1 error:(id*)arg2;
- (void)subscriptionValidationTokensForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)subscriptionValidationTokensForHandle:(id)arg1 error:(id*)arg2;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)arg1 fromSender:(id)arg2 completion:(id /* block */)arg3;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)arg1 fromSender:(id)arg2 completion:(id /* block */)arg3;

@end
