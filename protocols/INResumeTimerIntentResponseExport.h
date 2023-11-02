
@protocol INResumeTimerIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)resumedTimers;
- (void)setResumedTimers:(NSArray *)arg1;

@end
