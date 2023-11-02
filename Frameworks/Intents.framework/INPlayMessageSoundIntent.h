
@interface INPlayMessageSoundIntent : INIntent <INPlayMessageSoundIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageIdentifier;
@property (nonatomic, readonly) long long soundType;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithSoundType:(long long)arg1 messageIdentifier:(id)arg2;
- (id)messageIdentifier;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (long long)soundType;
- (id)verb;

@end
