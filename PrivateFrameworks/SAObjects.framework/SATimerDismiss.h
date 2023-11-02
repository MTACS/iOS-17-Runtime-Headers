
@interface SATimerDismiss : SADomainCommand

@property (nonatomic, copy) NSArray *timerIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setTimerIds:(id)arg1;
- (id)timerIds;

@end
