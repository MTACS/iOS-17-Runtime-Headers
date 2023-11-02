
@protocol INDeleteTimerIntentExport <NSObject, JSExport>

@required

- (NSNumber *)deleteMultiple;
- (id)init;
- (void)setDeleteMultiple:(NSNumber *)arg1;
- (void)setTargetTimer:(INTimer *)arg1;
- (INTimer *)targetTimer;

@end
