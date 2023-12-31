
@interface SAAlarmSnooze : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic, copy) NSArray *alarmIds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)snooze;
+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAlarmIds:(id)arg1;

@end
