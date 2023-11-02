
@interface INSetBinarySettingIntent : INIntent <INSetBinarySettingIntentExport>

@property (nonatomic, readonly) long long binaryValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
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
- (long long)binaryValue;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1 binaryValue:(long long)arg2 temporalEventTrigger:(id)arg3;
- (id)parametersByName;
- (void)setBinaryValue:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (id)verb;

@end
