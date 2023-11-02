
@interface CHSServerSubscription : NSObject {
    NSObject * _cachedValue;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject * _lock_cachedValue;
    NSHashTable * _lock_localSubscriptions;
    <BSInvalidatable> * _lock_serverSubscription;
    id /* block */  _lock_subscriptionBlock;
}

@property (nonatomic, retain) NSObject *cachedValue;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (bool)_lock_createServerSubscriptionIfNecessary:(id*)arg1;
- (id)cachedValue;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 serverSubscriptionBlock:(id /* block */)arg2;
- (void)noteConnectionTerminated;
- (bool)resubscribeIfNecessary;
- (void)setCachedValue:(id)arg1;
- (id)subscribeWithResult:(id*)arg1 error:(id*)arg2;

@end
