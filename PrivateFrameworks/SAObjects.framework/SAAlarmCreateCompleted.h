
@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSURL *alarmId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)createCompleted;
+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlarmId:(id)arg1;

@end
