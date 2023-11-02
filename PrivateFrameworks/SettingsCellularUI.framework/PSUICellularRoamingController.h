
@interface PSUICellularRoamingController : PSListController {
    PSSpecifier * _cdmaRoamingSpecifier;
    PSSpecifier * _dataRoamingSpecifier;
    struct __CTServerConnection { } * _serverConnection;
    PSSpecifier * _voiceRoamingSpecifier;
}

- (void).cxx_destruct;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(bool)arg1;
- (id)cdmaRoamingSpecifiers;
- (void)cellularPlanChangedNotification:(id)arg1;
- (id)dataRoamingSpecifiers;
- (void)dealloc;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getDataRoamingStatusForService:(id)arg1 specifier:(id)arg2;
- (id)getLogger;
- (id)getVoiceRoamingStatus:(id)arg1;
- (id)init;
- (void)newCarrierNotification;
- (void)reloadRoamingStatus;
- (void)roamingOptionsDidChange;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
