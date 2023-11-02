
@protocol INPauseTimerIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSNumber *)pauseMultiple;
- (void)setPauseMultiple:(NSNumber *)arg1;
- (void)setTargetTimer:(INTimer *)arg1;
- (INTimer *)targetTimer;

@end
