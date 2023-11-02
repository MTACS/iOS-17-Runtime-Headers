
@protocol UIRepeatedActionDelegate <NSObject>

@required

- (id)repeatedAction:(UIRepeatedAction *)arg1 willInvokeWithObject:(id)arg2 forPhase:(unsigned long long)arg3;
- (bool)shouldInvokeRepeatedAction:(UIRepeatedAction *)arg1 forPhase:(unsigned long long)arg2;

@end
