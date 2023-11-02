
@interface SAAlarmDismiss : SADomainCommand

@property (nonatomic, copy) NSArray *alarmIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAlarmIds:(id)arg1;

@end
