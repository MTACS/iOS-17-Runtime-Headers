
@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=hasDeveloperInstallBrickAlertShown3DayWarning, nonatomic) bool developerInstallBrickAlertShown3DayWarning;
@property (getter=hasDeveloperInstallBrickAlertShown7DayWarning, nonatomic) bool developerInstallBrickAlertShown7DayWarning;
@property (getter=hasDeveloperInstallBrickAlertShownTomorrowWarning, nonatomic) bool developerInstallBrickAlertShownTomorrowWarning;

- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;

@end
