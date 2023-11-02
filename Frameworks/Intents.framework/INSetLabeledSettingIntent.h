
@interface INSetLabeledSettingIntent : INIntent <INSetLabeledSettingIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *labeledValue;
@property (nonatomic, readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1 labeledValue:(id)arg2 temporalEventTrigger:(id)arg3;
- (id)labeledValue;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (id)verb;

@end
