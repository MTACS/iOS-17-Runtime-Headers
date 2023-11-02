
@interface ATXInterruptionManager : NSObject {
    ATXDNDModeConfigurationClient * _modeConfigurationClient;
    <ATXModeEntityScorerProtocol> * _modesModels;
    ATXNotificationManagementMAConstants * _notificationManagementConstants;
    <ATXNotificationSettingsReaderProtocol> * _notificationSettingsReader;
}

- (void).cxx_destruct;
- (bool)appSatisfiesRelevanceCriteriaForAllowOrSilenceList:(id)arg1;
- (id)init;
- (id)initWithModesModels:(id)arg1 notificationSettingsReader:(id)arg2 modeConfigurationClient:(id)arg3;
- (id)recommendedAllowedAppsForMode:(unsigned long long)arg1;
- (id)recommendedAllowedContactsForContactScores:(id)arg1;
- (void)recommendedAllowedContactsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedAllowedContactsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAllowedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedAppsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedAppsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedAppsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedContactsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedContactsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateAllowedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedAppsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedAppsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedAppsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedContactsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedContactsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (void)recommendedAndCandidateDeniedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)recommendedDeniedAppsForMode:(unsigned long long)arg1;
- (void)recommendedDeniedContactsForDNDMode:(id)arg1 reply:(id /* block */)arg2;
- (void)recommendedDeniedContactsForDNDModeSemanticType:(long long)arg1 reply:(id /* block */)arg2;
- (id)recommendedDeniedContactsForMode:(unsigned long long)arg1;
- (void)recommendedDeniedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;

@end
