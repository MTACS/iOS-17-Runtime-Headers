
@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (nonatomic, readonly, copy) INSpeakableString *accountNickname;
@property (nonatomic, readonly) long long accountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *organizationName;
@property (nonatomic, readonly) long long requestedBalanceType;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)accountNickname;
- (long long)accountType;
- (id)domain;
- (id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4;
- (id)organizationName;
- (id)parametersByName;
- (long long)requestedBalanceType;
- (void)setAccountNickname:(id)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRequestedBalanceType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
