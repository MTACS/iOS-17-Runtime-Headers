
@interface INSetMessageAttributeIntent : INIntent <INSetMessageAttributeIntentExport>

@property (nonatomic, readonly) long long attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)attribute;
- (id)domain;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 attribute:(long long)arg2;
- (id)parametersByName;
- (void)setAttribute:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
