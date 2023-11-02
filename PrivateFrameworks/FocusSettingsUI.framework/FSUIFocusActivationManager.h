
@interface FSUIFocusActivationManager : NSObject <DNDModeSelectionServiceListener> {
    DNDModeAssertion * _latestModeAssertion;
    NSMutableArray * _listeners;
    NSObject<OS_dispatch_queue> * _listenersQueue;
    DNDModeSelectionService * _modeSelectionService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_modeSelectionService;
- (void)_notifyListenersOfActiveModeAssertionChange:(id)arg1;
- (void)addListenerForFocusActivationChanges:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isActiveMode:(id)arg1;
- (void)modeSelectionService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveModesUpdate:(id)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveUpdatedActiveModeAssertion:(id)arg2 stateUpdate:(id)arg3;
- (void)removeListenerForFocusActivationChanges:(id)arg1;
- (void)setMode:(id)arg1 isActive:(bool)arg2;

@end
