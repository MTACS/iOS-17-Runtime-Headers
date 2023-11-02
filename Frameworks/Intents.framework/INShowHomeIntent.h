
@interface INShowHomeIntent : INIntent <INShowHomeIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INDateComponentsRange *time;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)filters;
- (id)initWithFilters:(id)arg1 time:(id)arg2;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)time;
- (id)verb;

@end
