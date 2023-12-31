
@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic, retain) SAAlarmObject *alarmToCreate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlarmToCreate:(id)arg1;

@end
