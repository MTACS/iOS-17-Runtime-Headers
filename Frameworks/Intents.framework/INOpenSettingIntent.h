
@interface INOpenSettingIntent : INIntent <INOpenSettingIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *searchQuery;
@property (nonatomic, readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1 searchQuery:(id)arg2;
- (id)parametersByName;
- (id)searchQuery;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)settingMetadata;
- (id)verb;

@end
