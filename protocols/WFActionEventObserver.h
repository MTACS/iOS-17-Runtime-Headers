
@protocol WFActionEventObserver <NSObject>

@optional

- (void)action:(WFAction *)arg1 parameterStateDidChangeForKey:(NSString *)arg2;
- (void)action:(WFAction *)arg1 supplementalParameterValueDidChangeForKey:(NSString *)arg2;
- (void)actionIconDidChange:(WFAction *)arg1;
- (void)actionNameDidChange:(WFAction *)arg1;
- (void)actionOutputDetailsDidChange:(WFAction *)arg1;
- (void)actionReloadAuxiliaryButton:(WFAction *)arg1;
- (void)actionRunningStateDidChange:(WFAction *)arg1;

@end
