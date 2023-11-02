
@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet

@property (nonatomic, retain) <SAAlarmAlarmAction> *alarmAction;

+ (id)showAlarmAndPerformAction;
+ (id)showAlarmAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmAction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlarmAction:(id)arg1;

@end
