
@interface INStopShareETAIntent : INIntent <INStopShareETAIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithRecipients:(id)arg1;
- (id)parametersByName;
- (id)recipients;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
