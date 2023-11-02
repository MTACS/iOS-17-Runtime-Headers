
@interface INSearchForTimersIntent : INIntent <INSearchForTimersIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (double)duration;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 state:(long long)arg3 type:(long long)arg4;
- (id)label;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (long long)state;
- (long long)type;
- (id)verb;

@end
