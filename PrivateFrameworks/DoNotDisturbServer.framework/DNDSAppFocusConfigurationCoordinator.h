
@interface DNDSAppFocusConfigurationCoordinator : NSObject <DNDSAppConfigurationManagerDelegate> {
    DNDSAppConfigurationManager * _appConfigurationManager;
    <DNDSAppFocusConfigurationCoordinatorDelegate> * _delegate;
    NSMutableDictionary * _groupDetails;
    <DNDSKeybagStateProviding> * _keybag;
    NSMutableDictionary * _queuedTasksByBundleIdentifier;
    NSMutableDictionary * _taskGroups;
    NSObject<OS_dispatch_queue> * _workQueue;
    DNDSXPCEventPublisher * _xpcEventPublisher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSAppFocusConfigurationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addTask:(id)arg1 toGroupWithIdentifier:(id)arg2;
- (id)_currentModeIdentifier;
- (void)_executeAction:(id)arg1 orActionIdentifier:(id)arg2 withBundleIdentifier:(id)arg3 modeIdentifier:(id)arg4 groupIdentifier:(id)arg5 exiting:(bool)arg6 metadataProvider:(id)arg7;
- (void)_executeAction:(id)arg1 withBundleIdentifier:(id)arg2 modeIdentifier:(id)arg3 groupIdentifier:(id)arg4;
- (void)_executeOrQueueTask:(id)arg1 completion:(id /* block */)arg2;
- (void)_executeQueuedTaskFollowingTask:(id)arg1;
- (id)_groupIdentifierForStateUpdate:(id)arg1;
- (void)_groupWithIdentifierCompleted:(id)arg1;
- (void)_incrementTasksExecutedForGroupWithIdentifier:(id)arg1;
- (bool)_removeTask:(id)arg1 fromGroupWithIdentifier:(id)arg2;
- (bool)_shouldExecuteActionOnApplicationWithBundleIdentifier:(id)arg1;
- (void)_workQueue_handleFirstLaunch;
- (void)_xpcCheckIn;
- (void)appConfigurationManager:(id)arg1 didClearActionWithIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4;
- (void)appConfigurationManager:(id)arg1 didClearActionsForAppsInModeIdentifiers:(id)arg2;
- (void)appConfigurationManager:(id)arg1 didSetAction:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4;
- (id)delegate;
- (void)handleStateUpdate:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1 keybagProviding:(id)arg2 xpcEventPublisher:(id)arg3;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
