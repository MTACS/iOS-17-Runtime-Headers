
@interface INEditMessageIntent : INIntent <INEditMessageIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *editedContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageIdentifier;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)editedContent;
- (id)initWithMessageIdentifier:(id)arg1 editedContent:(id)arg2;
- (id)messageIdentifier;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setEditedContent:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
