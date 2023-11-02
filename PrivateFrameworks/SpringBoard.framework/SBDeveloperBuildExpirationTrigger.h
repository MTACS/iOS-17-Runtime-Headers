
@interface SBDeveloperBuildExpirationTrigger : NSObject <SBAppInteractionEventSourceObserving> {
    SBAlertItemsController * _alertItemsController;
    <SBAppInteractionEventSourceProviding> * _eventSource;
    NSDate * _expirationDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_coverSheetDidDismiss:(id)arg1;
- (id)_initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 expirationDate:(id)arg3;
- (void)dealloc;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (id)initWithAlertItemsController:(id)arg1 eventSource:(id)arg2;
- (void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(bool)arg1 toLauncher:(bool)arg2;

@end
