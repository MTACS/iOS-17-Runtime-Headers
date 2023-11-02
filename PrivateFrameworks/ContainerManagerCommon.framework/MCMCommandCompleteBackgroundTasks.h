
@interface MCMCommandCompleteBackgroundTasks : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (bool)preflightClientAllowed;

@end
