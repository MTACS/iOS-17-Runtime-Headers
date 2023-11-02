
@interface SKStatusSubscription : NSObject {
    SKStatusSubscriptionDaemonConnection * _daemonConnection;
    SKStatusSubscriptionMetadata * _subscriptionMetadata;
}

@property (nonatomic, readonly) SKPublishedStatus *currentStatus;
@property (nonatomic, readonly) SKStatusSubscriptionDaemonConnection *daemonConnection;
@property (nonatomic, readonly) SKHandle *ownerHandle;
@property (nonatomic, readonly) NSArray *ownerHandles;
@property (getter=isPersonalStatusSubscription, nonatomic, readonly) bool personalStatusSubscription;
@property (nonatomic, readonly) NSString *subscriptionIdentifier;
@property (nonatomic, readonly) SKStatusSubscriptionMetadata *subscriptionMetadata;

+ (id)logger;

- (void).cxx_destruct;
- (id)_ownerHandlesDescription;
- (id)currentStatus;
- (id)daemonConnection;
- (void)deleteSubscriptionWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)initWithSubscriptionMetadata:(id)arg1 daemonConnection:(id)arg2;
- (bool)isPersonalStatusSubscription;
- (id)ownerHandle;
- (id)ownerHandles;
- (void)releasePersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)releaseTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (void)retainPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retainTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (id)subscriptionIdentifier;
- (id)subscriptionMetadata;

@end
