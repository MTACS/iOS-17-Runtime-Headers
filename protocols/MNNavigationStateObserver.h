
@protocol MNNavigationStateObserver <NSObject>

@optional

- (void)stateManager:(MNNavigationStateManager *)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(MNNavigationStateManager *)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;

@end
