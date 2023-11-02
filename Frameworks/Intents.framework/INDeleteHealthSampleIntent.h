
@interface INDeleteHealthSampleIntent : INIntent <INDeleteHealthSampleIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *sampleUuids;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithSampleUuids:(id)arg1;
- (id)parametersByName;
- (id)sampleUuids;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSampleUuids:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
