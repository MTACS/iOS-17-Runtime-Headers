
@protocol DNDSRemoteServiceProviderModeConfigurationsDelegate <NSObject>

@required

- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 allModesReturningError:(id*)arg2;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 allowedModesForContactHandle:(DNDContactHandle *)arg2 withError:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 availableModesReturningError:(id*)arg2;
- (DNDModeConfiguration *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 modeConfigurationForModeIdentifier:(NSString *)arg2 withError:(id*)arg3;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 modeConfigurationsWithError:(id*)arg2;
- (NSString *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 publishStatusKitAvailabilityReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 removeModeConfigurationWithModeIdentifier:(NSString *)arg2 deletePlaceholder:(bool)arg3 withError:(id*)arg4;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2 withError:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 silencedModesForContactHandle:(DNDContactHandle *)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 syncModeConfigurationsReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 userAvailabilityInActiveModeForContactHandle:(DNDContactHandle *)arg2 withError:(id*)arg3;

@end
