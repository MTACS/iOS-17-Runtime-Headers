
@protocol INResumeTimerIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSNumber *)resumeMultiple;
- (void)setResumeMultiple:(NSNumber *)arg1;
- (void)setTargetTimer:(INTimer *)arg1;
- (INTimer *)targetTimer;

@end
