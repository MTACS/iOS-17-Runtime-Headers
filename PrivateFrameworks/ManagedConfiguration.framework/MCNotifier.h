
@interface MCNotifier : NSObject

- (void)sendActivationLockBypassCodeWasStoredNotification;
- (void)sendActivationRecordStoredNotification;
- (void)sendAirPlayPreferencesChangedNotification;
- (void)sendAllowPasscodeModificationChangedNotification;
- (void)sendAppWhitelistChangedNotification;
- (void)sendCleanupMigrationFinishedNotification;
- (void)sendClientTruthChangedNotification;
- (void)sendCloudConfigurationDetailsChangedNotification;
- (void)sendDependencyChangedNotification;
- (void)sendDiagnosticsCollectedNotification;
- (void)sendEffectiveSettingsChangedNotificationWithPID:(int)arg1;
- (void)sendHomeScreenLayoutChangedNotification;
- (void)sendKeyboardSettingsChangedNotification;
- (void)sendManagedAppsChangedNotification;
- (void)sendManagedBooksChangedNotification;
- (void)sendNewsSettingsChangedNotification;
- (void)sendPasscodeChangedNotification;
- (void)sendPasscodePolicyChangedNotification;
- (void)sendProfileListChangedNotification;
- (void)sendRemovedSystemAppsChangedNotification;
- (void)sendRestrictionChangedNotification;
- (void)sendSafariCookiePolicyChangedNotification;
- (void)sendSettingsChangedNotification;
- (void)sendTriggerRollKeybagsNotification;
- (void)sendUnlockScreenTypeDidChangeNotification;
- (void)sendUserNotificationsSettingsChangedNotification;
- (void)sendWebContentFilterChangedNotification;
- (void)sendWebContentFilterTypeChangedNotification;
- (void)sendWebContentFilterUIActiveChangedNotification;

@end
