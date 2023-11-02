
@protocol DNDRemoteServiceClientModeSelectionProtocol <NSObject>

@required

- (oneway void)deliverActiveModeAssertion:(DNDModeAssertion *)arg1 stateUpdate:(DNDStateUpdate *)arg2 clientIdentifiers:(NSArray<__NSString__> *)arg3;
- (oneway void)deliverAllModes:(NSArray<__DNDMode__> *)arg1;
- (oneway void)deliverAvailableModes:(NSArray<__DNDMode__> *)arg1;
- (oneway void)signalAppConfigurationContextUpdateForModeIdentifier:(NSString *)arg1;

@end
