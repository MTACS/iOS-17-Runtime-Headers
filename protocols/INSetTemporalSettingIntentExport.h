
@protocol INSetTemporalSettingIntentExport <NSObject, JSExport>

@required

- (long long)action;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (void)setTimeValue:(INDateComponentsRange *)arg1;
- (INSettingMetadata *)settingMetadata;
- (INTemporalEventTrigger *)temporalEventTrigger;
- (INDateComponentsRange *)timeValue;

@end
