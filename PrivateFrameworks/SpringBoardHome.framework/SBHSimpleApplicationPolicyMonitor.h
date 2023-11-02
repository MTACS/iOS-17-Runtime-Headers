
@interface SBHSimpleApplicationPolicyMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    DMFApplicationPolicyMonitor * _policyMonitor;
    NSHashTable * _registeredApplications;
}

@property (nonatomic, readonly) DMFApplicationPolicyMonitor *policyMonitor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)policyMonitor;
- (void)registerApplication:(id)arg1;
- (void)unregisterApplication:(id)arg1;
- (void)updateAllPolicies;

@end
