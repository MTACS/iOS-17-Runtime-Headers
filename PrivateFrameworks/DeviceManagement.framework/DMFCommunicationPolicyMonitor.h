
@interface DMFCommunicationPolicyMonitor : NSObject {
    DMFApplicationPolicyMonitor * _applicationPolicyMonitor;
    bool  _didFetchInitialPolicies;
    NSUUID * _identifier;
    NSDictionary * _policiesByBundleIdentifier;
    NSArray * _policyTypes;
}

@property (nonatomic, readonly) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (nonatomic) bool didFetchInitialPolicies;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *policiesByBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *policyTypes;

+ (id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2;
+ (id)_categoryForCommunicationBundleIdentifier:(id)arg1;
+ (id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1;
+ (id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1;
+ (id)communicationBundleIdentifiers;
+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(bool)arg2;
+ (id)new;

- (void).cxx_destruct;
- (void)_updatePoliciesByBundleIdentifier;
- (void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2;
- (id)applicationPolicyMonitor;
- (void)dealloc;
- (bool)didFetchInitialPolicies;
- (id)identifier;
- (id)init;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (id)policiesByBundleIdentifier;
- (id)policyTypes;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id /* block */)arg1;
- (id)requestPoliciesByBundleIdentifierWithError:(id*)arg1;
- (void)setDidFetchInitialPolicies:(bool)arg1;
- (void)setPoliciesByBundleIdentifier:(id)arg1;

@end
