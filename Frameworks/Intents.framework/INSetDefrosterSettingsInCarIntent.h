
@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic, readonly, copy) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defroster;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)carName;
- (long long)defroster;
- (id)domain;
- (id)enable;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3;
- (id)parametersByName;
- (void)setCarName:(id)arg1;
- (void)setDefroster:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
