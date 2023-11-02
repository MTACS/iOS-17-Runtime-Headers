
@protocol DNDModeSelectionServiceListener <NSObject>

@required

- (void)modeSelectionService:(DNDModeSelectionService *)arg1 didReceiveAvailableModesUpdate:(NSArray *)arg2;
- (void)modeSelectionService:(DNDModeSelectionService *)arg1 didReceiveModesUpdate:(NSArray *)arg2;
- (void)modeSelectionService:(DNDModeSelectionService *)arg1 didReceiveUpdatedActiveModeAssertion:(DNDModeAssertion *)arg2 stateUpdate:(DNDStateUpdate *)arg3;

@end
