
@protocol INResetTimerIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSNumber *)resetMultiple;
- (void)setResetMultiple:(NSNumber *)arg1;
- (void)setTargetTimer:(INTimer *)arg1;
- (INTimer *)targetTimer;

@end
