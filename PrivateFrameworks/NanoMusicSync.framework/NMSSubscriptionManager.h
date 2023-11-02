
@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {
    ACAccountStore * _accountStore;
    ACAccount * _activeAccount;
    unsigned long long  _failedGetSubscriptionStatusAttempts;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _subscriptionCapabilities;
    long long  _subscriptionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long subscriptionCapabilities;
@property (nonatomic, readonly) long long subscriptionType;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_retrySubscriptionStatusRequest;
- (void)_updateActiveAccount;
- (void)_updateSubscriptionStatus;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (bool)hasCapability:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)subscriptionCapabilities;
- (long long)subscriptionType;

@end
