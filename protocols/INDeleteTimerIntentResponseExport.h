
@protocol INDeleteTimerIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)deletedTimers;
- (void)setDeletedTimers:(NSArray *)arg1;

@end
