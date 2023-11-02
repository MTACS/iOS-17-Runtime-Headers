
@interface INDeleteEventIntent : INIntent <INDeleteEventIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSNumber *deleteAllOccurrences;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetEventIdentifier;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)deleteAllOccurrences;
- (id)domain;
- (id)initWithTargetEventIdentifier:(id)arg1 deleteAllOccurrences:(id)arg2;
- (id)parametersByName;
- (void)setDeleteAllOccurrences:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTargetEventIdentifier:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetEventIdentifier;
- (id)verb;

@end
