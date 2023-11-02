
@interface MCMCommandCrashTest : MCMCommand <MCMParametersCrashTest> {
    unsigned long long  _crashCount;
}

@property (nonatomic, readonly) unsigned long long crashCount;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (unsigned long long)crashCount;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;

@end
