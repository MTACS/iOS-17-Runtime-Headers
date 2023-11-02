
@interface INSetTemporalSettingIntent : INIntent <INSetTemporalSettingIntentExport>

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly, copy) INDateComponentsRange *timeValue;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)action;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1 timeValue:(id)arg2 temporalEventTrigger:(id)arg3 action:(long long)arg4;
- (id)parametersByName;
- (void)setAction:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setTimeValue:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (id)timeValue;
- (id)verb;

@end
