
@protocol INSetTaskAttributeIntentExport <NSObject, JSExport>

@required

- (INContactEventTrigger *)contactEventTrigger;
- (id)init;
- (long long)priority;
- (void)setContactEventTrigger:(INContactEventTrigger *)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetTask:(INTask *)arg1;
- (void)setTaskTitle:(INSpeakableString *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSpatialEventTrigger *)spatialEventTrigger;
- (long long)status;
- (INTask *)targetTask;
- (INSpeakableString *)taskTitle;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
