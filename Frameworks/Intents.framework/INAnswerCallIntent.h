
@interface INAnswerCallIntent : INIntent <INAnswerCallIntentExport>

@property (nonatomic, readonly) long long audioRoute;
@property (nonatomic, readonly, copy) NSString *callIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)audioRoute;
- (id)callIdentifier;
- (id)domain;
- (id)initWithAudioRoute:(long long)arg1;
- (id)initWithAudioRoute:(long long)arg1 callIdentifier:(id)arg2;
- (id)parametersByName;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallIdentifier:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
