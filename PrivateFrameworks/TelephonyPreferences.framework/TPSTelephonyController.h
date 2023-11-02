
@interface TPSTelephonyController : TPSController <CoreTelephonyClientDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSOrderedSet * _activeSubscriptions;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSOrderedSet * _subscriptions;
    NSDictionary * _systemCapabilities;
    CoreTelephonyClient * _telephonyClient;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, copy) NSOrderedSet *activeSubscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, copy) NSOrderedSet *subscriptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *systemCapabilities;
@property (nonatomic, readonly) CoreTelephonyClient *telephonyClient;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)activeSubscriptions;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (id)fetchNonHiddenSubscriptions;
- (id)fetchSubscriptions;
- (id)fetchSubscriptionsInUse;
- (id)fetchSystemCapabilitiesForSubscriptions:(id)arg1;
- (id)init;
- (bool)isSubscriptionOrderedSet:(id)arg1 equivalentToSubscriptionOrderedSet:(id)arg2;
- (void)performAtomicAccessorBlock:(id /* block */)arg1;
- (id)serialDispatchQueue;
- (void)setAccessorLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setActiveSubscriptions:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSystemCapabilities:(id)arg1;
- (id)subscriptions;
- (bool)supportsCellularNetworkSelectionForSubscriptionContext:(id)arg1;
- (bool)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)arg1;
- (bool)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)arg1;
- (bool)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)arg1;
- (bool)supportsSystemCapabilityWithName:(id)arg1 subscriptionContext:(id)arg2;
- (id)systemCapabilities;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1 error:(id*)arg2;
- (id)telephonyClient;

@end
