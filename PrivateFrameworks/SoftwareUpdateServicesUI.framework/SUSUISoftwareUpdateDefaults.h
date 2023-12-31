
@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain {
    NSUserDefaults * _sbLegacyDefaults;
}

@property (nonatomic, retain) NSString *lastOSVersion;
@property (nonatomic) bool needsAlertPresentationAfterOTAUpdate;
@property (nonatomic, retain) NSDictionary *softwareUpdateState;

- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)_clearLegacySpringBoardPreferences;
- (id)_initWithLegacyDefaults:(id)arg1;
- (void)_migrateLegacySpringBoardPreferences;
- (void)clearDeveloperInstallBrickAlerts;
- (id)init;
- (void)migrateAndClearLegacyPreferences;

@end
