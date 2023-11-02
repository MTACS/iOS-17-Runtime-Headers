
@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTimer *targetTimer;
@property (nonatomic, readonly) double toDuration;
@property (nonatomic, readonly, copy) INSpeakableString *toLabel;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTargetTimer:(id)arg1;
- (void)setToDuration:(double)arg1;
- (void)setToLabel:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetTimer;
- (double)toDuration;
- (id)toLabel;
- (id)verb;

@end
