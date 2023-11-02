
@protocol SOSManagerClientObserver <NSObject>

@optional

- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;

@end
