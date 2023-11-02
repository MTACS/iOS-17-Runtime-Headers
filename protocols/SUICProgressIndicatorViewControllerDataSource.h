
@protocol SUICProgressIndicatorViewControllerDataSource <NSProgressReporting>

@required

- (SUICProgressStateMachine *)stateMachineForProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg1;

@optional

- (bool)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg3;

@end
