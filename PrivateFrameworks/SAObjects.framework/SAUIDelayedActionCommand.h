
@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSNumber *timerValue;

+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommands:(id)arg1;
- (void)setTimerValue:(id)arg1;
- (id)timerValue;

@end
