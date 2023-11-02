
@protocol INSetLabeledSettingIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)labeledValue;
- (void)setLabeledValue:(NSString *)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSettingMetadata *)settingMetadata;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
