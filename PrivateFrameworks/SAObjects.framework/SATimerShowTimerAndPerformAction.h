
@interface SATimerShowTimerAndPerformAction : SAUISnippet

@property (nonatomic, retain) <SATimerTimerAction> *timerAction;

+ (id)showTimerAndPerformAction;
+ (id)showTimerAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTimerAction:(id)arg1;
- (id)timerAction;

@end
