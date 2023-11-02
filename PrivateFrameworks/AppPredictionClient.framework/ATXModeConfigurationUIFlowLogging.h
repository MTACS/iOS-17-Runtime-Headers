
@interface ATXModeConfigurationUIFlowLogging : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream * _modeConfigurationUIFlowLoggingBiomeStream;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg1;
- (void)logModeConfigurationChangesForModeUUID:(id)arg1 modeConfigurationUI:(int)arg2 modeConfigurationEntityType:(int)arg3 modeConfigurationType:(long long)arg4 previousEntityIdentifiers:(id)arg5 suggestedEntityIdentifiers:(id)arg6 candidateEntityIdentifiers:(id)arg7 currentEntityIdentifiers:(id)arg8;
- (void)logModeConfigurationChangesForModeUUID:(id)arg1 modeConfigurationUI:(int)arg2 modeConfigurationEntityType:(int)arg3 modeConfigurationType:(long long)arg4 previousEntityIdentifiers:(id)arg5 suggestedEntityIdentifiers:(id)arg6 currentEntityIdentifiers:(id)arg7;
- (void)logModeConfigurationChangesForModeUUID:(id)arg1 modeConfigurationUI:(int)arg2 modeConfigurationEntityType:(int)arg3 previousEntityIdentifiers:(id)arg4 suggestedEntityIdentifiers:(id)arg5 currentEntityIdentifiers:(id)arg6;
- (void)logModeConfigurationChangesOnboardingDismissedForModeUUID:(id)arg1;

@end
