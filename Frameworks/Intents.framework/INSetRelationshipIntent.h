
@interface INSetRelationshipIntent : INIntent <INSetRelationshipIntentExport>

@property (nonatomic, readonly, copy) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INModifyRelationship *targetRelationship;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)contactIdentifiers;
- (id)domain;
- (id)initWithContactIdentifiers:(id)arg1 targetRelationship:(id)arg2;
- (id)parametersByName;
- (void)setContactIdentifiers:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTargetRelationship:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetRelationship;
- (id)verb;

@end
