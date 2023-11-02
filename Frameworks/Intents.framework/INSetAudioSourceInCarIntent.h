
@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>

@property (nonatomic, readonly) long long audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long relativeAudioSourceReference;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)audioSource;
- (id)domain;
- (id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2;
- (id)parametersByName;
- (long long)relativeAudioSourceReference;
- (void)setAudioSource:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeAudioSourceReference:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
