
@interface HDNotificationInstructionQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
