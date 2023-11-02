
@interface DNDSSystemFocusConfigurationCoordinator : NSObject <DNDSAppConfigurationManagerDelegate, WFShojiSystemActionsRunnerClientDelegate> {
    DNDSAppConfigurationManager * _appConfigurationManager;
    NSMapTable * _clientToModeIdentifier;
    <DNDSSystemFocusConfigurationCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSSystemFocusConfigurationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentModeIdentifier;
- (void)_executeAction:(id)arg1;
- (void)appConfigurationManager:(id)arg1 didClearSystemAction:(id)arg2 modeIdentifier:(id)arg3;
- (void)appConfigurationManager:(id)arg1 didClearSystemActionsInModeIdentifiers:(id)arg2;
- (void)appConfigurationManager:(id)arg1 didSetSystemAction:(id)arg2 modeIdentifier:(id)arg3;
- (id)delegate;
- (void)handleStateUpdate:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningAction:(id)arg2 withReverseAction:(id)arg3;

@end
