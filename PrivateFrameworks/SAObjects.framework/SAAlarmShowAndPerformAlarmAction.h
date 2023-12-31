
@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (nonatomic, retain) <SAAlarmAlarmAction> *alarmAction;

+ (id)showAndPerformAlarmAction;
+ (id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmAction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlarmAction:(id)arg1;

@end
