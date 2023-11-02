
@protocol INSetNumericSettingIntentExport <NSObject, JSExport>

@required

- (long long)action;
- (long long)boundedValue;
- (id)init;
- (INNumericSettingValue *)numericValue;
- (void)setAction:(long long)arg1;
- (void)setBoundedValue:(long long)arg1;
- (void)setNumericValue:(INNumericSettingValue *)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSettingMetadata *)settingMetadata;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
