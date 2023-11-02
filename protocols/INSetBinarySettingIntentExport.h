
@protocol INSetBinarySettingIntentExport <NSObject, JSExport>

@required

- (long long)binaryValue;
- (id)init;
- (void)setBinaryValue:(long long)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSettingMetadata *)settingMetadata;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
