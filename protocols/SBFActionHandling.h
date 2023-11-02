
@protocol SBFActionHandling <NSObject>

@required

- (bool)handleAction:(BSAction *)arg1 forProvider:(id <SBFActionProviding>)arg2;
- (bool)handlesActionWithClass:(Class)arg1;

@end
