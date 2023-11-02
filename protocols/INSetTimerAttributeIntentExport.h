
@protocol INSetTimerAttributeIntentExport <NSObject, JSExport>

@required

- (id)init;
- (void)setTargetTimer:(INTimer *)arg1;
- (void)setToDuration:(double)arg1;
- (void)setToLabel:(INSpeakableString *)arg1;
- (INTimer *)targetTimer;
- (double)toDuration;
- (INSpeakableString *)toLabel;

@end
