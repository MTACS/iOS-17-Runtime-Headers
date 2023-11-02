
@interface VSUserAccountUpdateManager : NSObject <VSJSAppDelegate, VSStateMachineDelegate> {
    VSJSApp * _currentApp;
    VSUserAccountUpdateRequest * _currentUpdateRequest;
    <VSUserAccountUpdateManagerDelegate> * _delegate;
    VSStateMachine * _stateMachine;
    NSMutableSet * _updateRequests;
    NSMutableArray * _updatedUserAccounts;
    NSObject<OS_dispatch_source> * _watchdog;
}

@property (nonatomic, retain) VSJSApp *currentApp;
@property (nonatomic, retain) VSUserAccountUpdateRequest *currentUpdateRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSUserAccountUpdateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *updateRequests;
@property (nonatomic, retain) NSMutableArray *updatedUserAccounts;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *watchdog;

- (void).cxx_destruct;
- (void)_configureWatchdogWithSeconds:(unsigned long long)arg1;
- (id)_requestOptionsWithUserAccounts:(id)arg1 callback:(id)arg2;
- (void)app:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)app:(id)arg1 prewarmWithContext:(id)arg2;
- (void)appDidStart:(id)arg1;
- (void)appDidStop:(id)arg1;
- (id)currentApp;
- (id)currentUpdateRequest;
- (id)delegate;
- (id)initWithUserAccountUpdateRequests:(id)arg1;
- (void)setCurrentApp:(id)arg1;
- (void)setCurrentUpdateRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setUpdateRequests:(id)arg1;
- (void)setUpdatedUserAccounts:(id)arg1;
- (void)setWatchdog:(id)arg1;
- (id)stateMachine;
- (void)transitionToBootingAppState;
- (void)transitionToEnqueuingNextUserAccountSetState;
- (void)transitionToInvokingOnRequestCallbackState;
- (void)transitionToNotifyingFinishState;
- (void)transitionToNotifyingForUserAccountSetState;
- (void)transitionToStoppingAppState;
- (id)updateRequests;
- (void)updateUserAccounts;
- (id)updatedUserAccounts;
- (id)watchdog;

@end
