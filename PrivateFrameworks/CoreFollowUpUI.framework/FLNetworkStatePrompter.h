
@interface FLNetworkStatePrompter : NSObject {
    UIViewController * _presenter;
}

- (void).cxx_destruct;
- (id)_cancelActionWithCompletionHandler:(id /* block */)arg1;
- (id)_disableAirplaneActionWithCompletionHandler:(id /* block */)arg1;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id /* block */)arg1;
- (void)_mainQueue_verificationFailedAlert;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1;
- (void)preflightNetworkStateWithCompletionHandler:(id /* block */)arg1;

@end
