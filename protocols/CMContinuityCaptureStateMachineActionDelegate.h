
@protocol CMContinuityCaptureStateMachineActionDelegate <NSObject>

@required

- (NSArray *)aggregateEvents:(NSArray *)arg1;
- (void)postActionCompletionForEventName:(NSString *)arg1 eventData:(NSDictionary *)arg2 error:(NSError *)arg3;
- (bool)postActionGuardOfType:(unsigned long long)arg1 forEventName:(NSString *)arg2 option:(unsigned long long)arg3;
- (void)postActionOfType:(unsigned long long)arg1 forEvent:(CMContinuityCaptureStateMachineEvent *)arg2 option:(unsigned long long)arg3;

@end
