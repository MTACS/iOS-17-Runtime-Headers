
@interface SUSUIMockedSoftwareUpdateClientManager : SUSUISoftwareUpdateClientManager <SUSMKSoftwareUpdateServicesResponderDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isAutoDownloadEnabled;
- (bool)isAutoInstallEnabled;
- (bool)isAutoInstallPreviousUserSettingsEnabled;
- (bool)isAutomaticInstallSystemDataFilesEnabled;
- (bool)isSecurityResponseEnabled;
- (id)preferences;
- (bool)previousUserSpecifiedSecurityResponseEnabled;
- (void)queue_enableAutoInstallPreviousUserSettings:(bool)arg1;
- (void)queue_enableAutomaticInstallSystemDataFiles:(bool)arg1;
- (void)queue_setAutoDownloadEnabled:(bool)arg1;
- (void)queue_setAutoInstallEnabled:(bool)arg1;
- (void)queue_setPreviousUserSpecifiedSecurityResponseStatus:(bool)arg1;
- (void)queue_setSecurityResponseEnabled:(bool)arg1;

@end
