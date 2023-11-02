
@interface INListShortcutsIntent : INIntent <INListShortcutsIntentExport>

@property (nonatomic, readonly, copy) NSArray *appTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long originDevice;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)appTitles;
- (id)domain;
- (id)initWithOriginDevice:(long long)arg1 appTitles:(id)arg2;
- (long long)originDevice;
- (id)parametersByName;
- (void)setAppTitles:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setOriginDevice:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
