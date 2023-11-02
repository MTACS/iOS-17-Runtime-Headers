
@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider> {
    CNCache * _cachedAccounts;
    CNCache * _cachedContactToContainerIDs;
    CNCache * _cachedContainers;
    CNCache * _cachedPolicies;
    CNCache * _cachedTopAccounts;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) CNCache *cachedAccounts;
@property (nonatomic, retain) CNCache *cachedContactToContainerIDs;
@property (nonatomic, retain) CNCache *cachedContainers;
@property (nonatomic, retain) CNCache *cachedPolicies;
@property (nonatomic, retain) CNCache *cachedTopAccounts;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isCandidatePolicy:(id)arg1 ofContactInCandidateContainerWithType:(long long)arg2 preferredOverPolicy:(id)arg3 ofContactInContainerWithType:(long long)arg4;
+ (bool)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg1;

- (void).cxx_destruct;
- (id)_accountForContainer:(id)arg1;
- (id)_policyForContact:(id)arg1;
- (id)_uncachedContainerForContact:(id)arg1 inStore:(id)arg2;
- (id)accountForContact:(id)arg1;
- (id)accountForContainer:(id)arg1;
- (id)accountForContainer:(id)arg1 shouldUseTopLevelAccount:(bool)arg2;
- (id)bestPolicyForContact:(id)arg1;
- (id)cachedAccounts;
- (id)cachedContactToContainerIDs;
- (id)cachedContainers;
- (id)cachedPolicies;
- (id)cachedTopAccounts;
- (id)contactStore;
- (id)containerForContact:(id)arg1;
- (id)containerIdentifierForContact:(id)arg1;
- (id)defaultContainerPolicy;
- (id)init;
- (id)nts_lazyContactStore;
- (id)policyForContact:(id)arg1;
- (id)policyForContainer:(id)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1;
- (id)policyForDefaultContainer;
- (id)predicateForContainerForContact:(id)arg1 inStore:(id)arg2;
- (void)resetCache;
- (void)setCachedAccounts:(id)arg1;
- (void)setCachedContactToContainerIDs:(id)arg1;
- (void)setCachedContainers:(id)arg1;
- (void)setCachedPolicies:(id)arg1;
- (void)setCachedTopAccounts:(id)arg1;
- (void)setContactStore:(id)arg1;

@end
